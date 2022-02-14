
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_nodeid; } ;
struct dlm_message {int m_type; TYPE_1__ m_header; } ;
struct dlm_lkb {int lkb_nodeid; int lkb_flags; int lkb_remid; int lkb_id; TYPE_2__* lkb_resource; } ;
struct TYPE_4__ {int res_ls; } ;
 int VAR_0 ;
 int FUNC_0 (struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_lkb*) ;
 int FUNC_2 (int ,char*,int,int,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dlm_lkb *VAR_1, struct dlm_message *VAR_2)
{
 int VAR_3 = VAR_2->m_header.h_nodeid;
 int VAR_4 = 0;

 switch (VAR_2->m_type) {
 case 133:
 case 129:
 case 135:
  if (!FUNC_0(VAR_1) || VAR_1->lkb_nodeid != VAR_3)
   VAR_4 = -VAR_0;
  break;

 case 132:
 case 128:
 case 134:
 case 131:
 case 136:
  if (!FUNC_1(VAR_1) || VAR_1->lkb_nodeid != VAR_3)
   VAR_4 = -VAR_0;
  break;

 case 130:
  if (!FUNC_1(VAR_1))
   VAR_4 = -VAR_0;
  else if (VAR_1->lkb_nodeid != -1 && VAR_1->lkb_nodeid != VAR_3)
   VAR_4 = -VAR_0;
  break;

 default:
  VAR_4 = -VAR_0;
 }

 if (VAR_4)
  FUNC_2(VAR_1->lkb_resource->res_ls,
     "ignore invalid message %d from %d %x %x %x %d",
     VAR_2->m_type, VAR_3, VAR_1->lkb_id, VAR_1->lkb_remid,
     VAR_1->lkb_flags, VAR_1->lkb_nodeid);
 return VAR_4;
}
