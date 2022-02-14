
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s8 ;
struct TYPE_2__ {int nbr_clients; int** requested_slots; int ** active_clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_1(int VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 s8 VAR_17[VAR_2];

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
     VAR_17[VAR_14] = -1;

 for (VAR_15 = 0; VAR_15 < VAR_3[VAR_11].nbr_clients; VAR_15++) {
     int VAR_18;
     if (!VAR_3[VAR_11].requested_slots[VAR_12][VAR_15]) {





  if (!VAR_3[VAR_11].active_clients[VAR_12][VAR_15] ||
    VAR_13 <= 0)
   continue;

  VAR_13--;


  VAR_16 = VAR_2;
     } else
  VAR_16 = VAR_2 /
   VAR_3[VAR_11].requested_slots[VAR_12][VAR_15];

     VAR_18 = 0;
     while (VAR_18 < VAR_2) {
  if (VAR_17[VAR_18] >= 0)
     VAR_18++;
  else {
   VAR_17[VAR_18] = VAR_15;
   VAR_18 += VAR_16;
  }
     }
 }

 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {






  if (VAR_17[VAR_14] < 0) {
   int VAR_19 = VAR_15;
   while (!VAR_3[VAR_11].active_clients[VAR_12][VAR_15]) {
    VAR_15 = (VAR_15 + 1) %
     VAR_3[VAR_11].nbr_clients;
    if (VAR_15 == VAR_19)
       break;
   }
   VAR_17[VAR_14] = VAR_15;
   VAR_15 = (VAR_15 + 1) % VAR_3[VAR_11].nbr_clients;
  }
  if (VAR_11 == 0) {
   if (VAR_12 == VAR_0)
    FUNC_0(VAR_5, VAR_7,
     VAR_10, VAR_14, VAR_17[VAR_14]);
   else if (VAR_12 == VAR_1)
    FUNC_0(VAR_5, VAR_7,
     VAR_9, VAR_14, VAR_17[VAR_14]);
  } else {
   FUNC_0(VAR_4, VAR_6,
    VAR_8, VAR_14, VAR_17[VAR_14]);
  }
 }
}
