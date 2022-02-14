
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int url; } ;
typedef TYPE_1__ ConnInfo ;


 int FUNC_0 (char*,int ,double,double) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, double VAR_1, double VAR_2, double VAR_3,
                   double VAR_4)
{
  ConnInfo *VAR_5 = (ConnInfo *)VAR_0;
  FUNC_0("Progress: %s (%g/%g)\n", VAR_5->url, VAR_2, VAR_1);
  return 0;
}
