
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_dma {int dummy; } ;
struct b43_wldev {struct b43_dma dma; } ;


 scalar_t__ FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_dma*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2(struct b43_wldev *VAR_6)
{
 struct b43_dma *VAR_7;

 if (FUNC_0(VAR_6))
  return;
 VAR_7 = &VAR_6->dma;

 FUNC_1(VAR_7, VAR_0);
 FUNC_1(VAR_7, VAR_2);
 FUNC_1(VAR_7, VAR_1);
 FUNC_1(VAR_7, VAR_3);
 FUNC_1(VAR_7, VAR_4);
 FUNC_1(VAR_7, VAR_5);
}
