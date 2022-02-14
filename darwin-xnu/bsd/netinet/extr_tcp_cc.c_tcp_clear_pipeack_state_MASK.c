
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_lossflightsize; scalar_t__ t_pipeack_ind; int t_pipeack_sample; } ;


 int FUNC_0 (int ,int) ;

inline void
FUNC_1(struct tcpcb *VAR_0)
{
 FUNC_0(VAR_0->t_pipeack_sample, sizeof(VAR_0->t_pipeack_sample));
 VAR_0->t_pipeack_ind = 0;
 VAR_0->t_lossflightsize = 0;
}
