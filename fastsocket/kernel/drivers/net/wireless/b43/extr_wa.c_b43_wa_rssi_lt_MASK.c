
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_1)
{
 int VAR_2;

 if (0 ) {
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
   FUNC_0(VAR_1, VAR_0, VAR_2, VAR_2 + 8);
  for (VAR_2 = 8; VAR_2 < 16; VAR_2++)
   FUNC_0(VAR_1, VAR_0, VAR_2, VAR_2 - 8);
 } else {
  for (VAR_2 = 0; VAR_2 < 64; VAR_2++)
   FUNC_0(VAR_1, VAR_0, VAR_2, VAR_2);
 }
}
