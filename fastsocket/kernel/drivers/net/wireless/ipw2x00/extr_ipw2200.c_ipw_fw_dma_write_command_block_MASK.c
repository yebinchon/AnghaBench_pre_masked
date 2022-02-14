
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ipw_priv {int dummy; } ;
struct command_block {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ipw_priv*,scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ipw_priv *VAR_1, int VAR_2,
       struct command_block *VAR_3)
{
 u32 VAR_4 =
     VAR_0 +
     (sizeof(struct command_block) * VAR_2);
 FUNC_0(">> :\n");

 FUNC_1(VAR_1, VAR_4, (u8 *) VAR_3,
      (int)sizeof(struct command_block));

 FUNC_0("<< :\n");
 return 0;

}
