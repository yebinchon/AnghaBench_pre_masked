
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sin_addr; int sin_port; int sin_family; } ;
struct TYPE_5__ {TYPE_1__ sin; } ;
struct sockaddr_rxrpc {int transport_len; TYPE_2__ transport; int transport_type; int srx_service; int srx_family; } ;
struct rxrpc_call {int dummy; } ;
struct msghdr {int msg_iovlen; int msg_flags; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct kvec {int iov_len; int iov_base; } ;
struct iovec {int dummy; } ;
struct in_addr {int s_addr; } ;
struct afs_wait_mode {int (* wait ) (struct afs_call*) ;} ;
struct afs_call {TYPE_3__* type; struct rxrpc_call* rxcall; scalar_t__ send_pages; int request_size; int state; int request; int * key; int port; int service_id; int async_work; struct afs_wait_mode const* wait_mode; } ;
typedef int srx ;
typedef int gfp_t ;
struct TYPE_6__ {int (* destructor ) (struct afs_call*) ;int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct rxrpc_call*) ;
 int VAR_3 ;
 int FUNC_3 (struct rxrpc_call*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,struct afs_call*,int *,int ,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct afs_call*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct afs_call*,struct msghdr*,struct kvec*) ;
 int VAR_8 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct in_addr*,int) ;
 int FUNC_12 (struct sockaddr_rxrpc*,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct rxrpc_call*,int ) ;
 struct rxrpc_call* FUNC_15 (int ,struct sockaddr_rxrpc*,int *,unsigned long,int ) ;
 int FUNC_16 (struct rxrpc_call*) ;
 int FUNC_17 (struct rxrpc_call*,struct msghdr*,int ) ;
 int FUNC_18 (struct afs_call*) ;
 int FUNC_19 (struct afs_call*) ;

int FUNC_20(struct in_addr *VAR_9, struct afs_call *VAR_10, gfp_t VAR_11,
    const struct afs_wait_mode *VAR_12)
{
 struct sockaddr_rxrpc VAR_13;
 struct rxrpc_call *VAR_14;
 struct msghdr VAR_15;
 struct kvec VAR_16[1];
 int VAR_17;

 FUNC_5("%x,{%d},", VAR_9->s_addr, FUNC_13(VAR_10->port));

 FUNC_0(VAR_10->type != ((void*)0));
 FUNC_0(VAR_10->type->name != ((void*)0));

 FUNC_4("____MAKE %p{%s,%x} [%d]____",
        VAR_10, VAR_10->type->name, FUNC_10(VAR_10->key),
        FUNC_9(&VAR_6));

 VAR_10->wait_mode = VAR_12;
 FUNC_1(&VAR_10->async_work, VAR_7);

 FUNC_12(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.srx_family = VAR_2;
 VAR_13.srx_service = VAR_10->service_id;
 VAR_13.transport_type = VAR_5;
 VAR_13.transport_len = sizeof(VAR_13.transport.sin);
 VAR_13.transport.sin.sin_family = VAR_1;
 VAR_13.transport.sin.sin_port = VAR_10->port;
 FUNC_11(&VAR_13.transport.sin.sin_addr, VAR_9, 4);


 VAR_14 = FUNC_15(VAR_8, &VAR_13, VAR_10->key,
      (unsigned long) VAR_10, VAR_11);
 VAR_10->key = ((void*)0);
 if (FUNC_2(VAR_14)) {
  VAR_17 = FUNC_3(VAR_14);
  goto error_kill_call;
 }

 VAR_10->rxcall = VAR_14;


 VAR_16[0].iov_base = VAR_10->request;
 VAR_16[0].iov_len = VAR_10->request_size;

 VAR_15.msg_name = ((void*)0);
 VAR_15.msg_namelen = 0;
 VAR_15.msg_iov = (struct iovec *) VAR_16;
 VAR_15.msg_iovlen = 1;
 VAR_15.msg_control = ((void*)0);
 VAR_15.msg_controllen = 0;
 VAR_15.msg_flags = (VAR_10->send_pages ? VAR_3 : 0);




 if (!VAR_10->send_pages)
  VAR_10->state = VAR_0;
 VAR_17 = FUNC_17(VAR_14, &VAR_15, VAR_10->request_size);
 if (VAR_17 < 0)
  goto error_do_abort;

 if (VAR_10->send_pages) {
  VAR_17 = FUNC_8(VAR_10, &VAR_15, VAR_16);
  if (VAR_17 < 0)
   goto error_do_abort;
 }



 return VAR_12->wait(VAR_10);

error_do_abort:
 FUNC_14(VAR_14, VAR_4);
 FUNC_16(VAR_14);
 VAR_10->rxcall = ((void*)0);
error_kill_call:
 VAR_10->type->destructor(VAR_10);
 FUNC_7(VAR_10);
 FUNC_6(" = %d", VAR_17);
 return VAR_17;
}
