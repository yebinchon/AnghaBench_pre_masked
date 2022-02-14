
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLMcode ;


 int VAR_0 ;
 char* FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int,unsigned int,char const*,int,int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;

const char *
FUNC_4(CURLMcode VAR_3, unsigned int VAR_4)

{
  int VAR_5;
  const char *VAR_6;
  char *VAR_7;

  VAR_6 = FUNC_2(VAR_3);

  if(!VAR_6)
    return VAR_6;

  VAR_5 = VAR_2 * (FUNC_3(VAR_6) + 1);

  VAR_7 = FUNC_0(VAR_1, VAR_5);
  if(!VAR_7)
    return (const char *) ((void*)0);

  if(FUNC_1(VAR_7, VAR_5, VAR_4, VAR_6, -1, VAR_0) < 0)
    return (const char *) ((void*)0);

  return (const char *) VAR_7;
}
