
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_seqno_t ;
typedef int mach_msg_size_t ;
typedef int mach_msg_max_trailer_t ;
typedef int mach_msg_id_t ;
typedef int ipc_mqueue_t ;
typedef int ipc_kmsg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,int *,int *,int *,int *,int *) ;

unsigned
FUNC_3(ipc_mqueue_t VAR_0,
  mach_port_seqno_t * VAR_1,
  mach_msg_size_t * VAR_2,
  mach_msg_id_t * VAR_3,
  mach_msg_max_trailer_t * VAR_4,
  ipc_kmsg_t *VAR_5)
{
 unsigned VAR_6;

 FUNC_0(VAR_0);

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5);

 FUNC_1(VAR_0);
 return VAR_6;
}
