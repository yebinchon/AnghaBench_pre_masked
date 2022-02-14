
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ LastTick; scalar_t__ TickStart; scalar_t__ Tick; scalar_t__ Tick64WithTime64; scalar_t__ Time64; scalar_t__ Halt; int AdjustTime; int TickLock; scalar_t__ RoundCount; } ;
struct TYPE_8__ {scalar_t__ Time; scalar_t__ Tick; } ;
typedef int THREAD ;
typedef TYPE_1__ ADJUST_TIME ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__) ;
 void* FUNC_12 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,scalar_t__) ;
 scalar_t__ FUNC_18 () ;
 TYPE_1__* FUNC_19 (int) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

void FUNC_20(THREAD *VAR_5, void *VAR_6)
{
 UINT VAR_7 = 0;
 bool VAR_8 = 0;
 bool VAR_9 = 1;
 UINT VAR_10;

 if (VAR_5 == ((void*)0))
 {
  return;
 }
 FUNC_14();

 VAR_10 = VAR_1;



 while (1)
 {
  UINT VAR_11;
  UINT64 VAR_12;


  VAR_11 = FUNC_13();

  if (VAR_4->LastTick > VAR_11)
  {
   if ((VAR_4->LastTick - VAR_11) >= (UINT64)0x0fffffff)
   {

    VAR_4->RoundCount++;
   }
   else
   {


    VAR_11 = VAR_4->LastTick;
   }
  }
  VAR_4->LastTick = VAR_11;

  VAR_12 = (UINT64)VAR_4->RoundCount * (UINT64)4294967296LL + (UINT64)VAR_11;

  FUNC_7(VAR_4->TickLock);
  {
   if (VAR_4->TickStart == 0)
   {
    VAR_4->TickStart = VAR_12;
   }
   VAR_12 = VAR_4->Tick = VAR_12 - VAR_4->TickStart + (UINT64)1;
  }
  FUNC_15(VAR_4->TickLock);





  if (VAR_9)
  {
   ADJUST_TIME *VAR_13 = FUNC_19(sizeof(ADJUST_TIME));
   VAR_13->Tick = VAR_12;
   VAR_13->Time = FUNC_12();
   VAR_4->Tick64WithTime64 = VAR_12;
   VAR_4->Time64 = VAR_13->Time;
   FUNC_0(VAR_4->AdjustTime, VAR_13);


   FUNC_10(VAR_5);
   VAR_9 = 0;
  }


  VAR_7 += VAR_10;
  if (VAR_7 >= 1000 || VAR_8 == 0)
  {
   UINT64 VAR_14 = FUNC_12();

   if (VAR_14 < VAR_4->Time64 ||
    FUNC_3((VAR_14 - VAR_4->Time64) + VAR_4->Tick64WithTime64, VAR_12) >= VAR_10)
   {
    ADJUST_TIME *VAR_15 = FUNC_19(sizeof(ADJUST_TIME));
    FUNC_8(VAR_4->AdjustTime);
    {
     VAR_15->Tick = VAR_12;
     VAR_15->Time = VAR_14;
     FUNC_0(VAR_4->AdjustTime, VAR_15);
     FUNC_1("Adjust Time: Tick = %I64u, Time = %I64u\n",
      VAR_15->Tick, VAR_15->Time);


     if (FUNC_6(VAR_4->AdjustTime) > VAR_0)
     {

      ADJUST_TIME *VAR_16 = FUNC_5(VAR_4->AdjustTime, 1);

      FUNC_2(VAR_4->AdjustTime, VAR_16);

      FUNC_1("NUM_ADJUST TIME: %u\n", FUNC_6(VAR_4->AdjustTime));

      FUNC_4(VAR_16);
     }
    }
    FUNC_16(VAR_4->AdjustTime);
    VAR_4->Time64 = VAR_14;
    VAR_4->Tick64WithTime64 = VAR_12;
   }
   VAR_8 = 1;
   VAR_7 = 0;
  }

  if (VAR_4->Halt)
  {
   break;
  }




  FUNC_11(VAR_10);

 }
}
