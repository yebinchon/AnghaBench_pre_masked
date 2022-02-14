
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct connectdata*,char*) ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_1)
{

  CURLcode VAR_2 = FUNC_0(VAR_1, "LOGOUT");

  if(!VAR_2)
    FUNC_1(VAR_1, VAR_0);

  return VAR_2;
}
