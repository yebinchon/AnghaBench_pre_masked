
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; TYPE_1__* shared; } ;
typedef int __le16 ;
struct TYPE_2__ {int touch_down; int stylus_in_proximity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (void*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct wacom_wac *VAR_3, void *VAR_4)
{
 unsigned char *VAR_5 = VAR_3->data;
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  int VAR_8 = VAR_5[1] & (1 << VAR_7);
  bool VAR_9 = VAR_8 && !VAR_3->shared->stylus_in_proximity;

  FUNC_3(VAR_4, VAR_7);
  FUNC_2(VAR_4, VAR_2, VAR_9);
  if (VAR_9) {
   int VAR_10 = FUNC_0((__le16 *)&VAR_5[VAR_7 * 2 + 2]) & 0x7fff;
   int VAR_11 = FUNC_0((__le16 *)&VAR_5[VAR_7 * 2 + 6]) & 0x7fff;

   FUNC_4(VAR_4, VAR_0, VAR_10);
   FUNC_4(VAR_4, VAR_1, VAR_11);
   VAR_6++;
  }
 }


 VAR_3->shared->touch_down = (VAR_6 > 0);

 FUNC_1(VAR_4, 1);

 return 1;
}
