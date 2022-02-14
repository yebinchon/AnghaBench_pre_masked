
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amo {int variable; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

__attribute__((used)) static enum xp_retval
FUNC_8(struct amo *VAR_4, u64 VAR_5, int VAR_6, int VAR_7,
   int VAR_8)
{
 int VAR_9 = 0;
 unsigned long VAR_10;

 FUNC_5(VAR_10);

 FUNC_0(FUNC_3((u64)&VAR_4->variable), VAR_0, VAR_5);
 FUNC_6(VAR_6, VAR_7, VAR_8, 0);







 VAR_9 = FUNC_7((u64 *)FUNC_1(FUNC_2(&VAR_4->variable),
           VAR_3));

 FUNC_4(VAR_10);

 return (VAR_9 == 0) ? VAR_2 : VAR_1;
}
