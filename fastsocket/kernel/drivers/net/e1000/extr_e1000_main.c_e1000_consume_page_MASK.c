
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int truesize; int data_len; int len; } ;
struct e1000_buffer {int * page; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct e1000_buffer *VAR_1, struct sk_buff *VAR_2,
                               u16 VAR_3)
{
 VAR_1->page = ((void*)0);
 VAR_2->len += VAR_3;
 VAR_2->data_len += VAR_3;
 VAR_2->truesize += VAR_0;
}
