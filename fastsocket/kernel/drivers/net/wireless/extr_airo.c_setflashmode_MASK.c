
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct airo_info {TYPE_1__* dev; int flags; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct airo_info*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct airo_info*) ;

__attribute__((used)) static int FUNC_6 (struct airo_info *VAR_9) {
 FUNC_4 (VAR_2, &VAR_9->flags);

 FUNC_0(VAR_9, VAR_4, VAR_3);
 FUNC_0(VAR_9, VAR_5, VAR_3);
 if (VAR_8) {
  FUNC_0(VAR_9, VAR_4, VAR_3);
  FUNC_0(VAR_9, VAR_0,0x10);
 } else {
  FUNC_0(VAR_9, VAR_6, VAR_3);
  FUNC_0(VAR_9, VAR_7, VAR_3);
  FUNC_0(VAR_9, VAR_0,0);
 }
 FUNC_3(500);

 if(!FUNC_5(VAR_9)) {
  FUNC_2 (VAR_2, &VAR_9->flags);
  FUNC_1(VAR_9->dev->name, "Waitbusy hang after setflash mode");
  return -VAR_1;
 }
 return 0;
}
