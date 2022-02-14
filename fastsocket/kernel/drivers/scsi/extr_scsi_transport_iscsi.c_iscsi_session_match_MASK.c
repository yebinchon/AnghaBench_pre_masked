
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct attribute_container {int * class; } ;
struct TYPE_3__ {struct attribute_container ac; } ;
struct iscsi_internal {TYPE_1__ session_cont; } ;
struct iscsi_cls_session {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_4__ {int class; } ;


 struct iscsi_cls_session* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 TYPE_2__ VAR_0 ;
 struct Scsi_Host* FUNC_2 (struct iscsi_cls_session*) ;
 struct iscsi_internal* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct attribute_container *VAR_1,
      struct device *VAR_2)
{
 struct iscsi_cls_session *VAR_3;
 struct Scsi_Host *VAR_4;
 struct iscsi_internal *VAR_5;

 if (!FUNC_1(VAR_2))
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4->transportt)
  return 0;

 VAR_5 = FUNC_3(VAR_4->transportt);
 if (VAR_5->session_cont.ac.class != &VAR_0.class)
  return 0;

 return &VAR_5->session_cont.ac == VAR_1;
}
