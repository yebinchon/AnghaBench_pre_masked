
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ldc_channel {int dummy; } ;
struct TYPE_4__ {int major; scalar_t__ minor; } ;
struct TYPE_3__ {int len; int type; } ;
struct ds_ver_req {TYPE_2__ ver; TYPE_1__ tag; } ;
struct ds_msg_tag {int dummy; } ;
struct ds_info {int hs_state; struct ldc_channel* lp; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ldc_channel*,struct ds_ver_req*,int) ;

__attribute__((used)) static void FUNC_1(struct ds_info *VAR_2)
{
 struct ldc_channel *VAR_3 = VAR_2->lp;
 struct ds_ver_req VAR_4;
 int VAR_5;

 VAR_4.tag.type = VAR_1;
 VAR_4.tag.len = sizeof(VAR_4) - sizeof(struct ds_msg_tag);
 VAR_4.ver.major = 1;
 VAR_4.ver.minor = 0;

 VAR_5 = FUNC_0(VAR_3, &VAR_4, sizeof(VAR_4));
 if (VAR_5 > 0)
  VAR_2->hs_state = VAR_0;
}
