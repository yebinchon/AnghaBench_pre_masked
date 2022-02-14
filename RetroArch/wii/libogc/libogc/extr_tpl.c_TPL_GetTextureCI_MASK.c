
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int s32 ;
struct TYPE_9__ {TYPE_1__* palhead; TYPE_2__* imghead; } ;
struct TYPE_8__ {int ntextures; scalar_t__ type; scalar_t__ tpl_file; scalar_t__ texdesc; } ;
struct TYPE_7__ {scalar_t__ maxlod; float lodbias; int edgelod; int minlod; int magfilter; int minfilter; int wrapt; int wraps; int fmt; int height; int width; void* data; } ;
struct TYPE_6__ {int nitems; int fmt; void* data; } ;
typedef TYPE_1__ TPLPalHeader ;
typedef TYPE_2__ TPLImgHeader ;
typedef TYPE_3__ TPLFile ;
typedef TYPE_4__ TPLDescHeader ;
typedef int GXTlutObj ;
typedef int GXTexObj ;
typedef int FILE ;


 int FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,void*,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_2 (int *,int ,int ,int ,scalar_t__,float,int ,int ,int ) ;
 int FUNC_3 (int *,void*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (void*,int,int,int *) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *,int,int ) ;
 void* FUNC_8 (int ,int) ;

s32 FUNC_9(TPLFile *VAR_5,s32 VAR_6,GXTexObj *VAR_7,GXTlutObj *VAR_8,u8 VAR_9)
{
 s32 VAR_10;
 u32 VAR_11;
 FILE *VAR_12 = ((void*)0);
 TPLDescHeader *VAR_13 = ((void*)0);
 TPLImgHeader *VAR_14 = ((void*)0);
 TPLPalHeader *VAR_15 = ((void*)0);
 s32 VAR_16 = 0;
 u8 VAR_17 = VAR_0;

 if(!VAR_5) return -1;
 if(!VAR_7) return -1;
 if(!VAR_8) return -1;
  if(VAR_6<0 || VAR_6>=VAR_5->ntextures) return -1;

 VAR_13 = (TPLDescHeader*)VAR_5->texdesc;
 if(!VAR_13) return -1;

 VAR_14 = VAR_13[VAR_6].imghead;
 if(!VAR_14) return -1;

 VAR_15 = VAR_13[VAR_6].palhead;
 if(!VAR_15) return -1;

 VAR_11 = FUNC_4(VAR_14->width,VAR_14->height,VAR_14->fmt);
 if(VAR_5->type==VAR_4) {
  VAR_12 = (FILE*)VAR_5->tpl_file;
  VAR_10 = (s32)VAR_14->data;
  VAR_14->data = FUNC_8(VAR_2,VAR_11);
  if(!VAR_14->data) return -1;

  FUNC_7(VAR_12,VAR_10,VAR_3);
  FUNC_5(VAR_14->data,1,VAR_11,VAR_12);

  VAR_10 = (s32)VAR_15->data;
  VAR_15->data = FUNC_8(VAR_2,(VAR_15->nitems*sizeof(u16)));
  if(!VAR_15->data) {
   FUNC_6(VAR_14->data);
   return -1;
  }

  FUNC_7(VAR_12,VAR_10,VAR_3);
  FUNC_5(VAR_15->data,1,(VAR_15->nitems*sizeof(u16)),VAR_12);
 }

 if(VAR_14->maxlod>0) VAR_16 = 1;
 if(VAR_14->lodbias>0.0f) VAR_17 = VAR_1;

 FUNC_0(VAR_14->data,VAR_11);
 FUNC_0(VAR_15->data,(VAR_15->nitems*sizeof(u16)));
 FUNC_3(VAR_8,VAR_15->data,VAR_15->fmt,VAR_15->nitems);
 FUNC_1(VAR_7,VAR_14->data,VAR_14->width,VAR_14->height,VAR_14->fmt,VAR_14->wraps,VAR_14->wrapt,VAR_16,VAR_9);
 if(VAR_16) FUNC_2(VAR_7,VAR_14->minfilter,VAR_14->magfilter,VAR_14->minlod,VAR_14->maxlod,
            VAR_14->lodbias,VAR_17,VAR_17,VAR_14->edgelod);

 return 0;
}
