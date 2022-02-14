
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cs_blob {int dummy; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_csflags; int p_textoff; int * p_textvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cs_blob*,void**,size_t*) ;
 struct cs_blob* FUNC_1 (int *,int,int ) ;

int
FUNC_2(proc_t VAR_2, void **VAR_3, size_t *VAR_4)
{
 struct cs_blob *VAR_5;

 *VAR_3 = ((void*)0);
 *VAR_4 = 0;

 if ((VAR_2->p_csflags & VAR_0) == 0) {
  return 0;
 }

 if (((void*)0) == VAR_2->p_textvp)
  return VAR_1;

 if ((VAR_5 = FUNC_1(VAR_2->p_textvp, -1, VAR_2->p_textoff)) == ((void*)0))
  return 0;

 return FUNC_0(VAR_5, VAR_3, VAR_4);
}
