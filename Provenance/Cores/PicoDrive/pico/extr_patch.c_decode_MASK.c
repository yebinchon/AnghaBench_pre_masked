
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int addr; int data; } ;


 int FUNC_0 (char const*,struct patch*) ;
 int FUNC_1 (char*,struct patch*) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(const char* VAR_0, struct patch* VAR_1)
{
  int VAR_2 = FUNC_3(VAR_0), VAR_3, VAR_4;
  char VAR_5[16], *VAR_6;
  const char *VAR_7, *VAR_8;
  int VAR_9, VAR_10;


  VAR_1->addr = VAR_1->data = 0;


  if (VAR_2 == 8)
  {
    FUNC_0(VAR_0, VAR_1);
    return;
  }



    if(VAR_2 == 9 && VAR_0[4] == '-')
    {

      VAR_5[0] = VAR_0[0];
      VAR_5[1] = VAR_0[1];
      VAR_5[2] = VAR_0[2];
      VAR_5[3] = VAR_0[3];
      VAR_5[4] = VAR_0[5];
      VAR_5[5] = VAR_0[6];
      VAR_5[6] = VAR_0[7];
      VAR_5[7] = VAR_0[8];
      VAR_5[8] = '\0';
      FUNC_0(VAR_5, VAR_1);
      return;
    }




  if(!(VAR_6 = FUNC_2(VAR_0, ':'))) goto bad_code;
  VAR_7 = VAR_0; VAR_8 = VAR_6 + 1; VAR_9 = VAR_6 - VAR_0; VAR_10 = VAR_2 - VAR_9 - 1;


  if(VAR_9 == 0 || VAR_9 > 6 || VAR_10 == 0 || VAR_10 > 4) goto bad_code;


  for(VAR_3 = 0; VAR_3 < (6 - VAR_9); ++VAR_3) VAR_5[VAR_3] = '0';
  for(VAR_4 = 0; VAR_3 < 6; ++VAR_3, ++VAR_4) VAR_5[VAR_3] = VAR_7[VAR_4];


  for(VAR_3 = 6; VAR_3 < (10 - VAR_10); ++VAR_3) VAR_5[VAR_3] = '0';
  for(VAR_4 = 0; VAR_3 < 10; ++VAR_3, ++VAR_4) VAR_5[VAR_3] = VAR_8[VAR_4];

  VAR_5[10] = '\0';


  FUNC_1(VAR_5, VAR_1);
  return;

bad_code:


  VAR_1->data = VAR_1->addr = -1;
  return;
}
