
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mach_msg_type_name_t ;
typedef TYPE_1__* ipc_port_t ;
typedef int ipc_object_t ;
struct TYPE_9__ {int is_node_id; } ;
struct TYPE_8__ {int ip_srights; int ip_sorights; int ip_receiver_name; int ip_mscount; TYPE_2__* ip_receiver; int ip_messages; int ip_destination; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_9 (char*) ;

void
FUNC_10(
 ipc_object_t VAR_4,
 mach_msg_type_name_t VAR_5)
{
 FUNC_1(FUNC_0(VAR_4));

 switch (VAR_5) {
     case 130: {
  ipc_port_t VAR_6 = (ipc_port_t) VAR_4;

  FUNC_5(VAR_6);
  FUNC_2(&VAR_6->ip_messages);
  FUNC_1(FUNC_4(VAR_6));
  if (VAR_6->ip_destination != VAR_1) {
   FUNC_1(VAR_6->ip_receiver == VAR_3);


   FUNC_8(VAR_6, 0);

   VAR_6->ip_receiver_name = VAR_2;
   VAR_6->ip_destination = VAR_1;
  }
  FUNC_3(&VAR_6->ip_messages);
  FUNC_7(VAR_6);
  break;
     }

     case 133: {
  ipc_port_t VAR_7 = (ipc_port_t) VAR_4;

  FUNC_5(VAR_7);
  if (FUNC_4(VAR_7)) {
   FUNC_1(VAR_7->ip_srights > 0);
   VAR_7->ip_srights++;
  }
  FUNC_6(VAR_7);
  FUNC_7(VAR_7);
  break;
     }

     case 132: {
  ipc_port_t VAR_8 = (ipc_port_t) VAR_4;

  FUNC_5(VAR_8);
  if (FUNC_4(VAR_8)) {
   FUNC_1(VAR_8->ip_receiver_name != VAR_2);
   FUNC_1((VAR_8->ip_receiver == VAR_3) ||
                   (VAR_8->ip_receiver->is_node_id != VAR_0));
   VAR_8->ip_mscount++;
  }

  VAR_8->ip_srights++;
  FUNC_6(VAR_8);
  FUNC_7(VAR_8);
  break;
     }

     case 129: {

  FUNC_1(((ipc_port_t)VAR_4)->ip_srights);
  break;
     }

     case 131: {
  ipc_port_t VAR_9 = (ipc_port_t) VAR_4;

  FUNC_5(VAR_9);
  if (FUNC_4(VAR_9)) {
   FUNC_1(VAR_9->ip_receiver_name != VAR_2);
  }
  VAR_9->ip_sorights++;
  FUNC_6(VAR_9);
  FUNC_7(VAR_9);
  break;
     }

     case 128: {

      FUNC_1(((ipc_port_t)VAR_4)->ip_sorights);
  break;
     }

     default:
  FUNC_9("ipc_object_copyin_from_kernel: strange rights");
 }
}
