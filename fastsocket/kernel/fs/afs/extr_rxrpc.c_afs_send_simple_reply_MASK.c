
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msghdr {int msg_iovlen; scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct afs_call {TYPE_1__* type; int * rxcall; int state; } ;
struct TYPE_2__ {int (* destructor ) (struct afs_call*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct afs_call*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct msghdr*,size_t) ;
 int FUNC_7 (struct afs_call*) ;

void FUNC_8(struct afs_call *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct msghdr VAR_6;
 struct iovec VAR_7[1];
 int VAR_8;

 FUNC_1("");

 VAR_7[0].iov_base = (void *) VAR_4;
 VAR_7[0].iov_len = VAR_5;
 VAR_6.msg_name = ((void*)0);
 VAR_6.msg_namelen = 0;
 VAR_6.msg_iov = VAR_7;
 VAR_6.msg_iovlen = 1;
 VAR_6.msg_control = ((void*)0);
 VAR_6.msg_controllen = 0;
 VAR_6.msg_flags = 0;

 VAR_3->state = VAR_0;
 VAR_8 = FUNC_6(VAR_3->rxcall, &VAR_6, VAR_5);
 if (VAR_8 >= 0) {
  FUNC_2(" [replied]");
  return;
 }
 if (VAR_8 == -VAR_1) {
  FUNC_0("oom");
  FUNC_4(VAR_3->rxcall, VAR_2);
 }
 FUNC_5(VAR_3->rxcall);
 VAR_3->rxcall = ((void*)0);
 VAR_3->type->destructor(VAR_3);
 FUNC_3(VAR_3);
 FUNC_2(" [error]");
}
