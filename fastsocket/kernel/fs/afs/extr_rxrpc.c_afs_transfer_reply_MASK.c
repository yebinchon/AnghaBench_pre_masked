
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {size_t len; } ;
struct afs_call {scalar_t__ reply_size; scalar_t__ buffer; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,scalar_t__,size_t) ;

void FUNC_2(struct afs_call *VAR_0, struct sk_buff *VAR_1)
{
 size_t VAR_2 = VAR_1->len;

 if (FUNC_1(VAR_1, 0, VAR_0->buffer + VAR_0->reply_size, VAR_2) < 0)
  FUNC_0();
 VAR_0->reply_size += VAR_2;
}
