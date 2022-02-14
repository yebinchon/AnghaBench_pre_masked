
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xdr_netobj {scalar_t__ len; int data; } ;
struct TYPE_4__ {scalar_t__ len; int * data; } ;
struct nlm_share {int s_mode; int s_access; struct nlm_share* s_next; TYPE_2__ s_owner; struct nlm_host* s_host; struct nlm_file* s_file; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {struct nlm_share* f_shares; } ;
struct TYPE_3__ {struct xdr_netobj oh; } ;
struct nlm_args {int fsm_access; int fsm_mode; TYPE_1__ lock; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct nlm_share* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nlm_share*,struct xdr_netobj*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__be32
FUNC_3(struct nlm_host *VAR_4, struct nlm_file *VAR_5,
   struct nlm_args *VAR_6)
{
 struct nlm_share *VAR_7;
 struct xdr_netobj *VAR_8 = &VAR_6->lock.oh;
 u8 *VAR_9;

 for (VAR_7 = VAR_5->f_shares; VAR_7; VAR_7 = VAR_7->s_next) {
  if (VAR_7->s_host == VAR_4 && FUNC_2(VAR_7, VAR_8))
   goto update;
  if ((VAR_6->fsm_access & VAR_7->s_mode)
   || (VAR_6->fsm_mode & VAR_7->s_access ))
   return VAR_2;
 }

 VAR_7 = FUNC_0(sizeof(*VAR_7) + VAR_8->len,
      VAR_0);
 if (VAR_7 == ((void*)0))
  return VAR_3;


 VAR_9 = (u8 *) (VAR_7 + 1);
 FUNC_1(VAR_9, VAR_8->data, VAR_8->len);

 VAR_7->s_file = VAR_5;
 VAR_7->s_host = VAR_4;
 VAR_7->s_owner.data = VAR_9;
 VAR_7->s_owner.len = VAR_8->len;
 VAR_7->s_next = VAR_5->f_shares;
 VAR_5->f_shares = VAR_7;

update:
 VAR_7->s_access = VAR_6->fsm_access;
 VAR_7->s_mode = VAR_6->fsm_mode;
 return VAR_1;
}
