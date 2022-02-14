
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

const char *FUNC_0(u32 VAR_4)
{
 if (VAR_4 & VAR_2)
  return "Magic pattern";
 if (VAR_4 & VAR_3)
  return "User pattern";
 if (VAR_4 & VAR_1)
  return "Link change";
 if (VAR_4 & VAR_0)
  return "Beacon miss";

 return "unknown reason";
}
