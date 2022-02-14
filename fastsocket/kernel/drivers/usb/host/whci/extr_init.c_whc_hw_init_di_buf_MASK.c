
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct whc {int n_devices; scalar_t__ base; int di_buf_dma; TYPE_1__* di_buf; } ;
struct TYPE_2__ {int addr_sec_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct whc *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->n_devices; VAR_3++)
  VAR_2->di_buf[VAR_3].addr_sec_info = VAR_0;

 FUNC_0(VAR_2->di_buf_dma, VAR_2->base + VAR_1);
}
