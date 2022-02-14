
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int used; } ;
struct be_queue_info {int id; } ;
struct TYPE_5__ {TYPE_1__ q; struct be_queue_info cq; } ;
struct TYPE_6__ {TYPE_2__ mcc_obj; } ;
struct beiscsi_hba {TYPE_3__ ctrl; } ;
struct be_mcc_compl {int flags; } ;
struct be_async_event_link_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,struct be_mcc_compl*) ;
 int FUNC_2 (struct beiscsi_hba*,struct be_async_event_link_state*) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int ,char*,int) ;
 int FUNC_4 (struct beiscsi_hba*,int ,unsigned int,int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct be_queue_info*) ;
 struct be_mcc_compl* FUNC_8 (struct be_queue_info*) ;

__attribute__((used)) static void FUNC_9(struct beiscsi_hba *VAR_5)
{
 struct be_queue_info *VAR_6;
 struct be_mcc_compl *VAR_7;
 unsigned int VAR_8 = 0;

 VAR_6 = &VAR_5->ctrl.mcc_obj.cq;
 VAR_7 = FUNC_8(VAR_6);
 VAR_7->flags = FUNC_6(VAR_7->flags);
 while (VAR_7->flags & VAR_3) {

  if (VAR_8 >= 32) {
   FUNC_4(VAR_5, VAR_6->id,
     VAR_8, 0, 0);
   VAR_8 = 0;
  }
  if (VAR_7->flags & VAR_1) {

   if (FUNC_5(VAR_7->flags))

    FUNC_2(VAR_5,
    (struct be_async_event_link_state *) VAR_7);
   else
    FUNC_3(VAR_5, VAR_4, VAR_0,
         "BM_%d :  Unsupported Async Event, flags"
         " = 0x%08x\n",
         VAR_7->flags);
  } else if (VAR_7->flags & VAR_2) {
   FUNC_1(&VAR_5->ctrl, VAR_7);
   FUNC_0(&VAR_5->ctrl.mcc_obj.q.used);
  }

  VAR_7->flags = 0;
  FUNC_7(VAR_6);
  VAR_7 = FUNC_8(VAR_6);
  VAR_7->flags = FUNC_6(VAR_7->flags);
  VAR_8++;
 }

 if (VAR_8 > 0)
  FUNC_4(VAR_5, VAR_6->id, VAR_8, 1, 0);

}
