
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 struct sk_buff* FUNC_1 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static inline struct sk_buff * FUNC_4(unsigned long VAR_1,
 unsigned int VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_1(VAR_1 + VAR_0 - 1, VAR_2);
 if (FUNC_2(VAR_3)) {
  int VAR_4 = FUNC_0((unsigned long) VAR_3->data);
  if (VAR_4)
   FUNC_3(VAR_3, VAR_4);
 }

 return VAR_3;
}
