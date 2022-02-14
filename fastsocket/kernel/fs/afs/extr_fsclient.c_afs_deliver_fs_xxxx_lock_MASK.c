
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct afs_call {scalar_t__ reply_size; scalar_t__ reply_max; int * buffer; int unmarshall; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct afs_call*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct afs_call *VAR_1,
        struct sk_buff *VAR_2, bool VAR_3)
{
 const __be32 *VAR_4;

 FUNC_0("{%u},{%u},%d", VAR_1->unmarshall, VAR_2->len, VAR_3);

 FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  return 0;

 if (VAR_1->reply_size != VAR_1->reply_max)
  return -VAR_0;


 VAR_4 = VAR_1->buffer;


 FUNC_1(" = 0 [done]");
 return 0;
}
