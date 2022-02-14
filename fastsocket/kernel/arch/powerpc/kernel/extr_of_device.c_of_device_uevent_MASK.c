
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device {TYPE_1__* node; } ;
struct kobj_uevent_env {int buflen; int * buf; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,...) ;
 int FUNC_1 (struct of_device*,int *,int) ;
 char* FUNC_2 (TYPE_1__*,char*,int*) ;
 int FUNC_3 (char const*) ;
 struct of_device* FUNC_4 (struct device*) ;

int FUNC_5(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 struct of_device *VAR_4;
 const char *VAR_5;
 int VAR_6 = 0, VAR_7, VAR_8;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2);

 if (FUNC_0(VAR_3, "OF_NAME=%s", VAR_4->node->name))
  return -VAR_1;

 if (FUNC_0(VAR_3, "OF_TYPE=%s", VAR_4->node->type))
  return -VAR_1;





 VAR_5 = FUNC_2(VAR_4->node, "compatible", &VAR_7);
 while (VAR_5 && *VAR_5 && VAR_7 > 0) {
  if (FUNC_0(VAR_3, "OF_COMPATIBLE_%d=%s", VAR_6, VAR_5))
   return -VAR_1;

  VAR_8 = FUNC_3 (VAR_5) + 1;
  VAR_5 += VAR_8;
  VAR_7 -= VAR_8;
  VAR_6++;
 }

 if (FUNC_0(VAR_3, "OF_COMPATIBLE_N=%d", VAR_6))
  return -VAR_1;


 if (FUNC_0(VAR_3, "MODALIAS="))
  return -VAR_1;
 VAR_8 = FUNC_1(VAR_4, &VAR_3->buf[VAR_3->buflen-1],
        sizeof(VAR_3->buf) - VAR_3->buflen);
 if (VAR_8 >= (sizeof(VAR_3->buf) - VAR_3->buflen))
  return -VAR_1;
 VAR_3->buflen += VAR_8;

 return 0;
}
