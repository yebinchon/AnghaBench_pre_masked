
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myprogress {int * curl; scalar_t__ lastruntime; } ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,char*) ;
 long VAR_7 ;
 int VAR_8 ;
 long VAR_9 ;

int FUNC_6(void)
{
  CURL *VAR_10;
  CURLcode VAR_11 = VAR_0;
  struct myprogress VAR_12;

  VAR_10 = FUNC_1();
  if(VAR_10) {
    VAR_12.lastruntime = 0;
    VAR_12.curl = VAR_10;

    FUNC_3(VAR_10, VAR_4, "https://example.com/");
    FUNC_3(VAR_10, VAR_3, VAR_7);

    FUNC_3(VAR_10, VAR_2, &VAR_12);


    FUNC_3(VAR_10, VAR_1, 0L);
    VAR_11 = FUNC_2(VAR_10);

    if(VAR_11 != VAR_0)
      FUNC_5(VAR_8, "%s\n", FUNC_4(VAR_11));


    FUNC_0(VAR_10);
  }
  return (int)VAR_11;
}
