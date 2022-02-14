
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int Word_t ;
struct TYPE_8__ {unsigned int numPorts; } ;
struct TYPE_7__ {scalar_t__ BusType; unsigned int* AiopIntrBits; } ;
typedef TYPE_1__ CONTROLLER_t ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__* VAR_4 ;
 TYPE_6__* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 TYPE_1__* FUNC_5 (int) ;
 unsigned char FUNC_6 (TYPE_1__*,int) ;
 unsigned int FUNC_7 (TYPE_1__*) ;
 unsigned int FUNC_8 (TYPE_1__*) ;
 unsigned int* VAR_9 ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_10)
{
 CONTROLLER_t *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17;
 unsigned int VAR_18;
 unsigned char VAR_19;
 Word_t VAR_20;


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_4[VAR_12] <= 0)
   continue;


  VAR_11 = FUNC_5(VAR_12);







   VAR_18 = FUNC_7(VAR_11);


  for (VAR_13 = 0; VAR_18; VAR_13++) {
   VAR_20 = VAR_11->AiopIntrBits[VAR_13];
   if (VAR_18 & VAR_20) {
    VAR_18 &= ~VAR_20;
    VAR_19 = FUNC_6(VAR_11, VAR_13);


    for (VAR_14 = 0; VAR_19; VAR_19 >>= 1, VAR_14++) {
     if (VAR_19 & 1) {



      VAR_15 = FUNC_0(VAR_12, VAR_13, VAR_14);
      FUNC_4(VAR_8[VAR_15]);
     }
    }
   }
  }

  VAR_16 = VAR_9[VAR_12];







  if (VAR_16) {
   for (VAR_17 = 0; VAR_17 < VAR_5[VAR_12].numPorts; VAR_17++) {
    if (VAR_16 & (1 << VAR_17)) {
     VAR_13 = (VAR_17 & 0x18) >> 3;
     VAR_14 = VAR_17 & 0x07;
     VAR_15 = FUNC_0(VAR_12, VAR_13, VAR_14);
     FUNC_3(VAR_8[VAR_15]);
    }
   }
  }
 }




 if (FUNC_1(&VAR_7))
  FUNC_2(&VAR_6, VAR_2 + VAR_0);
}
