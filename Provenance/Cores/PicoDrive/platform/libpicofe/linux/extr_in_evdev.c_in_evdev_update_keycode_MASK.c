
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_event {scalar_t__ type; int value; int code; } ;
struct TYPE_2__ {int abs_lzone; scalar_t__ abs_min_x; int abs_max_x; int abs_lastx; scalar_t__ abs_min_y; int abs_max_y; int abs_lasty; scalar_t__ abs_to_digital; int fd; } ;
typedef TYPE_1__ in_evdev_t ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct input_event*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_10, int *VAR_11)
{
 int VAR_12 = -1, VAR_13 = 0;
 in_evdev_t *VAR_14 = VAR_10;
 struct input_event VAR_15;
 int VAR_16;



 VAR_16 = FUNC_1(VAR_14->fd, &VAR_15, sizeof(VAR_15));
 if (VAR_16 < (int) sizeof(VAR_15)) {
  if (VAR_9 != VAR_2) {
   FUNC_0("in_evdev: error reading");

   VAR_12 = -2;
  }
  goto out;
 }

 if (VAR_15.type == VAR_4) {
  if (VAR_15.value < 0 || VAR_15.value > 1)
   goto out;
  VAR_12 = VAR_15.code;
  VAR_13 = VAR_15.value;
  goto out;
 }
 else if (VAR_15.type == VAR_3 && VAR_14->abs_to_digital)
 {
  int VAR_17 = VAR_14->abs_lzone, VAR_18 = 0, *VAR_19;


  if (VAR_17 != 0 && VAR_15.code == VAR_0) {
   if (VAR_15.value < VAR_14->abs_min_x + VAR_17)
    VAR_18 = VAR_6;
   else if (VAR_15.value > VAR_14->abs_max_x - VAR_17)
    VAR_18 = VAR_7;
   VAR_19 = &VAR_14->abs_lastx;
  }
  else if (VAR_17 != 0 && VAR_15.code == VAR_1) {
   if (VAR_15.value < VAR_14->abs_min_y + VAR_17)
    VAR_18 = VAR_8;
   else if (VAR_15.value > VAR_14->abs_max_y - VAR_17)
    VAR_18 = VAR_5;
   VAR_19 = &VAR_14->abs_lasty;
  }
  else
   goto out;

  if (VAR_18 == *VAR_19)
   goto out;

  if (VAR_18 == 0 || *VAR_19 != 0) {

   VAR_12 = *VAR_19;
   VAR_13 = 0;
   *VAR_19 = 0;
   goto out;
  }
  VAR_12 = *VAR_19 = VAR_18;
  VAR_13 = 1;
  goto out;
 }

out:
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_13;

 return VAR_12;
}
