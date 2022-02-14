
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned char*,unsigned char*) ;

void FUNC_5(unsigned char *VAR_0, unsigned char *VAR_1, unsigned char *VAR_2)
{
 int VAR_3;
 int VAR_4;
 unsigned char VAR_5[16];
 unsigned char VAR_6[16];
 unsigned char VAR_7[16];

 for(VAR_4=0; VAR_4<16; VAR_4++) VAR_7[VAR_4] = VAR_0[VAR_4];

 for (VAR_3 = 0; VAR_3 < 11; VAR_3++)
 {
  if (VAR_3 == 0)
  {
   FUNC_4(VAR_7, VAR_1, VAR_2);
   FUNC_2(VAR_7, VAR_3);
  }
  else if (VAR_3 == 10)
  {
   FUNC_0(VAR_2, VAR_5);
   FUNC_3(VAR_5, VAR_6);
   FUNC_4(VAR_6, VAR_7, VAR_2);
  }
  else
  {
   FUNC_0(VAR_2, VAR_5);
   FUNC_3(VAR_5, VAR_6);
   FUNC_1(&VAR_6[0], &VAR_5[0]);
   FUNC_1(&VAR_6[4], &VAR_5[4]);
   FUNC_1(&VAR_6[8], &VAR_5[8]);
   FUNC_1(&VAR_6[12], &VAR_5[12]);
   FUNC_4(VAR_5, VAR_7, VAR_2);
   FUNC_2(VAR_7, VAR_3);
  }
 }

}
