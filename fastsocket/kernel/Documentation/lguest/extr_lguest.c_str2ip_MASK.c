
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static u32 FUNC_2(const char *VAR_0)
{
 unsigned int VAR_1[4];

 if (FUNC_1(VAR_0, "%u.%u.%u.%u", &VAR_1[0], &VAR_1[1], &VAR_1[2], &VAR_1[3]) != 4)
  FUNC_0(1, "Failed to parse IP address '%s'", VAR_0);
 return (VAR_1[0] << 24) | (VAR_1[1] << 16) | (VAR_1[2] << 8) | VAR_1[3];
}
