
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ipw_priv {scalar_t__ channel; int status; TYPE_1__* ieee; int config; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*) ;
 int FUNC_5 (struct ipw_priv*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ipw_priv *VAR_3, u8 VAR_4)
{
 if (VAR_4 == 0) {
  FUNC_1("Setting channel to ANY (0)\n");
  VAR_3->config &= ~VAR_0;
  FUNC_0("Attempting to associate with new "
    "parameters.\n");
  FUNC_4(VAR_3);
  return 0;
 }

 VAR_3->config |= VAR_0;

 if (VAR_3->channel == VAR_4) {
  FUNC_1("Request to set channel to current value (%d)\n",
          VAR_4);
  return 0;
 }

 FUNC_1("Setting channel to %i\n", (int)VAR_4);
 VAR_3->channel = VAR_4;
 FUNC_0("[re]association triggered due to channel change.\n");
 if (!FUNC_5(VAR_3))
  FUNC_4(VAR_3);

 return 0;
}
