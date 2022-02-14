
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,char,int) ;

int
FUNC_4(unsigned char *VAR_0, const unsigned char *VAR_1, unsigned char *VAR_2)
{
 int VAR_3;
 unsigned char VAR_4[14], VAR_5[16], VAR_6[21];

 FUNC_3(VAR_4, '\0', 14);
 FUNC_3(VAR_5, '\0', 16);
 FUNC_3(VAR_6, '\0', 21);

 FUNC_2(VAR_4, VAR_0, 14);
 VAR_3 = FUNC_0(VAR_4, VAR_5);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_6, VAR_5, 16);
 VAR_3 = FUNC_1(VAR_6, VAR_1, VAR_2);

 return VAR_3;
}
