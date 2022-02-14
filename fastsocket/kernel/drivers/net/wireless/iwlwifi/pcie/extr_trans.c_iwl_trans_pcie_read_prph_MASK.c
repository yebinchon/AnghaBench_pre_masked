
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,int ) ;
 int FUNC_1 (struct iwl_trans*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct iwl_trans *VAR_2, u32 VAR_3)
{
 FUNC_1(VAR_2, VAR_0,
          ((VAR_3 & 0x000FFFFF) | (3 << 24)));
 return FUNC_0(VAR_2, VAR_1);
}
