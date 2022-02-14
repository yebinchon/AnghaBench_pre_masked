
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;

int FUNC_7(char *VAR_6)
{
  CURL *VAR_7;
  CURLcode VAR_8 = VAR_0;

  FUNC_6(VAR_4);
  VAR_7 = FUNC_1();
  if(VAR_7) {
    FUNC_3(VAR_7, VAR_2, VAR_6);
    FUNC_3(VAR_7, VAR_1, 1L);
    FUNC_3(VAR_7, VAR_3, 1L);
    VAR_8 = FUNC_2(VAR_7);

    FUNC_5(VAR_5, "****************************** Do it again\n");
    VAR_8 = FUNC_2(VAR_7);
    FUNC_0(VAR_7);
  }
  FUNC_4();
  return (int)VAR_8;
}
