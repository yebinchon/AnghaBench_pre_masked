
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int const u128 ;
typedef int le128 ;
typedef int (* common_glue_func_t ) (void*,int *,int *) ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int const*,int const*,int const*) ;

void FUNC_2(void *VAR_0, u128 *VAR_1, const u128 *VAR_2, le128 *VAR_3,
          common_glue_func_t VAR_4)
{
 le128 VAR_5 = *VAR_3;


 FUNC_0(VAR_3, &VAR_5);


 FUNC_1(VAR_1, VAR_2, (u128 *)&VAR_5);


 VAR_4(VAR_0, (u8 *)VAR_1, (u8 *)VAR_1);


 FUNC_1(VAR_1, VAR_1, (u128 *)&VAR_5);
}
