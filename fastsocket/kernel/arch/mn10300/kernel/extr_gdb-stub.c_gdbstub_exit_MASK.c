
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 () ;
 char FUNC_2 (unsigned char) ;
 char FUNC_3 (unsigned char) ;
 unsigned char* VAR_1 ;

void FUNC_4(int VAR_2)
{
 unsigned char VAR_3;
 unsigned char VAR_4;
 int VAR_5;

 VAR_0 = 1;
 VAR_1[0] = 'W';
 VAR_1[1] = FUNC_2(VAR_2);
 VAR_1[2] = FUNC_3(VAR_2);
 VAR_1[3] = 0;

 FUNC_0('$');
 VAR_3 = 0;
 VAR_5 = 0;

 while ((VAR_4 = VAR_1[VAR_5]) != 0) {
  FUNC_0(VAR_4);
  VAR_3 += VAR_4;
  VAR_5 += 1;
 }

 FUNC_0('#');
 FUNC_0(FUNC_2(VAR_3));
 FUNC_0(FUNC_3(VAR_3));


 FUNC_1();

 VAR_0 = 0;
}
