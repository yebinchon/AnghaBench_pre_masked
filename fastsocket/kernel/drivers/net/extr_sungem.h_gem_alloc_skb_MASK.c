
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static __inline__ struct sk_buff *FUNC_3(int VAR_0,
      gfp_t VAR_1)
{
 struct sk_buff *VAR_2 = FUNC_1(VAR_0 + 64, VAR_1);

 if (VAR_2) {
  int VAR_3 = (int) FUNC_0(VAR_2->data);
  if (VAR_3)
   FUNC_2(VAR_2, VAR_3);
 }

 return VAR_2;
}
