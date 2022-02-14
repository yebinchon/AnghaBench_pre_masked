
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
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct cam_data*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct cam_data*) ;

__attribute__((used)) static int FUNC_3(struct cam_data *VAR_3)
{
 if (FUNC_1(VAR_3, VAR_1, 0, 0, 0, 0))
  return -1;
 if (FUNC_1(VAR_3, VAR_0, 0, 0, 0, 0))
  return -1;
 if (VAR_3->params.status.systemState == VAR_2) {
  FUNC_0("camera now in LOW power state\n");
  return 0;
 }
 FUNC_2(VAR_3);
 return -1;
}
