
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int) ;
 scalar_t__ FUNC_1 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_2)
{
 int VAR_3, VAR_4;

 if (FUNC_1(VAR_2))
  VAR_4 = VAR_0 + VAR_1;
 else
  VAR_4 = VAR_0 * 2 + VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_0(VAR_2, VAR_3);
}
