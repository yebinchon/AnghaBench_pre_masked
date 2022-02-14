
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LDAPMessage ;
typedef int BerElement ;


 int FUNC_0 (char*,char*,int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (void*,int *,int *) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

char *
FUNC_6(void * VAR_0,
                           LDAPMessage * VAR_1, BerElement * VAR_2)

{
  int VAR_3;
  char * VAR_4;
  char * VAR_5;

  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);

  if(!VAR_4)
    return VAR_4;

  VAR_3 = FUNC_5(VAR_4);

  VAR_5 = FUNC_3(VAR_3 + 1);
  if(!VAR_5)
    return VAR_5;

  FUNC_0(VAR_5, VAR_4, VAR_3, VAR_3);
  VAR_5[VAR_3] = '\0';





  FUNC_4(VAR_4, VAR_5);
  FUNC_1(VAR_5);
  return VAR_4;
}
