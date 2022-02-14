
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_region {int size; scalar_t__ offset; } ;
struct TYPE_2__ {scalar_t__ address; } ;


 TYPE_1__* VAR_0 ;
 struct io_region const* VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_2, const struct io_region *VAR_3)
{
 while (VAR_3 != VAR_1) {
  VAR_3--;
  FUNC_0(VAR_0->address + VAR_3->offset, VAR_3->size);
 }
}
