
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* url; } ;
typedef TYPE_1__ ConnInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,double,double) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, double VAR_2, double VAR_3, double VAR_4,
                   double VAR_5)
{
  ConnInfo *VAR_6 = (ConnInfo *)VAR_1;
  (void)VAR_4;
  (void)VAR_5;

  FUNC_0(VAR_0, "Progress: %s (%g/%g)\n", VAR_6->url, VAR_3, VAR_2);
  return 0;
}
