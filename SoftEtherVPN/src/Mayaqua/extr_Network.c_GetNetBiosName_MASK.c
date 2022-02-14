
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int req ;
typedef int buf ;
typedef scalar_t__ USHORT ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int* Query; void* NumQuestions; void* TransactionId; } ;
struct TYPE_5__ {int TransactionId; scalar_t__ Flags; scalar_t__ NumQuestions; int AnswerRRs; int* Response; } ;
typedef int SOCKSET ;
typedef int SOCK ;
typedef TYPE_1__ NBTRESPONSE ;
typedef TYPE_2__ NBTREQUEST ;
typedef int IP ;


 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,int *,int*,int *,int) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (int *,int,int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *,int,TYPE_2__*,int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (char*,int) ;
 int FUNC_13 (char*,int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_2__*,int) ;

bool FUNC_17(char *VAR_3, UINT VAR_4, IP *VAR_5)
{
 SOCK *VAR_6;
 UINT VAR_7, VAR_8;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 NBTREQUEST VAR_11;
 UCHAR VAR_12[1024];
 USHORT VAR_13[VAR_0];
 UINT64 VAR_14;

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_3, VAR_4, VAR_5);

 for (VAR_7 = 0;VAR_7 < VAR_0;VAR_7++)
 {
  VAR_13[VAR_7] = FUNC_6();
 }

 VAR_6 = FUNC_5(0);
 if (VAR_6 == ((void*)0))
 {
  return 0;
 }

 for (VAR_8 = 0;VAR_8 < VAR_0;VAR_8++)
 {
  FUNC_16(&VAR_11, sizeof(VAR_11));
  VAR_11.TransactionId = FUNC_1(VAR_13[VAR_8]);
  VAR_11.NumQuestions = FUNC_1(1);
  VAR_11.Query[0] = 0x20;
  VAR_11.Query[1] = 0x43;
  VAR_11.Query[2] = 0x4b;
  for (VAR_7 = 3;VAR_7 <= 32;VAR_7++)
  {
   VAR_11.Query[VAR_7] = 0x41;
  }
  VAR_11.Query[35] = 0x21;
  VAR_11.Query[37] = 0x01;

  if (FUNC_10(VAR_6, VAR_5, 137, &VAR_11, sizeof(VAR_11)) == 0)
  {
   FUNC_8(VAR_6);
   return 0;
  }
 }

 VAR_14 = FUNC_14() + (UINT64)VAR_2;

 while (1)
 {
  UINT VAR_15;
  IP VAR_16;
  UINT VAR_17;
  SOCKSET VAR_18;
  if (FUNC_14() >= VAR_14)
  {
   break;
  }
  FUNC_3(&VAR_18);
  FUNC_0(&VAR_18, VAR_6);
  FUNC_9(&VAR_18, 100, ((void*)0), ((void*)0));

  if (VAR_9 == 0)
  {
   VAR_9 = 1;
  }
  else
  {
   FUNC_11(10);
  }

  VAR_15 = FUNC_7(VAR_6, &VAR_16, &VAR_17, VAR_12, sizeof(VAR_12));

  if (VAR_15 == VAR_1)
  {
   continue;
  }
  else if (VAR_15 == 0)
  {
   break;
  }
  else
  {
   if (VAR_15 >= sizeof(NBTRESPONSE))
   {
    NBTRESPONSE *VAR_19 = (NBTRESPONSE *)VAR_12;
    bool VAR_20 = 0;
    UINT VAR_21;
    USHORT VAR_22 = FUNC_1(VAR_19->TransactionId);
    for (VAR_21 = 0;VAR_21 < VAR_0;VAR_21++)
    {
     if (VAR_22 == VAR_13[VAR_21])
     {
      VAR_20 = 1;
      break;
     }
    }
    if (VAR_20)
    {
     if (VAR_19->Flags != 0 && VAR_19->NumQuestions == 0 && VAR_19->AnswerRRs >= 1)
     {
      if (VAR_19->Response[0] == 0x20 && VAR_19->Response[1] == 0x43 &&
       VAR_19->Response[2] == 0x4b)
      {
       if (VAR_19->Response[34] == 0x00 && VAR_19->Response[35] == 0x21 &&
        VAR_19->Response[36] == 0x00 && VAR_19->Response[37] == 0x01)
       {
        char *VAR_23 = (char *)(&VAR_19->Response[45]);
        if (FUNC_12(VAR_23, 15))
        {
         if (FUNC_4(VAR_23) == 0)
         {
          FUNC_13(VAR_3, VAR_4, VAR_23);
          FUNC_15(VAR_3);
          VAR_10 = 1;
         }
         else
         {
          VAR_10 = 0;
          break;
         }
        }
       }
      }
     }
    }
   }
  }
 }

 FUNC_8(VAR_6);
 return VAR_10;
}
