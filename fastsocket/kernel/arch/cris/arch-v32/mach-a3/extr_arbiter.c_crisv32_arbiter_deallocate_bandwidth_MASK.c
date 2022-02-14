
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nbr_clients; scalar_t__** requested_slots; scalar_t__** active_clients; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,int,scalar_t__) ;

void FUNC_1(int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;

 if (VAR_2 & 0xffff0000)
  VAR_6 = 1;

 VAR_1[VAR_6].requested_slots[VAR_3][VAR_2] = 0;
 VAR_1[VAR_6].active_clients[VAR_3][VAR_2] = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1[VAR_6].nbr_clients; VAR_4++)
  VAR_5 += VAR_1[VAR_6].requested_slots[VAR_3][VAR_4];

 FUNC_0(VAR_6, VAR_3, VAR_0 - VAR_5);
}
