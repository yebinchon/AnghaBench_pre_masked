
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cx231xx* priv; } ;
struct cx231xx_dvb {TYPE_1__ adapter; } ;
struct cx231xx {scalar_t__ USE_ISO; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*,int ) ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (struct cx231xx*) ;

__attribute__((used)) static int FUNC_3(struct cx231xx_dvb *VAR_1)
{
 struct cx231xx *VAR_2 = VAR_1->adapter.priv;

 if (VAR_2->USE_ISO)
  FUNC_2(VAR_2);
 else
  FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_0);

 return 0;
}
