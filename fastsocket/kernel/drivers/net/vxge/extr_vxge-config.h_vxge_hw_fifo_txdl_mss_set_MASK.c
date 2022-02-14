
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_hw_fifo_txd {int control_0; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_1, int VAR_2)
{
 struct vxge_hw_fifo_txd *VAR_3 = (struct vxge_hw_fifo_txd *)VAR_1;

 VAR_3->control_0 |= VAR_0;
 VAR_3->control_0 |= FUNC_0(VAR_2);
}
