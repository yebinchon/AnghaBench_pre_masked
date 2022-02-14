
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcom_lock {int dummy; } ;
struct TYPE_2__ {int h_length; } ;
struct dlm_rcom {int rc_type; TYPE_1__ rc_header; } ;
struct dlm_ls {int dummy; } ;
 int FUNC_0 (struct dlm_ls*,struct dlm_rcom*) ;
 scalar_t__ FUNC_1 (struct dlm_ls*) ;
 scalar_t__ FUNC_2 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_3 (struct dlm_ls*,char*,int,int) ;
 int FUNC_4 (struct dlm_ls*,char*,int,...) ;
 int FUNC_5 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_6 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_7 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_8 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_9 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_10 (struct dlm_ls*,struct dlm_rcom*) ;

void FUNC_11(struct dlm_ls *VAR_0, struct dlm_rcom *VAR_1, int VAR_2)
{
 int VAR_3 = sizeof(struct dlm_rcom) + sizeof(struct rcom_lock);

 if (FUNC_1(VAR_0) && (VAR_1->rc_type != 129)) {
  FUNC_3(VAR_0, "ignoring recovery message %x from %d",
     VAR_1->rc_type, VAR_2);
  goto out;
 }

 if (FUNC_2(VAR_0, VAR_1))
  goto out;

 switch (VAR_1->rc_type) {
 case 129:
  FUNC_9(VAR_0, VAR_1);
  break;

 case 131:
  FUNC_8(VAR_0, VAR_1);
  break;

 case 133:
  FUNC_6(VAR_0, VAR_1);
  break;

 case 135:
  if (VAR_1->rc_header.h_length < VAR_3)
   goto Eshort;
  FUNC_5(VAR_0, VAR_1);
  break;

 case 128:
  FUNC_10(VAR_0, VAR_1);
  break;

 case 130:
  FUNC_10(VAR_0, VAR_1);
  break;

 case 132:
  FUNC_7(VAR_0, VAR_1);
  break;

 case 134:
  if (VAR_1->rc_header.h_length < VAR_3)
   goto Eshort;
  FUNC_0(VAR_0, VAR_1);
  break;

 default:
  FUNC_4(VAR_0, "receive_rcom bad type %d", VAR_1->rc_type);
 }
out:
 return;
Eshort:
 FUNC_4(VAR_0, "recovery message %x from %d is too short",
     VAR_1->rc_type, VAR_2);
}
