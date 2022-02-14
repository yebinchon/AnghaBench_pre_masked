
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLUcode ;
typedef int CURLUPart ;
typedef int CURLU ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,unsigned int) ;
 char* FUNC_1 (int ,char const*,int,unsigned int) ;
 int FUNC_2 (char*) ;

CURLUcode
FUNC_3(CURLU *VAR_2, CURLUPart VAR_3, const char *VAR_4,
                   unsigned int VAR_5, unsigned int VAR_6)

{
  char *VAR_7 = (char *)((void*)0);
  CURLUcode VAR_8;

  if(VAR_4) {
    VAR_7 = FUNC_1(VAR_0, VAR_4, -1, VAR_6);
    if(!VAR_7)
      return VAR_1;
  }
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_7, VAR_5);
  if(VAR_7)
    FUNC_2(VAR_7);
  return VAR_8;
}
