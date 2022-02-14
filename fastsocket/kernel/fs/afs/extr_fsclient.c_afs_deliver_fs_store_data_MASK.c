
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct afs_vnode {int status; } ;
struct afs_call {scalar_t__ reply_size; scalar_t__ reply_max; int store_version; int * buffer; struct afs_vnode* reply; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct afs_vnode*,struct afs_call*) ;
 int FUNC_3 (struct afs_call*,struct sk_buff*) ;
 int FUNC_4 (int const**,int *,struct afs_vnode*,int *) ;

__attribute__((used)) static int FUNC_5(struct afs_call *VAR_1,
         struct sk_buff *VAR_2, bool VAR_3)
{
 struct afs_vnode *VAR_4 = VAR_1->reply;
 const __be32 *VAR_5;

 FUNC_0(",,%u", VAR_3);

 FUNC_3(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_1(" = 0 [more]");
  return 0;
 }

 if (VAR_1->reply_size != VAR_1->reply_max) {
  FUNC_1(" = -EBADMSG [%u != %u]",
         VAR_1->reply_size, VAR_1->reply_max);
  return -VAR_0;
 }


 VAR_5 = VAR_1->buffer;
 FUNC_4(&VAR_5, &VAR_4->status, VAR_4,
      &VAR_1->store_version);


 FUNC_2(VAR_4, VAR_1);

 FUNC_1(" = 0 [done]");
 return 0;
}
