
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cs_blob {size_t csb_mem_size; scalar_t__ csb_mem_kaddr; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_textoff; int * p_textvp; } ;


 int VAR_0 ;
 struct cs_blob* FUNC_0 (int *,int,int ) ;

int
FUNC_1(proc_t VAR_1, void **VAR_2, size_t *VAR_3)
{
 struct cs_blob *VAR_4;

 *VAR_2 = ((void*)0);
 *VAR_3 = 0;

 if (((void*)0) == VAR_1->p_textvp)
  return VAR_0;

 if ((VAR_4 = FUNC_0(VAR_1->p_textvp, -1, VAR_1->p_textoff)) == ((void*)0))
  return 0;

 *VAR_2 = (void *)VAR_4->csb_mem_kaddr;
 *VAR_3 = VAR_4->csb_mem_size;

 return 0;
}
