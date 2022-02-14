
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int* PUCHAR ;


 int FUNC_0 (int ) ;

void FUNC_1(char * VAR_0, UCHAR * VAR_1, int VAR_2)
{
 char * VAR_3;
 PUCHAR VAR_4;

 VAR_3 = VAR_0;
 VAR_4 = (PUCHAR) VAR_1;

 while(VAR_2--)
 {
  *VAR_4 = FUNC_0(*VAR_3++) << 4;
  *VAR_4 += FUNC_0(*VAR_3++);
  VAR_4++;
 }
}
