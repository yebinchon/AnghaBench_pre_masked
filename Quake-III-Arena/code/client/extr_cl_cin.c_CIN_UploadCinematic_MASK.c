
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int playonwalls; scalar_t__ dirty; int buf; } ;
struct TYPE_5__ {scalar_t__ integer; } ;
struct TYPE_4__ {int (* UploadCinematic ) (int,int,int,int,int ,int,scalar_t__) ;} ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int,int,int,int,int ,int,scalar_t__) ;

void FUNC_1(int VAR_5) {
 if (VAR_5 >= 0 && VAR_5 < VAR_0) {
  if (!VAR_1[VAR_5].buf) {
   return;
  }
  if (VAR_1[VAR_5].playonwalls <= 0 && VAR_1[VAR_5].dirty) {
   if (VAR_1[VAR_5].playonwalls == 0) {
    VAR_1[VAR_5].playonwalls = -1;
   } else {
    if (VAR_1[VAR_5].playonwalls == -1) {
     VAR_1[VAR_5].playonwalls = -2;
    } else {
     VAR_1[VAR_5].dirty = VAR_3;
    }
   }
  }
  VAR_4.UploadCinematic( 256, 256, 256, 256, VAR_1[VAR_5].buf, VAR_5, VAR_1[VAR_5].dirty);
  if (VAR_2->integer == 0 && VAR_1[VAR_5].playonwalls == 1) {
   VAR_1[VAR_5].playonwalls--;
  }
 }
}
