
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int connect_state; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ FUNC_0 (struct connectdata*,int,char const*,int) ;
 scalar_t__ FUNC_1 (struct connectdata*) ;
 int VAR_0 ;
 int FUNC_2 (struct connectdata*) ;
 scalar_t__ FUNC_3 (struct connectdata*,int ) ;

CURLcode FUNC_4(struct connectdata *VAR_1,
                           int VAR_2,
                           const char *VAR_3,
                           int VAR_4)
{
  CURLcode VAR_5;
  if(!VAR_1->connect_state) {
    VAR_5 = FUNC_3(VAR_1, VAR_0);
    if(VAR_5)
      return VAR_5;
  }
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

  if(VAR_5 || FUNC_1(VAR_1))
    FUNC_2(VAR_1);

  return VAR_5;
}
