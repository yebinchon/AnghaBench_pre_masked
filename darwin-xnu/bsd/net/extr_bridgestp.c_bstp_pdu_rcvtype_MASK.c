
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_port {int bp_port_pv; int bp_port_htime; int bp_port_fdelay; int bp_port_max_age; int bp_port_msg_age; } ;
struct bstp_config_unit {int cu_role; int cu_pv; int cu_hello_time; int cu_forward_delay; int cu_max_age; int cu_message_age; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct bstp_port *VAR_6, struct bstp_config_unit *VAR_7)
{
 int VAR_8;


 VAR_8 = VAR_2;

 switch (VAR_7->cu_role) {
 case 129:
  if (FUNC_1(&VAR_6->bp_port_pv, &VAR_7->cu_pv))

   VAR_8 = VAR_4;
  else if (FUNC_0(&VAR_6->bp_port_pv, &VAR_7->cu_pv) ==
      VAR_5) {
   if (VAR_6->bp_port_msg_age != VAR_7->cu_message_age ||
       VAR_6->bp_port_max_age != VAR_7->cu_max_age ||
       VAR_6->bp_port_fdelay != VAR_7->cu_forward_delay ||
       VAR_6->bp_port_htime != VAR_7->cu_hello_time)

    VAR_8 = VAR_4;
   else

    VAR_8 = VAR_3;
  } else

   VAR_8 = VAR_0;

  break;

 case 128:
 case 131:
 case 130:
  if (FUNC_0(&VAR_6->bp_port_pv, &VAR_7->cu_pv) <= VAR_5)




   VAR_8 = VAR_1;
  break;
 }

 return (VAR_8);
}
