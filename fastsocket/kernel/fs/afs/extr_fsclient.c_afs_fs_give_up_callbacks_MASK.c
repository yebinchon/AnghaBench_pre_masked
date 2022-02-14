
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_wait_mode {int dummy; } ;
struct afs_server {size_t cb_break_tail; int addr; int cb_break_waitq; struct afs_callback* cb_break; int cb_break_n; int cb_break_head; } ;
struct TYPE_2__ {size_t vid; size_t vnode; size_t unique; } ;
struct afs_callback {size_t version; size_t expiry; size_t type; TYPE_1__ fid; } ;
struct afs_call {int * request; int port; int service_id; } ;
typedef int __be32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct afs_callback*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int ,size_t,int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,size_t) ;
 int VAR_6 ;
 struct afs_call* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 int FUNC_7 (size_t,int *) ;
 void* FUNC_8 (size_t) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,size_t) ;

int FUNC_12(struct afs_server *VAR_7,
        const struct afs_wait_mode *VAR_8)
{
 struct afs_call *VAR_9;
 size_t VAR_10;
 __be32 *VAR_11, *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_2(VAR_7->cb_break_head, VAR_7->cb_break_tail,
         FUNC_0(VAR_7->cb_break));

 FUNC_4("{%zu},", VAR_10);

 if (VAR_10 == 0)
  return 0;
 if (VAR_10 > VAR_0)
  VAR_10 = VAR_0;

 FUNC_3("break %zu callbacks", VAR_10);

 VAR_9 = FUNC_5(&VAR_6,
       12 + VAR_10 * 6 * 4, 0);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->service_id = VAR_4;
 VAR_9->port = FUNC_9(VAR_1);


 VAR_11 = VAR_9->request;
 VAR_12 = VAR_11 + 2 + VAR_10 * 3;
 *VAR_11++ = FUNC_8(VAR_3);
 *VAR_11++ = FUNC_8(VAR_10);
 *VAR_12++ = FUNC_8(VAR_10);

 FUNC_7(VAR_10, &VAR_7->cb_break_n);
 for (VAR_13 = VAR_10; VAR_13 > 0; VAR_13--) {
  struct afs_callback *VAR_14 =
   &VAR_7->cb_break[VAR_7->cb_break_tail];

  *VAR_11++ = FUNC_8(VAR_14->fid.vid);
  *VAR_11++ = FUNC_8(VAR_14->fid.vnode);
  *VAR_11++ = FUNC_8(VAR_14->fid.unique);
  *VAR_12++ = FUNC_8(VAR_14->version);
  *VAR_12++ = FUNC_8(VAR_14->expiry);
  *VAR_12++ = FUNC_8(VAR_14->type);
  FUNC_10();
  VAR_7->cb_break_tail =
   (VAR_7->cb_break_tail + 1) &
   (FUNC_0(VAR_7->cb_break) - 1);
 }

 FUNC_1(VAR_10 > 0);
 FUNC_11(&VAR_7->cb_break_waitq, VAR_10);

 return FUNC_6(&VAR_7->addr, VAR_9, VAR_5, VAR_8);
}
