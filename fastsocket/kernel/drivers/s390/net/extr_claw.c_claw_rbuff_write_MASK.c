
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct claw_privbk {struct claw_env* p_env; } ;
struct claw_env {int read_buffers; scalar_t__ packing; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 struct claw_privbk* FUNC_2 (struct device*) ;
 int VAR_2 ;
 int FUNC_3 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4,
 const char *VAR_5, size_t VAR_6)
{
 struct claw_privbk *VAR_7;
 struct claw_env *VAR_8;
 int VAR_9,VAR_10;

 VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7)
  return -VAR_1;
 VAR_8 = VAR_7->p_env;
 FUNC_3(VAR_5, "%i", &VAR_9);
 if (VAR_8->packing) {
  VAR_10 = 64;
 }
 else {
  VAR_10 = 512;
 }
 if ((VAR_9 > VAR_10 ) || (VAR_9 < 2))
  return -VAR_0;
 VAR_8->read_buffers = VAR_9;
 FUNC_0(2, VAR_2, "Rbufset");
 FUNC_1(2, VAR_2, "RB=%d", VAR_8->read_buffers);
 return VAR_6;
}
