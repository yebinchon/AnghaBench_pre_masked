
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
typedef int s32 ;
struct TYPE_9__ {TYPE_1__* palhead; TYPE_2__* imghead; } ;
struct TYPE_8__ {size_t ntextures; TYPE_4__* texdesc; scalar_t__ tpl_file; int type; } ;
struct TYPE_7__ {char* data; } ;
struct TYPE_6__ {char* data; } ;
typedef TYPE_1__ TPLPalHeader ;
typedef TYPE_2__ TPLImgHeader ;
typedef TYPE_3__ TPLFile ;
typedef TYPE_4__ TPLDescHeader ;
typedef scalar_t__ FHANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

s32 FUNC_0(TPLFile* VAR_3, void *VAR_4,u32 VAR_5)
{
 u32 VAR_6,VAR_7;
 const char *VAR_8 = VAR_4;
 TPLDescHeader *VAR_9 = ((void*)0);
 TPLImgHeader *VAR_10 = ((void*)0);
 TPLPalHeader *VAR_11 = ((void*)0);

 if(!VAR_4 || !VAR_5) return -1;

 VAR_3->type = VAR_0;
 VAR_3->tpl_file = (FHANDLE)((void*)0);


 VAR_3->ntextures = *(u32*)(VAR_8 + VAR_2);

 VAR_9 = (TPLDescHeader*)(VAR_8 + VAR_1);
 for(VAR_6=0;VAR_6<VAR_3->ntextures;VAR_6++) {
  VAR_10 = ((void*)0);
  VAR_11 = ((void*)0);

  VAR_7 = (u32)VAR_9[VAR_6].imghead;
  VAR_10 = (TPLImgHeader*)(VAR_8 + VAR_7);

  VAR_7 = (u32)VAR_10->data;
  VAR_10->data = (char*)(VAR_8 + VAR_7);

  VAR_7 = (u32)VAR_9[VAR_6].palhead;
  if(VAR_7) {
   VAR_11 = (TPLPalHeader*)(VAR_8 + VAR_7);

   VAR_7 = (u32)VAR_11->data;
   VAR_11->data = (char*)(VAR_8 + VAR_7);
  }
  VAR_9[VAR_6].imghead = VAR_10;
  VAR_9[VAR_6].palhead = VAR_11;
 }
 VAR_3->texdesc = VAR_9;

 return 1;
}
