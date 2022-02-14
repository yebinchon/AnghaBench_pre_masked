
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ systemState; } ;
struct TYPE_4__ {TYPE_1__ status; } ;
struct cam_data {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct cam_data*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cam_data*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cam_data *VAR_6)
{
 if (FUNC_1(VAR_6, VAR_1, 0, 0, 0, 0))
  return -VAR_3;
 FUNC_2(40);
 if(FUNC_4(VAR_5))
  return -VAR_2;
 if (FUNC_1(VAR_6, VAR_0, 0, 0, 0, 0))
  return -VAR_3;
 if (VAR_6->params.status.systemState == VAR_4) {
  FUNC_0("camera now in HIGH power state\n");
  return 0;
 }
 FUNC_3(VAR_6);
 return -VAR_3;
}
