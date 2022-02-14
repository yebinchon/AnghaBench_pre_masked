
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct port_args {int req_size; int reply_size; int* set; int* port_list; int server_num; int rcv_set; int port; void* reply_msg; void* req_msg; } ;
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
 scalar_t__ FUNC_1 (int,char*,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int*) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 scalar_t__ FUNC_8 (int ,int,int,int ) ;
 int FUNC_9 () ;
 void* FUNC_10 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*,...) ;
 char** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_12 (int ,int*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

void FUNC_13(struct port_args *VAR_12)
{
 kern_return_t VAR_13 = 0;
 mach_port_t VAR_14;
 mach_port_t VAR_15;

 VAR_12->req_size = FUNC_0(sizeof(ipc_inline_message) +
   sizeof(u_int32_t) * VAR_4,
   sizeof(ipc_complex_message));
 VAR_12->reply_size = sizeof(ipc_trivial_message) -
  sizeof(mach_msg_trailer_t);
 VAR_12->req_msg = FUNC_10(VAR_12->req_size);
 VAR_12->reply_msg = FUNC_10(VAR_12->reply_size);
 if (VAR_7 > 0) {
  VAR_12->set = (mach_port_t *)FUNC_2(sizeof(mach_port_t), VAR_7);
  if (!VAR_12->set) {
   FUNC_4(VAR_8, "calloc(%d, %d) failed!\n", sizeof(mach_port_t), VAR_7);
   FUNC_3(1);
  }
 }
 if (VAR_9) {
  VAR_12->port_list = (mach_port_t *)FUNC_2(sizeof(mach_port_t), VAR_5);
  if (!VAR_12->port_list) {
   FUNC_4(VAR_8, "calloc(%d, %d) failed!\n", sizeof(mach_port_t), VAR_5);
   FUNC_3(1);
  }
 }

 if (VAR_10) {
  mach_port_t VAR_16;
  if (VAR_7 < 1) {
   FUNC_4(VAR_8, "Can't use sets with a setcount of %d\n", VAR_7);
   FUNC_3(1);
  }

  for (int VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
   VAR_13 = FUNC_6(FUNC_9(),
       VAR_2,
       &VAR_12->set[VAR_17]);
   if (VAR_0 != VAR_13) {
    FUNC_5("mach_port_allocate(SET): ", VAR_13);
    FUNC_3(1);
   }
   if (VAR_11 > 1)
    FUNC_11("SVR[%d] allocated set[%d] %#x\n",
           VAR_12->server_num, VAR_17, VAR_12->set[VAR_17]);

   VAR_16 = VAR_12->set[VAR_17];
  }


  VAR_12->rcv_set = VAR_12->set[0];
 }


 for (int VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  VAR_13 = FUNC_6(FUNC_9(),
      VAR_3,
      &VAR_15);
  if (VAR_0 != VAR_13) {
   FUNC_5("mach_port_allocate(PORT): ", VAR_13);
   FUNC_3(1);
  }

  if (VAR_9)
   VAR_12->port_list[VAR_18] = VAR_15;

  if (VAR_10) {

   for (int VAR_19 = 0; VAR_19 < VAR_7; VAR_19++) {
    if (VAR_11 > 1)
     FUNC_11("SVR[%d] moving port %#x into set %#x...\n",
            VAR_12->server_num, VAR_15, VAR_12->set[VAR_19]);
    VAR_13 = FUNC_7(FUNC_9(),
             VAR_15, VAR_12->set[VAR_19]);
    if (VAR_0 != VAR_13) {
     FUNC_5("mach_port_insert_member(): ", VAR_13);
     FUNC_3(1);
    }
   }
  }
 }


 VAR_12->port = VAR_15;

 if (VAR_9) {

  for (int VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
   VAR_13 = FUNC_8(FUNC_9(),
           VAR_12->port_list[VAR_20],
           VAR_12->port_list[VAR_20],
           VAR_1);
   if (VAR_0 != VAR_13) {
    FUNC_5("mach_port_insert_right(): ", VAR_13);
    FUNC_3(1);
   }
  }
 } else {
  VAR_13 = FUNC_8(FUNC_9(),
          VAR_12->port,
          VAR_12->port,
          VAR_1);
  if (VAR_0 != VAR_13) {
   FUNC_5("mach_port_insert_right(): ", VAR_13);
   FUNC_3(1);
  }
 }

 VAR_13 = FUNC_12(FUNC_9(), &VAR_14);
 if (VAR_0 != VAR_13) {
  FUNC_5("task_get_bootstrap_port(): ", VAR_13);
  FUNC_3(1);
 }

 if (VAR_11) {
  FUNC_11("server waiting for IPC messages from client on port '%s' (%#x).\n",
   VAR_6[VAR_12->server_num], VAR_12->port);
 }
 VAR_13 = FUNC_1(VAR_14,
     VAR_6[VAR_12->server_num],
     VAR_12->port);
 if (VAR_0 != VAR_13) {
  FUNC_5("bootstrap_register(): ", VAR_13);
  FUNC_3(1);
 }
}
