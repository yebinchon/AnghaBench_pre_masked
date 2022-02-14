
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bdx_priv {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bdx_priv*) ;
 int FUNC_2 (struct bdx_priv*) ;

__attribute__((used)) static int FUNC_3(struct bdx_priv *VAR_1)
{
 VAR_0;
 FUNC_0((VAR_1->pdev->device == 0x3009)
     ? FUNC_1(VAR_1)
     : FUNC_2(VAR_1));
}
