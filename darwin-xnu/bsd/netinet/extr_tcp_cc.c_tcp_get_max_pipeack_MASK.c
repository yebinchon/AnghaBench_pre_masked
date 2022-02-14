
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct tcpcb {scalar_t__* t_pipeack_sample; } ;



inline u_int32_t
FUNC_0(struct tcpcb *VAR_0)
{
 u_int32_t VAR_1 = 0;
 VAR_1 = (VAR_0->t_pipeack_sample[0] > VAR_0->t_pipeack_sample[1]) ?
     VAR_0->t_pipeack_sample[0] : VAR_0->t_pipeack_sample[1];
 VAR_1 = (VAR_0->t_pipeack_sample[2] > VAR_1) ?
     VAR_0->t_pipeack_sample[2] : VAR_1;

 return (VAR_1);
}
