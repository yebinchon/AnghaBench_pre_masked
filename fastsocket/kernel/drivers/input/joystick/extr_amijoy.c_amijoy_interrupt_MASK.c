
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_4__ {int joy0dat; int joy1dat; } ;
struct TYPE_3__ {int pra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__* VAR_5 ;
 int * VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 int VAR_10, VAR_11 = 0, VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++)
  if (VAR_5[VAR_10]) {

   switch (VAR_10) {
    case 0: VAR_11 = ~VAR_4.joy0dat; VAR_12 = (~VAR_7.pra >> 6) & 1; break;
    case 1: VAR_11 = ~VAR_4.joy1dat; VAR_12 = (~VAR_7.pra >> 7) & 1; break;
   }

   FUNC_1(VAR_6[VAR_10], VAR_2, VAR_12);

   FUNC_0(VAR_6[VAR_10], VAR_0, ((VAR_11 >> 1) & 1) - ((VAR_11 >> 9) & 1));
   VAR_11 = ~(VAR_11 ^ (VAR_11 << 1));
   FUNC_0(VAR_6[VAR_10], VAR_1, ((VAR_11 >> 1) & 1) - ((VAR_11 >> 9) & 1));

   FUNC_2(VAR_6[VAR_10]);
  }
 return VAR_3;
}
