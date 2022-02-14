
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SASL {unsigned int prefmech; scalar_t__ resetprefs; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (char const*,size_t,size_t*) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (char const*,char*,size_t) ;

CURLcode FUNC_2(struct SASL *VAR_5,
                                         const char *VAR_6, size_t VAR_7)
{
  CURLcode VAR_8 = VAR_0;
  size_t VAR_9;

  if(!VAR_7)
    return VAR_1;

  if(VAR_5->resetprefs) {
    VAR_5->resetprefs = VAR_2;
    VAR_5->prefmech = VAR_4;
  }

  if(!FUNC_1(VAR_6, "*", VAR_7))
    VAR_5->prefmech = VAR_3;
  else {
    unsigned int VAR_10 = FUNC_0(VAR_6, VAR_7, &VAR_9);
    if(VAR_10 && VAR_9 == VAR_7)
      VAR_5->prefmech |= VAR_10;
    else
      VAR_8 = VAR_1;
  }

  return VAR_8;
}
