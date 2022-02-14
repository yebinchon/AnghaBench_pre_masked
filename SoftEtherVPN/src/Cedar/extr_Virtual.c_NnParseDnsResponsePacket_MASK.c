
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int h ;
typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_14__ {int Size; int Buf; } ;
struct TYPE_13__ {int AnswerRRs; int NumQuery; } ;
struct TYPE_12__ {int addr; } ;
typedef TYPE_1__ IP ;
typedef TYPE_2__ DNSV4_HEADER ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int *,scalar_t__) ;
 TYPE_3__* FUNC_4 (TYPE_3__*,int,int*,int*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;

bool FUNC_7(UCHAR *VAR_0, UINT VAR_1, IP *VAR_2)
{
 BUF *VAR_3 = FUNC_3(VAR_0, VAR_1);
 bool VAR_4 = 0;
 DNSV4_HEADER VAR_5;

 if (FUNC_5(VAR_3, &VAR_5, sizeof(VAR_5)) == sizeof(VAR_5))
 {
  UINT VAR_6 = FUNC_1(VAR_5.NumQuery);
  UINT VAR_7 = FUNC_1(VAR_5.AnswerRRs);
  UINT VAR_8;

  for (VAR_8 = 0;VAR_8 < VAR_6;VAR_8++)
  {
   BUF *VAR_9 = FUNC_4(VAR_3, 0, ((void*)0), ((void*)0));

   if (VAR_9 != ((void*)0))
   {
    FUNC_2(VAR_9);
   }
   else
   {
    goto LABEL_CLEANUP;
   }
  }

  for (VAR_8 = 0;VAR_8 < VAR_7;VAR_8++)
  {
   USHORT VAR_10, VAR_11;
   BUF *VAR_12 = FUNC_4(VAR_3, 1, &VAR_10, &VAR_11);

   if (VAR_12 != ((void*)0))
   {
    if (VAR_10 == 0x0001 && VAR_11 == 0x0001 && VAR_12->Size == 4)
    {
     VAR_4 = 1;

     if (VAR_2 != ((void*)0))
     {
      FUNC_6(VAR_2, sizeof(IP));

      FUNC_0(VAR_2->addr, VAR_12->Buf, 4);
     }
    }

    FUNC_2(VAR_12);
   }
   else
   {
    goto LABEL_CLEANUP;
   }
  }
 }

LABEL_CLEANUP:
 FUNC_2(VAR_3);

 return VAR_4;
}
