
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* animations; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_4__ {int firstFrame; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_0( clientInfo_t *VAR_3, int VAR_4 ) {


 if ( VAR_4 >= VAR_3->animations[VAR_2].firstFrame
  && VAR_4 < VAR_3->animations[VAR_2].firstFrame + 9 ) {
  return VAR_4 - VAR_3->animations[VAR_2].firstFrame + 6;
 }


 if ( VAR_4 >= VAR_3->animations[VAR_0].firstFrame
  && VAR_4 < VAR_3->animations[VAR_0].firstFrame + 6 ) {
  return 1 + VAR_4 - VAR_3->animations[VAR_0].firstFrame;
 }


 if ( VAR_4 >= VAR_3->animations[VAR_1].firstFrame
  && VAR_4 < VAR_3->animations[VAR_1].firstFrame + 6 ) {
  return 1 + VAR_4 - VAR_3->animations[VAR_1].firstFrame;
 }

 return 0;
}
