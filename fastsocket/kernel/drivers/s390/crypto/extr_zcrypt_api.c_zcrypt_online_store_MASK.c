
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zcrypt_device {int online; TYPE_2__* ap_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int qid; } ;
struct TYPE_3__ {struct zcrypt_device* private; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct zcrypt_device*,char*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char const*,char*,int*) ;
 TYPE_1__* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct zcrypt_device *VAR_6 = FUNC_3(VAR_2)->private;
 int VAR_7;

 if (FUNC_2(VAR_4, "%d\n", &VAR_7) != 1 || VAR_7 < 0 || VAR_7 > 1)
  return -VAR_1;
 VAR_6->online = VAR_7;
 FUNC_0(VAR_0, VAR_6, "dev%04xo%dman", VAR_6->ap_dev->qid,
         VAR_6->online);
 if (!VAR_7)
  FUNC_1(VAR_6->ap_dev);
 return VAR_5;
}
