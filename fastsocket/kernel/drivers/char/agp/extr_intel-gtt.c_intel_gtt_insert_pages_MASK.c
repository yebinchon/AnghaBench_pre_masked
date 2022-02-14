
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ gtt; TYPE_1__* driver; } ;
struct TYPE_3__ {int (* write_entry ) (int ,int,unsigned int) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1,
       unsigned int VAR_2,
       struct page **VAR_3,
       unsigned int VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_6 = VAR_1; VAR_5 < VAR_2; VAR_5++, VAR_6++) {
  dma_addr_t VAR_7 = FUNC_0(VAR_3[VAR_5]);
  VAR_0.driver->write_entry(VAR_7,
        VAR_6, VAR_4);
 }
 FUNC_1(VAR_0.gtt+VAR_6-1);
}
