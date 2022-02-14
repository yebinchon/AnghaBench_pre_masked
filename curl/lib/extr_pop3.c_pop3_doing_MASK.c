
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int data; } ;
typedef scalar_t__ CURLcode ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct connectdata*,int ) ;
 scalar_t__ FUNC_3 (struct connectdata*,int*) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_1, bool *VAR_2)
{
  CURLcode VAR_3 = FUNC_3(VAR_1, VAR_2);

  if(VAR_3)
    FUNC_0(FUNC_1(VAR_1->data, "DO phase failed\n"));
  else if(*VAR_2) {
    VAR_3 = FUNC_2(VAR_1, VAR_0 );

    FUNC_0(FUNC_1(VAR_1->data, "DO phase is complete\n"));
  }

  return VAR_3;
}
