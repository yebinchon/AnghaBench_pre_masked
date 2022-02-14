
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nbr_clients; int** requested_slots; int** active_clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int,int,unsigned long) ;
 int FUNC_1 () ;
 unsigned long* VAR_4 ;

int FUNC_2(int VAR_5, int VAR_6,
          unsigned long VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12 = 0;

 FUNC_1();

 if (VAR_5 & 0xffff0000) {
  VAR_12 = 1;
  VAR_5 >>= 16;
 }

 for (VAR_8 = 0; VAR_8 < VAR_3[VAR_12].nbr_clients; VAR_8++) {
  VAR_9 += VAR_3[VAR_12].requested_slots[VAR_6][VAR_8];
  VAR_10 += VAR_3[VAR_12].active_clients[VAR_6][VAR_8];
 }


 VAR_11 = VAR_7 == 0
  ? 0 : VAR_2 / (VAR_4[VAR_6] / VAR_7);
 if (VAR_9 + VAR_11 > VAR_2)
    return -VAR_0;

 VAR_3[VAR_12].active_clients[VAR_6][VAR_5] = 1;
 VAR_3[VAR_12].requested_slots[VAR_6][VAR_5] = VAR_11;
 FUNC_0(VAR_12, VAR_6, VAR_2 - VAR_9);


 if (VAR_12 == 0)
  FUNC_2(8 << 16,
   VAR_1, VAR_7);
 return 0;
}
