
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int wbuf ;
typedef int buffer ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int *,int,int ,int*,int,int *) ;
 int FUNC_2 (int,int *,int,int ,char*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (int,char*,size_t) ;
 int FUNC_6 (char*,size_t,char*,int,...) ;
 char* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,char*,size_t) ;
 char* FUNC_10 (char*,char) ;
 int VAR_5 ;
 int FUNC_11 (char*,int*,size_t) ;

const char *FUNC_12(int VAR_6, char *VAR_7, size_t VAR_8)
{



  int VAR_9 = VAR_4;
  char *VAR_10;
  size_t VAR_11;

  FUNC_0(VAR_6 >= 0);

  VAR_11 = VAR_8 - 1;
  *VAR_7 = '\0';
  {
    char *VAR_12 = FUNC_7(VAR_6);
    if(VAR_12)
      FUNC_9(VAR_7, VAR_12, VAR_11);
    else
      FUNC_6(VAR_7, VAR_11, "Unknown error %d", VAR_6);
  }




  VAR_7[VAR_11] = '\0';


  VAR_10 = FUNC_10(VAR_7, '\n');
  if(VAR_10 && (VAR_10 - VAR_7) >= 2)
    *VAR_10 = '\0';
  VAR_10 = FUNC_10(VAR_7, '\r');
  if(VAR_10 && (VAR_10 - VAR_7) >= 1)
    *VAR_10 = '\0';

  if(VAR_4 != VAR_9)
    VAR_4 = VAR_9;






  return VAR_7;
}
