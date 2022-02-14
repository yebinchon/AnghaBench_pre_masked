
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {char* data; TYPE_1__* shared; } ;
typedef int __le16 ;
struct TYPE_2__ {int touch_down; int stylus_in_proximity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (void*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct wacom_wac *VAR_4, void *VAR_5, size_t VAR_6)
{
 char *VAR_7 = VAR_4->data;
 bool VAR_8;
 int VAR_9 = 0, VAR_10 = 0;

 if (!VAR_4->shared->stylus_in_proximity) {
  if (VAR_6 == VAR_3) {
   VAR_8 = VAR_7[0] & 0x01;
   VAR_9 = FUNC_0(&VAR_7[1]);
   VAR_10 = FUNC_0(&VAR_7[3]);
  } else {
   VAR_8 = VAR_7[1] & 0x01;
   VAR_9 = FUNC_1((__le16 *)&VAR_7[2]);
   VAR_10 = FUNC_1((__le16 *)&VAR_7[4]);
  }
 } else

  VAR_8 = 0;

 if (VAR_8) {
  FUNC_2(VAR_5, VAR_0, VAR_9);
  FUNC_2(VAR_5, VAR_1, VAR_10);
 }
 FUNC_3(VAR_5, VAR_2, VAR_8);


 VAR_4->shared->touch_down = VAR_8;

 return 1;
}
