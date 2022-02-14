
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static __u8 FUNC_1(struct sk_buff *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 if ( VAR_1 == 0 )
  return 0;
 else if ( VAR_1 <= 10 )
  return 1;
 else if ( VAR_1 <= 50 )
  return 2;
 else if ( VAR_1 <= 100 )
  return 3;
 else if ( VAR_1 <= 500 )
  return 4;
 else if ( VAR_1 <= 1000 )
  return 5;
 else if ( VAR_1 <= 5000 )
  return 6;
 else
  return 7;
}
