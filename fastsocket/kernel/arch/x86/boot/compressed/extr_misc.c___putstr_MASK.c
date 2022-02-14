
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ orig_video_mode; int orig_x; int orig_y; } ;
struct TYPE_4__ {TYPE_1__ screen_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 () ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_2(int VAR_5, const char *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 char VAR_10;


 if (!VAR_5)
  return;
 VAR_7 = VAR_2->screen_info.orig_x;
 VAR_8 = VAR_2->screen_info.orig_y;

 while ((VAR_10 = *VAR_6++) != '\0') {
  if (VAR_10 == '\n') {
   VAR_7 = 0;
   if (++VAR_8 >= VAR_1) {
    FUNC_1();
    VAR_8--;
   }
  } else {
   VAR_3[(VAR_7 + VAR_0 * VAR_8) * 2] = VAR_10;
   if (++VAR_7 >= VAR_0) {
    VAR_7 = 0;
    if (++VAR_8 >= VAR_1) {
     FUNC_1();
     VAR_8--;
    }
   }
  }
 }

 VAR_2->screen_info.orig_x = VAR_7;
 VAR_2->screen_info.orig_y = VAR_8;

 VAR_9 = (VAR_7 + VAR_0 * VAR_8) * 2;
 FUNC_0(14, VAR_4);
 FUNC_0(0xff & (VAR_9 >> 9), VAR_4+1);
 FUNC_0(15, VAR_4);
 FUNC_0(0xff & (VAR_9 >> 1), VAR_4+1);
}
