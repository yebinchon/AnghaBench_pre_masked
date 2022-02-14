
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct airo_info {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct airo_info*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct airo_info*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct airo_info*) ;

__attribute__((used)) static int FUNC_5(struct airo_info *VAR_3) {
 FUNC_2(VAR_3, 1);

 if(!FUNC_4 (VAR_3)){
  FUNC_1(VAR_3->dev->name, "Waitbusy hang before RESET");
  return -VAR_2;
 }

 FUNC_0(VAR_3,VAR_1,VAR_0);

 FUNC_3(1);

 if(!FUNC_4 (VAR_3)){
  FUNC_1(VAR_3->dev->name, "Waitbusy hang AFTER RESET");
  return -VAR_2;
 }
 return 0;
}
