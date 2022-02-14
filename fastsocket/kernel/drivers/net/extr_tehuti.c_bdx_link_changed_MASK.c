
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct bdx_priv {TYPE_1__* ndev; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bdx_priv*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct bdx_priv *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2, VAR_1) & VAR_0;

 if (!VAR_3) {
  if (FUNC_3(VAR_2->ndev)) {
   FUNC_5(VAR_2->ndev);
   FUNC_2(VAR_2->ndev);
   FUNC_0("%s: Link Down\n", VAR_2->ndev->name);
  }
 } else {
  if (!FUNC_3(VAR_2->ndev)) {
   FUNC_6(VAR_2->ndev);
   FUNC_4(VAR_2->ndev);
   FUNC_0("%s: Link Up\n", VAR_2->ndev->name);
  }
 }
}
