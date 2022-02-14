
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct afs_vnode {int status; } ;
struct afs_call {scalar_t__ reply_size; scalar_t__ reply_max; int reply2; int * buffer; struct afs_vnode* reply; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct afs_call*,struct sk_buff*) ;
 int FUNC_3 (int const**,struct afs_vnode*) ;
 int FUNC_4 (int const**,int *,struct afs_vnode*,int *) ;
 int FUNC_5 (int const**,int ) ;

__attribute__((used)) static int FUNC_6(struct afs_call *VAR_1,
           struct sk_buff *VAR_2, bool VAR_3)
{
 struct afs_vnode *VAR_4 = VAR_1->reply;
 const __be32 *VAR_5;

 FUNC_0(",,%u", VAR_3);

 FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  return 0;

 if (VAR_1->reply_size != VAR_1->reply_max)
  return -VAR_0;


 VAR_5 = VAR_1->buffer;
 FUNC_4(&VAR_5, &VAR_4->status, VAR_4, ((void*)0));
 FUNC_3(&VAR_5, VAR_4);
 if (VAR_1->reply2)
  FUNC_5(&VAR_5, VAR_1->reply2);

 FUNC_1(" = 0 [done]");
 return 0;
}
