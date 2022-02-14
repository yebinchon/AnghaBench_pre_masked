
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dfq_valid; int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_2)
{
 if (FUNC_0(VAR_2->wl, VAR_1)) {

 } else {
  if (1 )
   FUNC_1(VAR_2, 0);
 }
 if (FUNC_0(VAR_2->wl, VAR_0))
  VAR_2->dfq_valid = 1;
}
