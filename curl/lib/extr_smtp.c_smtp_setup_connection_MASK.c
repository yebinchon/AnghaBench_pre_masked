
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int tls_upgraded; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_2)
{
  CURLcode VAR_3;


  VAR_2->tls_upgraded = VAR_1;


  VAR_3 = FUNC_0(VAR_2);
  if(VAR_3)
    return VAR_3;

  return VAR_0;
}
