
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 void* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 void* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_8, void **VAR_9, void **VAR_10,
         u64 *VAR_11, void *VAR_12)
{
 unsigned long VAR_13 = (unsigned long)VAR_12;





 if ((VAR_13 & (VAR_2 | VAR_4 |
         VAR_3 | VAR_6 |
         VAR_5)) !=
     (VAR_2 | VAR_4 |
      VAR_3 | VAR_7))
  return -1;

 FUNC_2(VAR_8);
 FUNC_3(VAR_8, FUNC_1(VAR_8));
 *VAR_9 = FUNC_0(VAR_8);
 *VAR_10 = FUNC_4(VAR_8);
 *VAR_11 = VAR_0 | VAR_1;

 return 0;
}
