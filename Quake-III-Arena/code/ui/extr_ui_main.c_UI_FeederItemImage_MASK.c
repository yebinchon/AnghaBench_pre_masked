
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qhandle_t ;
struct TYPE_6__ {int characterCount; int q3HeadCount; int* q3HeadIcons; int mapCount; TYPE_2__* mapList; TYPE_1__* characterList; } ;
struct TYPE_5__ {int levelShot; int imageName; } ;
struct TYPE_4__ {int headImage; int imageName; } ;


 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int,int*) ;
 void* FUNC_2 (int ) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static qhandle_t FUNC_3(float VAR_5, int VAR_6) {
  if (VAR_5 == VAR_1) {
 int VAR_7;
 FUNC_0(VAR_6, &VAR_7);
 VAR_6 = VAR_7;
 if (VAR_6 >= 0 && VAR_6 < VAR_4.characterCount) {
  if (VAR_4.characterList[VAR_6].headImage == -1) {
   VAR_4.characterList[VAR_6].headImage = FUNC_2(VAR_4.characterList[VAR_6].imageName);
  }
  return VAR_4.characterList[VAR_6].headImage;
 }
  } else if (VAR_5 == VAR_3) {
    if (VAR_6 >= 0 && VAR_6 < VAR_4.q3HeadCount) {
      return VAR_4.q3HeadIcons[VAR_6];
    }
 } else if (VAR_5 == VAR_0 || VAR_5 == VAR_2) {
  int VAR_8;
  FUNC_1(VAR_6, &VAR_8);
  VAR_6 = VAR_8;
  if (VAR_6 >= 0 && VAR_6 < VAR_4.mapCount) {
   if (VAR_4.mapList[VAR_6].levelShot == -1) {
    VAR_4.mapList[VAR_6].levelShot = FUNC_2(VAR_4.mapList[VAR_6].imageName);
   }
   return VAR_4.mapList[VAR_6].levelShot;
  }
 }
  return 0;
}
