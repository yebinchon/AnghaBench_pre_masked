
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,struct addrinfo const*,struct addrinfo**) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;

int
FUNC_5(const char * VAR_1, const char * VAR_2,
            const struct addrinfo * VAR_3,
            struct addrinfo * * VAR_4)

{
  char * VAR_5;
  char * VAR_6;
  int VAR_7;
  int VAR_8;

  VAR_5 = (char *) ((void*)0);
  VAR_6 = (char *) ((void*)0);

  if(VAR_1) {
    VAR_8 = FUNC_4(VAR_1);

    VAR_5 = FUNC_3(VAR_8 + 1);
    if(!VAR_5)
      return VAR_0;

    VAR_8 = FUNC_0(VAR_5, VAR_1, VAR_8, VAR_8);
    VAR_5[VAR_8] = '\0';
  }

  if(VAR_2) {
    VAR_8 = FUNC_4(VAR_2);

    VAR_6 = FUNC_3(VAR_8 + 1);
    if(!VAR_6) {
      FUNC_1(VAR_5);
      return VAR_0;
    }

    FUNC_0(VAR_6, VAR_2, VAR_8, VAR_8);
    VAR_6[VAR_8] = '\0';
  }

  VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_3, VAR_4);
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  return VAR_7;
}
