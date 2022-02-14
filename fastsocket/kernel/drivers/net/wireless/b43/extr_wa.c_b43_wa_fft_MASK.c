
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int ) ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_6)
{
 int VAR_7;

 if (VAR_6->phy.type == VAR_1)
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   FUNC_0(VAR_6, VAR_0, VAR_7, VAR_4[VAR_7]);
 else
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
   FUNC_0(VAR_6, VAR_0, VAR_7, VAR_5[VAR_7]);
}
