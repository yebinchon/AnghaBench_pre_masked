
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int addr; int flags; int len; int * buf; } ;
struct i2c_adapter {struct em28xx* algo_data; } ;
struct TYPE_2__ {scalar_t__ is_em2800; } ;
struct em28xx {TYPE_1__ board; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct em28xx*,int) ;
 int FUNC_2 (struct em28xx*,int,int *,int) ;
 int FUNC_3 (struct em28xx*,int,int *,int) ;
 int FUNC_4 (struct em28xx*,int) ;
 int FUNC_5 (struct em28xx*,int,int *,int) ;
 int FUNC_6 (struct em28xx*,int,int *,int,int) ;
 int VAR_1 ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_2,
      struct i2c_msg VAR_3[], int VAR_4)
{
 struct em28xx *VAR_5 = VAR_2->algo_data;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_4 <= 0)
  return 0;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_6 = VAR_3[VAR_8].addr << 1;
  FUNC_0(2, "%s %s addr=%x len=%d:",
    (VAR_3[VAR_8].flags & VAR_0) ? "read" : "write",
    VAR_8 == VAR_4 - 1 ? "stop" : "nonstop", VAR_6, VAR_3[VAR_8].len);
  if (!VAR_3[VAR_8].len) {
   if (VAR_5->board.is_em2800)
    VAR_7 = FUNC_1(VAR_5, VAR_6);
   else
    VAR_7 = FUNC_4(VAR_5, VAR_6);
   if (VAR_7 < 0) {
    FUNC_0(2, " no device\n");
    return VAR_7;
   }

  } else if (VAR_3[VAR_8].flags & VAR_0) {

   if (VAR_5->board.is_em2800)
    VAR_7 = FUNC_2(VAR_5, VAR_6,
          VAR_3[VAR_8].buf,
          VAR_3[VAR_8].len);
   else
    VAR_7 = FUNC_5(VAR_5, VAR_6,
          VAR_3[VAR_8].buf,
          VAR_3[VAR_8].len);
   if (VAR_1 >= 2) {
    for (VAR_9 = 0; VAR_9 < VAR_3[VAR_8].len; VAR_9++)
     FUNC_7(" %02x", VAR_3[VAR_8].buf[VAR_9]);
   }
  } else {

   if (VAR_1 >= 2) {
    for (VAR_9 = 0; VAR_9 < VAR_3[VAR_8].len; VAR_9++)
     FUNC_7(" %02x", VAR_3[VAR_8].buf[VAR_9]);
   }
   if (VAR_5->board.is_em2800)
    VAR_7 = FUNC_3(VAR_5, VAR_6,
          VAR_3[VAR_8].buf,
          VAR_3[VAR_8].len);
   else
    VAR_7 = FUNC_6(VAR_5, VAR_6,
          VAR_3[VAR_8].buf,
          VAR_3[VAR_8].len,
          VAR_8 == VAR_4 - 1);
  }
  if (VAR_7 < 0)
   goto err;
  if (VAR_1 >= 2)
   FUNC_7("\n");
 }

 return VAR_4;
err:
 FUNC_0(2, " ERROR: %i\n", VAR_7);
 return VAR_7;
}
