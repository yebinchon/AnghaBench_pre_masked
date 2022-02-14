
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct connectdata*,char*,char const*,...) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_1,
                                          const char *VAR_2,
                                          const char *VAR_3)
{
  CURLcode VAR_4 = VAR_0;

  if(VAR_3) {

    VAR_4 = FUNC_0(VAR_1, "AUTHENTICATE %s %s", VAR_2, VAR_3);
  }
  else {

    VAR_4 = FUNC_0(VAR_1, "AUTHENTICATE %s", VAR_2);
  }

  return VAR_4;
}
