
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numImages; scalar_t__ frameCount; TYPE_1__** images; } ;
struct TYPE_3__ {scalar_t__ frameUsed; int uploadWidth; int uploadHeight; } ;


 TYPE_2__ VAR_0 ;

int FUNC_0( void ) {
 int VAR_1;
 int VAR_2;

 VAR_1 = 0;
 for ( VAR_2 = 0; VAR_2 < VAR_0.numImages; VAR_2++ ) {
  if ( VAR_0.images[VAR_2]->frameUsed == VAR_0.frameCount ) {
   VAR_1 += VAR_0.images[VAR_2]->uploadWidth * VAR_0.images[VAR_2]->uploadHeight;
  }
 }

 return VAR_1;
}
