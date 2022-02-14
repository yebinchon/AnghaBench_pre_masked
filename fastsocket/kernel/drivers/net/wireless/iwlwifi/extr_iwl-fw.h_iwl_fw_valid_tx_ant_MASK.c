
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_fw {int phy_config; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u8 FUNC_0(const struct iwl_fw *VAR_2)
{
 return (VAR_2->phy_config & VAR_0) >>
  VAR_1;
}
