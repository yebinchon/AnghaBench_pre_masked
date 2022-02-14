
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_control_block_status {int isubstatus; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(void *VAR_1)
{
 struct gru_control_block_status *VAR_2 = (void *)VAR_1;

 return VAR_2->isubstatus & VAR_0;
}
