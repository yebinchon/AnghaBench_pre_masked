
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nes_cm_node {scalar_t__ cm_id; int loc_port; int rem_port; int loc_addr; int rem_addr; } ;
struct TYPE_2__ {int rem_port; int rem_addr; int loc_port; int loc_addr; scalar_t__ cm_id; } ;
struct nes_cm_event {int type; TYPE_1__ cm_info; struct nes_cm_node* cm_node; } ;
typedef enum nes_cm_event_type { ____Placeholder_nes_cm_event_type } nes_cm_event_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct nes_cm_event* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nes_cm_event*) ;
 int FUNC_2 (int ,char*,struct nes_cm_node*,struct nes_cm_event*,int,int ,int ,int ,int ) ;

__attribute__((used)) static struct nes_cm_event *FUNC_3(struct nes_cm_node * VAR_2,
      enum nes_cm_event_type VAR_3)
{
 struct nes_cm_event *VAR_4;

 if (!VAR_2->cm_id)
  return ((void*)0);


 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);

 if (!VAR_4)
  return ((void*)0);

 VAR_4->type = VAR_3;
 VAR_4->cm_node = VAR_2;
 VAR_4->cm_info.rem_addr = VAR_2->rem_addr;
 VAR_4->cm_info.loc_addr = VAR_2->loc_addr;
 VAR_4->cm_info.rem_port = VAR_2->rem_port;
 VAR_4->cm_info.loc_port = VAR_2->loc_port;
 VAR_4->cm_info.cm_id = VAR_2->cm_id;

 FUNC_2(VAR_1, "cm_node=%p Created event=%p, type=%u, "
    "dst_addr=%08x[%x], src_addr=%08x[%x]\n",
    VAR_2, VAR_4, VAR_3, VAR_4->cm_info.loc_addr,
    VAR_4->cm_info.loc_port, VAR_4->cm_info.rem_addr,
    VAR_4->cm_info.rem_port);

 FUNC_1(VAR_4);
 return VAR_4;
}
