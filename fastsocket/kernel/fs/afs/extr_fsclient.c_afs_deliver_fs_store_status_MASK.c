
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct afs_vnode {int status; } ;
struct afs_call {scalar_t__ reply_size; scalar_t__ reply_max; scalar_t__ operation_ID; int * buffer; int store_version; struct afs_vnode* reply; } ;
typedef int afs_dataversion_t ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct afs_call*,struct sk_buff*) ;
 int FUNC_3 (int const**,int *,struct afs_vnode*,int *) ;

__attribute__((used)) static int FUNC_4(struct afs_call *VAR_2,
           struct sk_buff *VAR_3, bool VAR_4)
{
 afs_dataversion_t *VAR_5;
 struct afs_vnode *VAR_6 = VAR_2->reply;
 const __be32 *VAR_7;

 FUNC_0(",,%u", VAR_4);

 FUNC_2(VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_1(" = 0 [more]");
  return 0;
 }

 if (VAR_2->reply_size != VAR_2->reply_max) {
  FUNC_1(" = -EBADMSG [%u != %u]",
         VAR_2->reply_size, VAR_2->reply_max);
  return -VAR_0;
 }


 VAR_5 = ((void*)0);
 if (VAR_2->operation_ID == VAR_1)
  VAR_5 = &VAR_2->store_version;

 VAR_7 = VAR_2->buffer;
 FUNC_3(&VAR_7, &VAR_6->status, VAR_6, VAR_5);


 FUNC_1(" = 0 [done]");
 return 0;
}
