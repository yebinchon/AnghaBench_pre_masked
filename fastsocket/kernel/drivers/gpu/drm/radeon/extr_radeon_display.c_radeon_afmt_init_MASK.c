
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** afmt; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ mode_info; } ;
struct radeon_afmt {int dummy; } ;
struct TYPE_3__ {int id; int offset; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_13)
{
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
  VAR_13->mode_info.afmt[VAR_14] = ((void*)0);

 if (FUNC_4(VAR_13)) {

 } else if (FUNC_2(VAR_13)) {


  VAR_13->mode_info.afmt[0] = FUNC_5(sizeof(struct radeon_afmt), VAR_11);
  if (VAR_13->mode_info.afmt[0]) {
   VAR_13->mode_info.afmt[0]->offset = VAR_5;
   VAR_13->mode_info.afmt[0]->id = 0;
  }
  VAR_13->mode_info.afmt[1] = FUNC_5(sizeof(struct radeon_afmt), VAR_11);
  if (VAR_13->mode_info.afmt[1]) {
   VAR_13->mode_info.afmt[1]->offset = VAR_6;
   VAR_13->mode_info.afmt[1]->id = 1;
  }
  if (!FUNC_3(VAR_13)) {
   VAR_13->mode_info.afmt[2] = FUNC_5(sizeof(struct radeon_afmt), VAR_11);
   if (VAR_13->mode_info.afmt[2]) {
    VAR_13->mode_info.afmt[2]->offset = VAR_7;
    VAR_13->mode_info.afmt[2]->id = 2;
   }
   VAR_13->mode_info.afmt[3] = FUNC_5(sizeof(struct radeon_afmt), VAR_11);
   if (VAR_13->mode_info.afmt[3]) {
    VAR_13->mode_info.afmt[3]->offset = VAR_8;
    VAR_13->mode_info.afmt[3]->id = 3;
   }
   VAR_13->mode_info.afmt[4] = FUNC_5(sizeof(struct radeon_afmt), VAR_11);
   if (VAR_13->mode_info.afmt[4]) {
    VAR_13->mode_info.afmt[4]->offset = VAR_9;
    VAR_13->mode_info.afmt[4]->id = 4;
   }
   VAR_13->mode_info.afmt[5] = FUNC_5(sizeof(struct radeon_afmt), VAR_11);
   if (VAR_13->mode_info.afmt[5]) {
    VAR_13->mode_info.afmt[5]->offset = VAR_10;
    VAR_13->mode_info.afmt[5]->id = 5;
   }
  }
 } else if (FUNC_1(VAR_13)) {

  VAR_13->mode_info.afmt[0] = FUNC_5(sizeof(struct radeon_afmt), VAR_11);
  if (VAR_13->mode_info.afmt[0]) {
   VAR_13->mode_info.afmt[0]->offset = VAR_3;
   VAR_13->mode_info.afmt[0]->id = 0;
  }
  VAR_13->mode_info.afmt[1] = FUNC_5(sizeof(struct radeon_afmt), VAR_11);
  if (VAR_13->mode_info.afmt[1]) {
   VAR_13->mode_info.afmt[1]->offset = VAR_4;
   VAR_13->mode_info.afmt[1]->id = 1;
  }
 } else if (FUNC_0(VAR_13)) {

  VAR_13->mode_info.afmt[0] = FUNC_5(sizeof(struct radeon_afmt), VAR_11);
  if (VAR_13->mode_info.afmt[0]) {
   VAR_13->mode_info.afmt[0]->offset = VAR_1;
   VAR_13->mode_info.afmt[0]->id = 0;
  }

  if (VAR_13->family >= VAR_0) {
   VAR_13->mode_info.afmt[1] = FUNC_5(sizeof(struct radeon_afmt), VAR_11);
   if (VAR_13->mode_info.afmt[1]) {
    VAR_13->mode_info.afmt[1]->offset = VAR_2;
    VAR_13->mode_info.afmt[1]->id = 1;
   }
  }
 }
}
