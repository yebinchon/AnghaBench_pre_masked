
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static inline struct sk_buff *
FUNC_3(unsigned int VAR_1, gfp_t VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(VAR_1 + VAR_0, VAR_2);
 if (FUNC_1(VAR_3))
  FUNC_2(VAR_3, VAR_0);
 return VAR_3;
}
