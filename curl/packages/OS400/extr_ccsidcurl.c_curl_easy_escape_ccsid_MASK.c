
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURL ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char*,int ) ;
 char* FUNC_1 (unsigned int,char const*,int,unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;

char *
FUNC_3(CURL *VAR_3, const char *VAR_4, int VAR_5,
                       unsigned int VAR_6, unsigned int VAR_7)

{
  char *VAR_8;
  char *VAR_9;

  if(!VAR_4) {
    VAR_2 = VAR_1;
    return (char *) ((void*)0);
    }

  VAR_8 = FUNC_1(VAR_0, VAR_4, VAR_5? VAR_5: -1, VAR_6);

  if(!VAR_8)
    return (char *) ((void*)0);

  VAR_9 = FUNC_0(VAR_3, VAR_8, 0);
  FUNC_2(VAR_8);

  if(!VAR_9)
    return (char *) ((void*)0);

  VAR_8 = FUNC_1(VAR_7, VAR_9, -1, VAR_0);
  FUNC_2(VAR_9);
  return VAR_8;
}
