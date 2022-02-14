
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int scaler_type; } ;
struct TYPE_4__ {TYPE_1__ scaler; } ;
typedef TYPE_2__ sdl_video_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(void *VAR_2, unsigned VAR_3, bool VAR_4)
{
   sdl_video_t *VAR_5 = (sdl_video_t*)VAR_2;
   VAR_5->scaler.scaler_type = VAR_4 ? VAR_0 : VAR_1;
}
