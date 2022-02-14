
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {scalar_t__ desc_buf_len; int * desc_buf; int * lp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vio_driver_state *VAR_0)
{
 FUNC_1(VAR_0->lp);
 VAR_0->lp = ((void*)0);

 FUNC_0(VAR_0->desc_buf);
 VAR_0->desc_buf = ((void*)0);
 VAR_0->desc_buf_len = 0;
}
