
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLUcode ;
typedef int CURLU ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,char**,int ) ;
 scalar_t__ FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (char*,char*) ;

int FUNC_6(void)
{
  CURLU *VAR_3;
  CURLUcode VAR_4;
  char *VAR_5;
  char *VAR_6;

  VAR_3 = FUNC_1();
  if(!VAR_3)
    return 1;


  VAR_4 = FUNC_4(VAR_3, VAR_2, "http://example.com/path/index.html", 0);
  if(VAR_4)
    goto fail;


  VAR_4 = FUNC_3(VAR_3, VAR_0, &VAR_5, 0);
  if(!VAR_4) {
    FUNC_5("Host name: %s\n", VAR_5);
    FUNC_0(VAR_5);
  }


  VAR_4 = FUNC_3(VAR_3, VAR_1, &VAR_6, 0);
  if(!VAR_4) {
    FUNC_5("Path: %s\n", VAR_6);
    FUNC_0(VAR_6);
  }


  VAR_4 = FUNC_4(VAR_3, VAR_2, "../another/second.html", 0);
  if(VAR_4)
    goto fail;


  VAR_4 = FUNC_3(VAR_3, VAR_1, &VAR_6, 0);
  if(!VAR_4) {
    FUNC_5("Path: %s\n", VAR_6);
    FUNC_0(VAR_6);
  }

  fail:
  FUNC_2(VAR_3);
  return 0;
}
