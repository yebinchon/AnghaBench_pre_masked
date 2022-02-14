
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,unsigned char) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0,
                                     unsigned char *VAR_1)
{
  int VAR_2;
  for(VAR_2 = 0; VAR_2 < 32; VAR_2++)
    FUNC_0((char *) &VAR_1[VAR_2 * 2], 3, "%02x", VAR_0[VAR_2]);
}
