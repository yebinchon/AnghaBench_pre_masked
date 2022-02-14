
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* palhead; TYPE_1__* imghead; } ;
struct TYPE_8__ {scalar_t__ type; int ntextures; int * tpl_file; TYPE_1__* texdesc; } ;
struct TYPE_7__ {struct TYPE_7__* data; } ;
typedef TYPE_1__ TPLPalHeader ;
typedef TYPE_1__ TPLImgHeader ;
typedef TYPE_3__ TPLFile ;
typedef TYPE_4__ TPLDescHeader ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(TPLFile *VAR_1)
{
 int VAR_2;
 FILE *VAR_3;
 TPLPalHeader *VAR_4;
 TPLImgHeader *VAR_5;
 TPLDescHeader *VAR_6;

 if(!VAR_1) return;

 if(VAR_1->type==VAR_0) {
  VAR_3 = (FILE*)VAR_1->tpl_file;
  if(VAR_3) FUNC_0(VAR_3);

  VAR_6 = (TPLDescHeader*)VAR_1->texdesc;
  if(!VAR_6) return;

  for(VAR_2=0;VAR_2<VAR_1->ntextures;VAR_2++) {
   VAR_5 = VAR_6[VAR_2].imghead;
   VAR_4 = VAR_6[VAR_2].palhead;
   if(VAR_5) {
    if(VAR_5->data) FUNC_1(VAR_5->data);
    FUNC_1(VAR_5);
   }
   if(VAR_4) {
    if(VAR_4->data) FUNC_1(VAR_4->data);
    FUNC_1(VAR_4);
   }
  }
  FUNC_1(VAR_1->texdesc);
 }

 VAR_1->ntextures = 0;
 VAR_1->texdesc = ((void*)0);
 VAR_1->tpl_file = ((void*)0);
}
