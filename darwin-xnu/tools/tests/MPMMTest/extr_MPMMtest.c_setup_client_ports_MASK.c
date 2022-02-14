
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct port_args {int req_size; int reply_size; size_t server_num; int port; void* reply_msg; void* req_msg; } ;
typedef int mach_msg_trailer_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_trivial_message ;
typedef int ipc_inline_message ;
typedef int ipc_complex_message ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 () ;
 void* FUNC_4 (int) ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,int,char*,char*,char*) ;
 char** VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_6(struct port_args *VAR_8)
{
 kern_return_t VAR_9 = 0;
 switch(VAR_2) {
  case 128:
   VAR_8->req_size = sizeof(ipc_trivial_message);
   break;
  case 129:
   VAR_8->req_size = sizeof(ipc_inline_message) +
    sizeof(u_int32_t) * VAR_3;
   break;
  case 130:
   VAR_8->req_size = sizeof(ipc_complex_message);
   break;
 }
 VAR_8->req_size -= sizeof(mach_msg_trailer_t);
 VAR_8->reply_size = sizeof(ipc_trivial_message);
 VAR_8->req_msg = FUNC_4(VAR_8->req_size);
 VAR_8->reply_msg = FUNC_4(VAR_8->reply_size);

 VAR_9 = FUNC_2(FUNC_3(),
   VAR_1,
   &(VAR_8->port));
 if (VAR_0 != VAR_9) {
  FUNC_1("mach_port_allocate(): ", VAR_9);
  FUNC_0(1);
 }
 if (VAR_7) {
  FUNC_5("Client sending %d %s IPC messages to port '%s' in %s mode\n",
    VAR_4, (VAR_2 == 129) ?
    "inline" : ((VAR_2 == 130) ?
     "complex" : "trivial"),
    VAR_6[VAR_8->server_num],
    (VAR_5 ? "oneway" : "rpc"));
 }
}
