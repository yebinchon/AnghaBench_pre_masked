
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct flow_divert_pcb {TYPE_1__* group; TYPE_2__* so; } ;
typedef int mbuf_t ;
struct TYPE_4__ {int so_error; } ;
struct TYPE_3__ {int lck; int atomic_bits; int send_queue; int ctl_unit; } ;
typedef scalar_t__ Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct flow_divert_pcb *VAR_5, mbuf_t VAR_6, Boolean VAR_7)
{
 int VAR_8;

 if (VAR_5->group == ((void*)0)) {
  VAR_5->so->so_error = VAR_1;
  FUNC_4(VAR_5->so);
  return VAR_1;
 }

 FUNC_7(&VAR_5->group->lck);

 if (FUNC_0(&VAR_5->group->send_queue)) {
  VAR_8 = FUNC_3(VAR_4, VAR_5->group->ctl_unit, VAR_6, VAR_0);
 } else {
  VAR_8 = VAR_2;
 }

 if (VAR_8 == VAR_2) {
  if (VAR_7) {
   if (!FUNC_8(&VAR_5->group->lck)) {
    FUNC_6(&VAR_5->group->lck);
   }
   FUNC_1(&VAR_5->group->send_queue, VAR_6);
   VAR_8 = 0;
  }
  FUNC_2(VAR_3, &VAR_5->group->atomic_bits);
 }

 FUNC_5(&VAR_5->group->lck);

 return VAR_8;
}
