
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,size_t,char*,unsigned char const,unsigned char const,...) ;

size_t FUNC_1(char *VAR_0, size_t VAR_1, const unsigned char *VAR_2,
   int VAR_3)
{
 size_t VAR_4;
 if (VAR_3)
  VAR_4 = FUNC_0(VAR_0, VAR_1,
      "%02x:%02x:%02x:%02x:%02x:%02x",
      VAR_2[0], VAR_2[1], VAR_2[2],
      VAR_2[3], VAR_2[4], VAR_2[5]);
 else
  VAR_4 = FUNC_0(VAR_0, VAR_1, "%02x:%02x",
      VAR_2[1], VAR_2[0]);
 return VAR_4;
}
