
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int tail; void* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,void*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_2, int VAR_3)
{
 void *VAR_4 = VAR_2->data;





 VAR_2->data -= VAR_1 - VAR_0;
 VAR_2->tail -= VAR_1 - VAR_0;
 FUNC_0(VAR_2, VAR_4,
  (unsigned int)VAR_3);
}
