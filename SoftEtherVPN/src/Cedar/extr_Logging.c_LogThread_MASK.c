
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int current_logfile_datename ;
typedef int current_file_name ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ num_item; } ;
struct TYPE_6__ {int Event; TYPE_2__* RecordQueue; scalar_t__ Halt; } ;
typedef int THREAD ;
typedef TYPE_1__ LOG ;
typedef int IO ;
typedef int BUF ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int *,int **,int*,char*,char*) ;
 int FUNC_5 (TYPE_1__*,int *,int *) ;
 int VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (char*,int) ;
 scalar_t__ VAR_1 ;

void FUNC_14(THREAD *VAR_2, void *VAR_3)
{
 LOG *VAR_4;
 IO *VAR_5;
 BUF *VAR_6;
 bool VAR_7 = 0;
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];
 bool VAR_10 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_13(VAR_8, sizeof(VAR_8));
 FUNC_13(VAR_9, sizeof(VAR_9));

 VAR_4 = (LOG *)VAR_3;

 VAR_5 = VAR_1 ? FUNC_2() : ((void*)0);
 VAR_6 = FUNC_8();
 FUNC_9(VAR_2);

 while (1)
 {
  UINT64 VAR_11 = FUNC_10();

  while (1)
  {
   if (VAR_1)
   {
    if (! FUNC_5(VAR_4, VAR_6, VAR_5))
    {
     break;
    }
   }
   else
   {
    if (! FUNC_4(VAR_4, VAR_6, &VAR_5, &VAR_10, VAR_9, VAR_8))
    {
     break;
    }
   }
  }

  if (VAR_4->Halt)
  {


   UINT VAR_12;

   if (VAR_7 == 0)
   {



    VAR_7 = 1;
   }

   FUNC_3(VAR_4->RecordQueue);
   {
    VAR_12 = VAR_4->RecordQueue->num_item;
   }
   FUNC_11(VAR_4->RecordQueue);

   if (VAR_12 == 0 || VAR_5 == ((void*)0))
   {
    break;
   }
  }
  else
  {
   FUNC_12(VAR_4->Event, 9821);
  }
 }

 if (VAR_5 != ((void*)0) && !VAR_1)
 {
  FUNC_0(VAR_5, 1);
 }

 FUNC_1(VAR_6);
}
