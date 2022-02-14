
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int updateParam ;
struct TYPE_5__ {int depthSurfaceData; int colorSurfaceData; int strideInPixels; int height; int width; int surfaceType; int colorFormat; } ;
struct TYPE_6__ {int displaySyncObject; TYPE_1__ renderTarget; } ;
typedef TYPE_2__ SceCommonDialogUpdateParam ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2()
{
 SceCommonDialogUpdateParam VAR_9;
 FUNC_0(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.renderTarget.colorFormat = VAR_0;
 VAR_9.renderTarget.surfaceType = VAR_4;
 VAR_9.renderTarget.width = VAR_3;
 VAR_9.renderTarget.height = VAR_1;
 VAR_9.renderTarget.strideInPixels = VAR_2;

 VAR_9.renderTarget.colorSurfaceData = VAR_7[VAR_5];
 VAR_9.renderTarget.depthSurfaceData = VAR_6;
 VAR_9.displaySyncObject = VAR_8[VAR_5];

 return FUNC_1(&VAR_9);
}
