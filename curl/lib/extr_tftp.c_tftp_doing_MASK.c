
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int data; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct connectdata*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (struct connectdata*,int*) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_1, bool *VAR_2)
{
  CURLcode VAR_3;
  VAR_3 = FUNC_5(VAR_1, VAR_2);

  if(*VAR_2) {
    FUNC_3(FUNC_4(VAR_1->data, "DO phase is complete\n"));
  }
  else if(!VAR_3) {



    if(FUNC_1(VAR_1))
      VAR_3 = VAR_0;
    else
      VAR_3 = FUNC_2(VAR_1->data, FUNC_0());
  }
  return VAR_3;
}
