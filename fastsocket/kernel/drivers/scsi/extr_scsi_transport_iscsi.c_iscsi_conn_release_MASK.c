
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct iscsi_cls_conn {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct iscsi_cls_conn*,char*) ;
 struct iscsi_cls_conn* FUNC_1 (struct device*) ;
 int FUNC_2 (struct iscsi_cls_conn*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct iscsi_cls_conn *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = VAR_1->dev.parent;

 FUNC_0(VAR_1, "Releasing conn\n");
 FUNC_2(VAR_1);
 FUNC_3(VAR_2);
}
