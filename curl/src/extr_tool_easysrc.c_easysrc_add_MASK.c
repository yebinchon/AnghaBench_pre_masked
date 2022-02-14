
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slist_wc {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct slist_wc* FUNC_1 (struct slist_wc*,char const*) ;

CURLcode FUNC_2(struct slist_wc **VAR_2, const char *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct slist_wc *VAR_5 = FUNC_1(*VAR_2, VAR_3);
  if(!VAR_5) {
    FUNC_0();
    VAR_4 = VAR_1;
  }
  else
    *VAR_2 = VAR_5;
  return VAR_4;
}
