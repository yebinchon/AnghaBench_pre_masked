
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, unsigned char VAR_1[6])
{
 unsigned int VAR_2[6];
 if (FUNC_1(VAR_0, "%02x:%02x:%02x:%02x:%02x:%02x",
     &VAR_2[0], &VAR_2[1], &VAR_2[2], &VAR_2[3], &VAR_2[4], &VAR_2[5]) != 6)
  FUNC_0(1, "Failed to parse mac address '%s'", VAR_0);
 VAR_1[0] = VAR_2[0];
 VAR_1[1] = VAR_2[1];
 VAR_1[2] = VAR_2[2];
 VAR_1[3] = VAR_2[3];
 VAR_1[4] = VAR_2[4];
 VAR_1[5] = VAR_2[5];
}
