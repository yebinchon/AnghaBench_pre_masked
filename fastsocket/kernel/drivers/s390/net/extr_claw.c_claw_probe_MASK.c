
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct claw_privbk {TYPE_1__* p_env; int * p_mtc_envelope; } ;
struct claw_env {int dummy; } ;
struct ccwgroup_device {TYPE_2__** cdev; int dev; } ;
struct TYPE_4__ {void* handler; } ;
struct TYPE_3__ {int write_buffers; int read_buffers; struct claw_privbk* p_priv; void* write_size; void* read_size; scalar_t__ packing; int api_type; int host_name; int adapter_name; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 void* VAR_6 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct claw_privbk*) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct ccwgroup_device*) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_10(struct ccwgroup_device *VAR_8)
{
 int VAR_9;
 struct claw_privbk *VAR_10=((void*)0);

 FUNC_0(2, VAR_7, "probe");
 if (!FUNC_5(&VAR_8->dev))
  return -VAR_1;
 VAR_10 = FUNC_6(sizeof(struct claw_privbk), VAR_3);
 FUNC_4(&VAR_8->dev, VAR_10);
 if (VAR_10 == ((void*)0)) {
  FUNC_8(VAR_8);
  FUNC_9(&VAR_8->dev);
  FUNC_1(2, VAR_7, "probex%d", -VAR_2);
  return -VAR_2;
 }
 VAR_10->p_mtc_envelope= FUNC_6( VAR_4, VAR_3);
 VAR_10->p_env = FUNC_6(sizeof(struct claw_env), VAR_3);
        if ((VAR_10->p_mtc_envelope==((void*)0)) || (VAR_10->p_env==((void*)0))) {
                FUNC_8(VAR_8);
  FUNC_9(&VAR_8->dev);
  FUNC_1(2, VAR_7, "probex%d", -VAR_2);
                return -VAR_2;
        }
 FUNC_7(VAR_10->p_env->adapter_name,VAR_5,8);
 FUNC_7(VAR_10->p_env->host_name,VAR_5,8);
 FUNC_7(VAR_10->p_env->api_type,VAR_5,8);
 VAR_10->p_env->packing = 0;
 VAR_10->p_env->write_buffers = 5;
 VAR_10->p_env->read_buffers = 5;
 VAR_10->p_env->read_size = VAR_0;
 VAR_10->p_env->write_size = VAR_0;
 VAR_9 = FUNC_2(&VAR_8->dev);
 if (VAR_9) {
  FUNC_8(VAR_8);
  FUNC_9(&VAR_8->dev);
  FUNC_3(&VAR_8->dev, "Creating the /proc files for a new"
  " CLAW device failed\n");
  FUNC_1(2, VAR_7, "probex%d", VAR_9);
  return VAR_9;
 }
 VAR_10->p_env->p_priv = VAR_10;
        VAR_8->cdev[0]->handler = VAR_6;
 VAR_8->cdev[1]->handler = VAR_6;
 FUNC_0(2, VAR_7, "prbext 0");

        return 0;
}
