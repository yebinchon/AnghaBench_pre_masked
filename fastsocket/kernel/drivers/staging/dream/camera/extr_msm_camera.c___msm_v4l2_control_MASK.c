
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_sync {int dummy; } ;
struct msm_queue_cmd {struct msm_ctrl_cmd* command; int type; } ;
struct msm_ctrl_cmd {scalar_t__ length; int value; int timeout_ms; } ;
struct msm_control_device_queue {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct msm_queue_cmd*) ;
 int VAR_2 ;
 int FUNC_3 (struct msm_queue_cmd*) ;
 struct msm_queue_cmd* FUNC_4 (struct msm_sync*,struct msm_control_device_queue*,struct msm_queue_cmd*,int ) ;
 int FUNC_5 (struct msm_queue_cmd*) ;
 struct msm_queue_cmd* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct msm_sync *VAR_3,
  struct msm_ctrl_cmd *VAR_4)
{
 int VAR_5 = 0;

 struct msm_queue_cmd *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 struct msm_ctrl_cmd *VAR_8;
 struct msm_control_device_queue VAR_9;


 VAR_6 = FUNC_6(sizeof(struct msm_queue_cmd), VAR_1);
 if (!VAR_6) {
  FUNC_8("msm_control: cannot allocate buffer\n");
  VAR_5 = -VAR_0;
  goto end;
 }
 VAR_6->type = VAR_2;
 VAR_6->command = VAR_4;

 VAR_7 = FUNC_4(VAR_3, &VAR_9, VAR_6, VAR_4->timeout_ms);
 if (FUNC_2(VAR_7)) {
  VAR_5 = FUNC_3(VAR_7);
  goto end;
 }

 VAR_8 = (struct msm_ctrl_cmd *)(VAR_7->command);

 FUNC_0(VAR_4->length < VAR_8->length);
 FUNC_7(VAR_4->value, VAR_8->value, VAR_8->length);

end:
 if (VAR_7) FUNC_5(VAR_7);
 FUNC_1("__msm_v4l2_control: end rc = %d\n", VAR_5);
 return VAR_5;
}
