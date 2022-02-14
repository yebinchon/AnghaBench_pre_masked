
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int keybits ;
struct TYPE_2__ {scalar_t__ abs_lzone; scalar_t__ abs_to_digital; int fd; } ;
typedef TYPE_1__ in_evdev_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(void *VAR_7, int *VAR_8, int *VAR_9)
{
 int VAR_10[VAR_2 / sizeof(int)];
 in_evdev_t *VAR_11 = VAR_7;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 0;

 FUNC_5(VAR_10, 0, sizeof(VAR_10));
 VAR_14 = FUNC_4(VAR_11->fd, FUNC_0(VAR_0, sizeof(VAR_10)), VAR_10);
 if (VAR_14 == -1) {
  FUNC_6("in_evdev: ioctl failed");

 }

 if (VAR_11->abs_to_digital && VAR_11->abs_lzone != 0) {
  FUNC_3(VAR_4);
  FUNC_3(VAR_5);
  FUNC_3(VAR_6);
  FUNC_3(VAR_3);
 }

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   VAR_15 = FUNC_1(VAR_12, VAR_13);
   if (!FUNC_2(VAR_12))
    VAR_8[VAR_15] = VAR_9[VAR_15] = 0;
   if (VAR_8[VAR_15])
    VAR_16++;
  }
 }

 return VAR_16;
}
