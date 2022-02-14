
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct proc {int p_textoff; int * p_textvp; } ;


 int FUNC_0 (int *,int ) ;

uint8_t
FUNC_1(struct proc *VAR_0)
{
 if (((void*)0) == VAR_0->p_textvp)
  return 0;

 return FUNC_0(VAR_0->p_textvp, VAR_0->p_textoff);
}
