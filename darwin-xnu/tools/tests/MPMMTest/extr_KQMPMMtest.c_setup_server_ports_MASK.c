
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct port_args {int req_size; int reply_size; size_t server_num; int port; int pset; void* reply_msg; void* req_msg; } ;
typedef int mach_port_t ;
typedef int mach_msg_trailer_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_trivial_message ;
typedef int ipc_inline_message ;
typedef int ipc_complex_message ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 () ;
 void* FUNC_8 (int) ;
 int VAR_4 ;
 int FUNC_9 (char*,char*) ;
 char** VAR_5 ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ VAR_6 ;

void FUNC_11(struct port_args *VAR_7)
{
 kern_return_t VAR_8 = 0;
 mach_port_t VAR_9;

 VAR_7->req_size = FUNC_0(sizeof(ipc_inline_message) +
   sizeof(u_int32_t) * VAR_4,
   sizeof(ipc_complex_message));
 VAR_7->reply_size = sizeof(ipc_trivial_message) -
  sizeof(mach_msg_trailer_t);
 VAR_7->req_msg = FUNC_8(VAR_7->req_size);
 VAR_7->reply_msg = FUNC_8(VAR_7->reply_size);

 VAR_8 = FUNC_4(FUNC_7(),
   VAR_3,
   &(VAR_7->port));
 if (VAR_0 != VAR_8) {
  FUNC_3("mach_port_allocate(): ", VAR_8);
  FUNC_2(1);
 }

 VAR_8 = FUNC_4(FUNC_7(),
   VAR_2,
   &(VAR_7->pset));
 if (VAR_0 != VAR_8) {
  FUNC_3("mach_port_allocate(): ", VAR_8);
  FUNC_2(1);
 }

 VAR_8 = FUNC_5(FUNC_7(),
   VAR_7->port,
   VAR_7->pset);
 if (VAR_0 != VAR_8) {
  FUNC_3("mach_port_insert_member(): ", VAR_8);
  FUNC_2(1);
 }

 VAR_8 = FUNC_6(FUNC_7(),
   VAR_7->port,
   VAR_7->port,
   VAR_1);
 if (VAR_0 != VAR_8) {
  FUNC_3("mach_port_insert_right(): ", VAR_8);
  FUNC_2(1);
 }

 VAR_8 = FUNC_10(FUNC_7(), &VAR_9);
 if (VAR_0 != VAR_8) {
  FUNC_3("task_get_bootstrap_port(): ", VAR_8);
  FUNC_2(1);
 }

 if (VAR_6) {
  FUNC_9("server waiting for IPC messages from client on port '%s'.\n",
   VAR_5[VAR_7->server_num]);
 }
 VAR_8 = FUNC_1(VAR_9,
     VAR_5[VAR_7->server_num],
     VAR_7->port);
 if (VAR_0 != VAR_8) {
  FUNC_3("bootstrap_register(): ", VAR_8);
  FUNC_2(1);
 }
}
