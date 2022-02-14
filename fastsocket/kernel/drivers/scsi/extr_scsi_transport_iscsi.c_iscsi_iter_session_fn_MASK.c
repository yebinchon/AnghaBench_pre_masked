
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 struct iscsi_cls_session* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 void (* VAR_2) (struct iscsi_cls_session *) = VAR_1;

 if (!FUNC_1(VAR_0))
  return 0;
 VAR_2(FUNC_0(VAR_0));
 return 0;
}
