
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cs_blob {int dummy; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_csflags; int p_textoff; int * p_textvp; } ;


 int VAR_0 ;
 char const* FUNC_0 (struct cs_blob*) ;
 struct cs_blob* FUNC_1 (int *,int,int ) ;

const char *
FUNC_2(proc_t VAR_1)
{
 struct cs_blob *VAR_2;

 if ((VAR_1->p_csflags & VAR_0) == 0) {
  return ((void*)0);
 }

 if (((void*)0) == VAR_1->p_textvp)
  return ((void*)0);

 if ((VAR_2 = FUNC_1(VAR_1->p_textvp, -1, VAR_1->p_textoff)) == ((void*)0))
  return ((void*)0);

 return FUNC_0(VAR_2);
}
