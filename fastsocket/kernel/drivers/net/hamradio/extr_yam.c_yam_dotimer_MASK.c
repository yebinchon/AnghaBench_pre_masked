
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device** VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct net_device *VAR_7 = VAR_3[VAR_6];
  if (VAR_7 && FUNC_1(VAR_7))
   FUNC_2(VAR_7);
 }
 VAR_4.expires = VAR_2 + VAR_0 / 100;
 FUNC_0(&VAR_4);
}
