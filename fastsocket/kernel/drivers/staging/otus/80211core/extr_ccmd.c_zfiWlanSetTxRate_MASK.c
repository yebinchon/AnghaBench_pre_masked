
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct TYPE_2__ {int txMCS; int txMT; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t *VAR_5, u16_t VAR_6)
{

 FUNC_0(VAR_5);

 if (VAR_6 <= 12) {
  VAR_2->txMCS = VAR_3[VAR_6];
  VAR_2->txMT = VAR_4[VAR_6];
  return VAR_1;
 } else if ((VAR_6 <= 28) || (VAR_6 == 13 + 32)) {
  VAR_2->txMCS = VAR_6 - 12 - 1;
  VAR_2->txMT = 2;
  return VAR_1;
 }

 return VAR_0;
}
