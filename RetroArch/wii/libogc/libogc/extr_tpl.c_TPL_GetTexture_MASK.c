
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int s32 ;
struct TYPE_7__ {TYPE_1__* imghead; } ;
struct TYPE_6__ {int ntextures; scalar_t__ type; scalar_t__ tpl_file; scalar_t__ texdesc; } ;
struct TYPE_5__ {scalar_t__ maxlod; float lodbias; int edgelod; int minlod; int magfilter; int minfilter; int wrapt; int wraps; int fmt; int height; int width; scalar_t__ data; } ;
typedef TYPE_1__ TPLImgHeader ;
typedef TYPE_2__ TPLFile ;
typedef TYPE_3__ TPLDescHeader ;
typedef int GXTexObj ;
typedef int FILE ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int *,int ,int ,int ,scalar_t__,float,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (scalar_t__,int,int ,int *) ;
 int FUNC_5 (int *,int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

s32 FUNC_7(TPLFile *VAR_5,s32 VAR_6,GXTexObj *VAR_7)
{
 s32 VAR_8;
 u32 VAR_9;
 FILE *VAR_10 = ((void*)0);
 TPLDescHeader *VAR_11 = ((void*)0);
 TPLImgHeader *VAR_12 = ((void*)0);
 s32 VAR_13 = 0;
 u8 VAR_14 = VAR_0;

 if(!VAR_5) return -1;
 if(!VAR_7) return -1;
 if(VAR_6<0 || VAR_6>=VAR_5->ntextures) return -1;

 VAR_11 = (TPLDescHeader*)VAR_5->texdesc;
 if(!VAR_11) return -1;

 VAR_12 = VAR_11[VAR_6].imghead;
 if(!VAR_12) return -1;

 VAR_9 = FUNC_3(VAR_12->width,VAR_12->height,VAR_12->fmt);
 if(VAR_5->type==VAR_4) {
  VAR_10 = (FILE*)VAR_5->tpl_file;
  VAR_8 = (s32)VAR_12->data;
  VAR_12->data = FUNC_6(VAR_2,VAR_9);
  if(!VAR_12->data) return -1;

  FUNC_5(VAR_10,VAR_8,VAR_3);
  FUNC_4(VAR_12->data,1,VAR_9,VAR_10);
 }

 if(VAR_12->maxlod>0) VAR_13 = 1;
 if(VAR_12->lodbias>0.0f) VAR_14 = VAR_1;

 FUNC_0(VAR_12->data,VAR_9);
 FUNC_1(VAR_7,VAR_12->data,VAR_12->width,VAR_12->height,VAR_12->fmt,VAR_12->wraps,VAR_12->wrapt,VAR_13);
 if(VAR_13) FUNC_2(VAR_7,VAR_12->minfilter,VAR_12->magfilter,VAR_12->minlod,VAR_12->maxlod,
         VAR_12->lodbias,VAR_14,VAR_14,VAR_12->edgelod);

 return 0;
}
