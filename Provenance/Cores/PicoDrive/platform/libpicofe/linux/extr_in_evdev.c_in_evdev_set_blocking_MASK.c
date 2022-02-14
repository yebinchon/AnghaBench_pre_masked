
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct input_event {int dummy; } ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ in_evdev_t ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct input_event*,int) ;

__attribute__((used)) static int FUNC_3(in_evdev_t *VAR_3, int VAR_4)
{
 long VAR_5;
 int VAR_6;

 VAR_5 = (long)FUNC_0(VAR_3->fd, VAR_0);
 if ((int)VAR_5 == -1) {
  FUNC_1("in_evdev: F_GETFL fcntl failed");
  return -1;
 }

 if (VAR_5 & VAR_2) {

  struct input_event VAR_7;
  do {
   VAR_6 = FUNC_2(VAR_3->fd, &VAR_7, sizeof(VAR_7));
  }
  while (VAR_6 == sizeof(VAR_7));
 }

 if (VAR_4)
  VAR_5 &= ~VAR_2;
 else
  VAR_5 |= VAR_2;
 VAR_6 = FUNC_0(VAR_3->fd, VAR_1, VAR_5);
 if (VAR_6 == -1) {
  FUNC_1("in_evdev: F_SETFL fcntl failed");
  return -1;
 }

 return 0;
}
