
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_ethernet {int port; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 scalar_t__* VAR_1 ;
 struct octeon_ethernet* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 static int VAR_3;
 struct octeon_ethernet *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {

  if ((VAR_4->port == VAR_5 * 16) && VAR_1[VAR_5]) {

   if (FUNC_2
       (VAR_5, VAR_0, 10) == 0) {
    VAR_1[VAR_5] = 0;
    FUNC_0(VAR_5);
   }
  }
  if (VAR_4->port == VAR_3) {




   FUNC_1(VAR_5, VAR_4->port);




   VAR_3--;
   if (VAR_3 < 0)
    VAR_3 = 10;
  }
 }
}
