
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct berval {int dummy; } ;
typedef int LDAPMessage ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 struct berval** FUNC_3 (void*,int *,char*) ;
 int FUNC_4 (void*,int ,int *,int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char const*) ;

struct berval * *
FUNC_7(void * VAR_1, LDAPMessage * VAR_2, const char * VAR_3)

{
  char * VAR_4;
  struct berval * * VAR_5;

  VAR_4 = (char *) ((void*)0);

  if(VAR_3) {
    int VAR_6 = FUNC_6(VAR_3);

    VAR_4 = FUNC_5(VAR_6 + 1);
    if(!VAR_4) {
      FUNC_4(VAR_1, VAR_0, ((void*)0),
                       FUNC_2(VAR_0));
      return (struct berval * *) ((void*)0);
    }

    FUNC_0(VAR_4, VAR_3, VAR_6, VAR_6);
    VAR_4[VAR_6] = '\0';
  }

  VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_4);
  FUNC_1(VAR_4);




  return VAR_5;
}
