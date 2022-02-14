
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLUcode ;
typedef int CURLUPart ;
typedef int CURLU ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,char**,unsigned int) ;
 char* FUNC_1 (unsigned int,char*,int,int ) ;
 int FUNC_2 (char*) ;

CURLUcode
FUNC_3(CURLU *VAR_4, CURLUPart VAR_5, char **VAR_6,
                   unsigned int VAR_7, unsigned int VAR_8)

{
  char *VAR_9 = (char *)((void*)0);
  CURLUcode VAR_10;

  if(!VAR_6)
    return VAR_1;

  *VAR_6 = (char *)((void*)0);
  VAR_10 = FUNC_0(VAR_4, VAR_5, &VAR_9, VAR_7);
  if(VAR_10 == VAR_2) {
    if(VAR_9) {
      *VAR_6 = FUNC_1(VAR_8, VAR_9, -1, VAR_0);
      if(!*VAR_6)
        VAR_10 = VAR_3;
    }
  }
  if(VAR_9)
    FUNC_2(VAR_9);
  return VAR_10;
}
