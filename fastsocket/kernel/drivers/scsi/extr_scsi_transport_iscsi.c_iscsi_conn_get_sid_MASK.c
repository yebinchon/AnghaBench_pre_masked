
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct iscsi_cls_session {int sid; } ;
struct TYPE_2__ {int parent; } ;
struct iscsi_cls_conn {TYPE_1__ dev; } ;


 struct iscsi_cls_session* FUNC_0 (int ) ;

__attribute__((used)) static uint32_t FUNC_1(struct iscsi_cls_conn *VAR_0)
{
 struct iscsi_cls_session *VAR_1 = FUNC_0(VAR_0->dev.parent);
 return VAR_1->sid;
}
