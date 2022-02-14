
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef int s32 ;
struct TYPE_7__ {TYPE_1__* imghead; } ;
struct TYPE_6__ {int ntextures; scalar_t__ texdesc; } ;
struct TYPE_5__ {int height; int width; int fmt; } ;
typedef TYPE_1__ TPLImgHeader ;
typedef TYPE_2__ TPLFile ;
typedef TYPE_3__ TPLDescHeader ;



s32 FUNC_0(TPLFile *VAR_0,s32 VAR_1,u32 *VAR_2,u16 *VAR_3,u16 *VAR_4)
{
 TPLDescHeader *VAR_5 = ((void*)0);
 TPLImgHeader *VAR_6 = ((void*)0);

 if(!VAR_0) return -1;
 if(VAR_1<0 || VAR_1>=VAR_0->ntextures) return -1;

 VAR_5 = (TPLDescHeader*)VAR_0->texdesc;
 if(!VAR_5) return -1;

 VAR_6 = VAR_5[VAR_1].imghead;
 if(!VAR_6) return -1;

 if(VAR_2) *VAR_2 = VAR_6->fmt;
 if(VAR_3) *VAR_3 = VAR_6->width;
 if(VAR_4) *VAR_4 = VAR_6->height;

 return 0;
}
