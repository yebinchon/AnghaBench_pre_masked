
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct de_private {int pdev; scalar_t__ de21040; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2 (struct de_private *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->de21040)
  return;

 FUNC_0(VAR_2->pdev, VAR_0, &VAR_3);
 VAR_3 |= VAR_1;
 FUNC_1(VAR_2->pdev, VAR_0, VAR_3);
}
