
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numImageAnimations; int imageAnimationSpeed; int * image; int videoMapHandle; scalar_t__ isVideoMap; } ;
typedef TYPE_1__ textureBundle_t ;
struct TYPE_7__ {int (* CIN_UploadCinematic ) (int ) ;int (* CIN_RunCinematic ) (int ) ;} ;
struct TYPE_6__ {int shaderTime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_4( textureBundle_t *VAR_4 ) {
 int VAR_5;

 if ( VAR_4->isVideoMap ) {
  VAR_2.CIN_RunCinematic(VAR_4->videoMapHandle);
  VAR_2.CIN_UploadCinematic(VAR_4->videoMapHandle);
  return;
 }

 if ( VAR_4->numImageAnimations <= 1 ) {
  FUNC_0( VAR_4->image[0] );
  return;
 }



 VAR_5 = FUNC_1( VAR_3.shaderTime * VAR_4->imageAnimationSpeed * VAR_0 );
 VAR_5 >>= VAR_1;

 if ( VAR_5 < 0 ) {
  VAR_5 = 0;
 }
 VAR_5 %= VAR_4->numImageAnimations;

 FUNC_0( VAR_4->image[ VAR_5 ] );
}
