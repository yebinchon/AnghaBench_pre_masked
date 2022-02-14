
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ipw_priv {TYPE_1__* net_dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ipw_priv*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct ipw_priv *VAR_2, u8 * VAR_3)
{
 if (!VAR_2 || !VAR_3) {
  FUNC_1("Invalid args\n");
  return -1;
 }

 FUNC_0("%s: Setting MAC to %pM\n",
         VAR_2->net_dev->name, VAR_3);

 return FUNC_2(VAR_2, VAR_1, VAR_0, VAR_3);
}
