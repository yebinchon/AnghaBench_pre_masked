
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 unsigned char* VAR_6 ;
 char* VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (unsigned char) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_11 ;
 int FUNC_6 (unsigned char*,char*) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (char*,char) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_9 (int ,char*,int) ;

void FUNC_10(void)
{
  unsigned char VAR_14;




  VAR_3 = 1;
  VAR_0;




  if(VAR_13)
  {
    if(VAR_2 == 0x9b)
    {
      VAR_14 = 0x0d;
      if(VAR_10)
      {
        if((VAR_4 == 0) && (VAR_9 == 0))
        {
          VAR_5++;
          VAR_6[VAR_5-1] = VAR_14;
          VAR_6[VAR_5] = 0;

          VAR_8 = 0;
          VAR_7[VAR_8] = 0;
          FUNC_6(VAR_6, "OK\r\n");
          VAR_5 += 4;

        }
        else
        {

          FUNC_9(VAR_11, (char *)&VAR_14, 1);



        }
        VAR_14 = 0x0a;
      }
    }
  }
  else
  {
    VAR_14 = VAR_2;
  }


  if(VAR_9 && VAR_12 && (VAR_14 == 0x0d))
  {
    VAR_14 = 0x0a;
  }
    if((VAR_9) && (FUNC_9(VAR_11, (char *)&VAR_14, 1) < 1))
    {
      FUNC_5("write");
      FUNC_0("R*: ERROR on write.");
      VAR_1;
      VAR_3 = 135;

    }
  VAR_2 = 1;
}
