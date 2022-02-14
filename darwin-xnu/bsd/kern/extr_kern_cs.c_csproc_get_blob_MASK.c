
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_csflags; int p_textoff; int * p_textvp; } ;
struct cs_blob {int dummy; } ;


 int VAR_0 ;
 struct cs_blob* FUNC_0 (int *,int,int ) ;

struct cs_blob *
FUNC_1(struct proc *VAR_1)
{
 if (((void*)0) == VAR_1)
  return ((void*)0);

 if (((void*)0) == VAR_1->p_textvp)
  return ((void*)0);

 if ((VAR_1->p_csflags & VAR_0) == 0) {
  return ((void*)0);
 }

 return FUNC_0(VAR_1->p_textvp, -1, VAR_1->p_textoff);
}
