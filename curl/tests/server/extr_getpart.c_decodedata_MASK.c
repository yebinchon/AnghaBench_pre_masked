
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,unsigned char**,size_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_3(char **VAR_3,
                      size_t *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  unsigned char *VAR_6 = ((void*)0);
  size_t VAR_7 = 0;

  if(!*VAR_4)
    return VAR_1;


  VAR_5 = FUNC_0(*VAR_3, &VAR_6, &VAR_7);
  if(VAR_5)
    return VAR_2;

  if(!VAR_7) {






    FUNC_1(VAR_6);

    return VAR_2;
  }


  FUNC_2(*VAR_3, VAR_6, VAR_7);
  *VAR_4 = VAR_7;
  *(*VAR_3 + VAR_7) = '\0';

  FUNC_1(VAR_6);

  return VAR_1;
}
