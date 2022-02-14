
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct se_cmd {int alua_nonop_delay; int se_cmd_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(
 struct se_cmd *VAR_1,
 unsigned char *VAR_2,
 int VAR_3,
 u8 *VAR_4)
{





 VAR_1->se_cmd_flags |= VAR_0;
 VAR_1->alua_nonop_delay = VAR_3;
 return 0;
}
