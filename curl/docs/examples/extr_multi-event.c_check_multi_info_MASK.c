
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msg; int * easy_handle; } ;
typedef char FILE ;
typedef TYPE_1__ CURLMsg ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char**) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(void)
{
  char *VAR_4;
  CURLMsg *VAR_5;
  int VAR_6;
  CURL *VAR_7;
  FILE *VAR_8;

  while((VAR_5 = FUNC_2(VAR_2, &VAR_6))) {
    switch(VAR_5->msg) {
    case 128:





      VAR_7 = VAR_5->easy_handle;

      FUNC_1(VAR_7, VAR_0, &VAR_4);
      FUNC_1(VAR_7, VAR_1, &VAR_8);
      FUNC_6("%s DONE\n", VAR_4);

      FUNC_3(VAR_2, VAR_7);
      FUNC_0(VAR_7);
      if(VAR_8) {
        FUNC_4(VAR_8);
      }
      break;

    default:
      FUNC_5(VAR_3, "CURLMSG default\n");
      break;
    }
  }
}
