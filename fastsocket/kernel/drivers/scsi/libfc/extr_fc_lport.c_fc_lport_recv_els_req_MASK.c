
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* rport_recv_req ) (struct fc_lport*,struct fc_frame*) ;void (* disc_recv_req ) (struct fc_lport*,struct fc_frame*) ;} ;
struct fc_lport {int lp_mutex; TYPE_1__ tt; int point_to_multipoint; int link_up; } ;
struct fc_frame {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 void FUNC_3 (struct fc_lport*,struct fc_frame*) ;
 void FUNC_4 (struct fc_lport*,struct fc_frame*) ;
 void FUNC_5 (struct fc_lport*,struct fc_frame*) ;
 void FUNC_6 (struct fc_lport*,struct fc_frame*) ;
 void FUNC_7 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct fc_lport *VAR_1,
      struct fc_frame *VAR_2)
{
 void (*VAR_3)(struct fc_lport *, struct fc_frame *);

 FUNC_8(&VAR_1->lp_mutex);






 if (!VAR_1->link_up)
  FUNC_0(VAR_2);
 else {



  VAR_3 = VAR_1->tt.rport_recv_req;
  switch (FUNC_1(VAR_2)) {
  case 132:
   if (!VAR_1->point_to_multipoint)
    VAR_3 = FUNC_4;
   break;
  case 131:
   if (FUNC_2(VAR_2) == VAR_0)
    VAR_3 = FUNC_5;
   break;
  case 128:
   VAR_3 = VAR_1->tt.disc_recv_req;
   break;
  case 133:
   VAR_3 = FUNC_3;
   break;
  case 130:
   VAR_3 = FUNC_6;
   break;
  case 129:
   VAR_3 = FUNC_7;
   break;
  }

  VAR_3(VAR_1, VAR_2);
 }
 FUNC_9(&VAR_1->lp_mutex);
}
