
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct connectdata*) ;
 scalar_t__ FUNC_1 (struct connectdata*) ;
 scalar_t__ FUNC_2 (struct connectdata*,int*) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_2, bool *VAR_3)
{
  CURLcode VAR_4 = VAR_0;

  *VAR_3 = VAR_1;


  VAR_4 = FUNC_1(VAR_2);
  if(VAR_4)
    return VAR_4;


  VAR_4 = FUNC_0(VAR_2);
  if(VAR_4)
    return VAR_4;

  VAR_4 = FUNC_2(VAR_2, VAR_3);

  return VAR_4;
}
