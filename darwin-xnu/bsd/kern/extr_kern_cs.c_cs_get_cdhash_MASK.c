
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct proc {int p_csflags; int p_textoff; int * p_textvp; } ;
struct cs_blob {int * csb_cdhash; } ;


 int VAR_0 ;
 struct cs_blob* FUNC_0 (int *,int,int ) ;

uint8_t *
FUNC_1(struct proc *VAR_1)
{
 struct cs_blob *VAR_2;

 if ((VAR_1->p_csflags & VAR_0) == 0) {
  return ((void*)0);
 }

 if (((void*)0) == VAR_1->p_textvp)
  return ((void*)0);

 if ((VAR_2 = FUNC_0(VAR_1->p_textvp, -1, VAR_1->p_textoff)) == ((void*)0))
  return ((void*)0);

 return VAR_2->csb_cdhash;
}
