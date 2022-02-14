
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int my_pcname ;
struct TYPE_12__ {int HostIP; } ;
typedef TYPE_1__ VH ;
typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_13__ {int Size; int Buf; } ;
typedef int LIST ;
typedef int IP ;
typedef TYPE_2__ BUF ;


 scalar_t__ FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,scalar_t__) ;
 scalar_t__ FUNC_14 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_15 () ;
 TYPE_2__* FUNC_16 (void*,scalar_t__) ;
 int FUNC_17 (TYPE_2__*,int*,int) ;
 int FUNC_18 (TYPE_1__*,scalar_t__,scalar_t__,int ,scalar_t__,int ,int) ;
 unsigned long long FUNC_19 () ;
 int VAR_1 ;
 int FUNC_20 (TYPE_2__*,...) ;
 int FUNC_21 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_22 (char*,int) ;

bool FUNC_23(VH *VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, void *VAR_7, UINT VAR_8)
{
 BUF *VAR_9;
 USHORT VAR_10;
 USHORT VAR_11;
 USHORT VAR_12;
 USHORT VAR_13, VAR_14, VAR_15;
 UCHAR VAR_16;
 UCHAR VAR_17[32];
 UCHAR VAR_18;
 USHORT VAR_19, VAR_20;
 UCHAR VAR_21[32];
 bool VAR_22 = 0;

 if (VAR_2 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return 0;
 }

 VAR_9 = FUNC_16(VAR_7, VAR_8);

 FUNC_17(VAR_9, &VAR_10, sizeof(USHORT));

 FUNC_17(VAR_9, &VAR_11, sizeof(USHORT));
 VAR_11 = FUNC_2(VAR_11);

 FUNC_17(VAR_9, &VAR_12, sizeof(USHORT));
 VAR_12 = FUNC_2(VAR_12);

 FUNC_17(VAR_9, &VAR_13, sizeof(USHORT));
 FUNC_17(VAR_9, &VAR_14, sizeof(USHORT));
 FUNC_17(VAR_9, &VAR_15, sizeof(USHORT));

 FUNC_17(VAR_9, &VAR_16, 1);

 FUNC_17(VAR_9, VAR_17, 32);

 FUNC_17(VAR_9, &VAR_18, 1);

 FUNC_17(VAR_9, &VAR_19, sizeof(USHORT));
 VAR_19 = FUNC_2(VAR_19);

 if (FUNC_17(VAR_9, &VAR_20, sizeof(USHORT)) == sizeof(USHORT))
 {
  VAR_20 = FUNC_2(VAR_20);

  if (((VAR_11 >> 11) & 0x0F) == 0 &&
   VAR_12 == 1 && VAR_16 == 0x20 &&
   VAR_13 == 0 && VAR_14 == 0 && VAR_15 == 0 && VAR_18 == 0 && VAR_19 == 0x0020 && VAR_20 == 0x0001)
  {
   char VAR_23[VAR_0];


   FUNC_22(VAR_23, sizeof(VAR_23));
   FUNC_7(VAR_23, sizeof(VAR_23));

   FUNC_1(VAR_21, VAR_23);

   if (FUNC_0(VAR_21, VAR_17, 30) == 0)
   {

    BUF *VAR_24 = FUNC_15();
    USHORT VAR_25;
    UINT VAR_26;
    LIST *VAR_27;
    BUF *VAR_28;
    bool VAR_29 = 0;

    FUNC_20(VAR_24, &VAR_10, sizeof(USHORT));

    VAR_11 = FUNC_2(0x8500);
    FUNC_20(VAR_24, &VAR_11, sizeof(USHORT));

    VAR_12 = 0;
    FUNC_20(VAR_24, &VAR_12, sizeof(USHORT));

    VAR_25 = FUNC_2(1);
    FUNC_20(VAR_24, &VAR_25, sizeof(USHORT));

    VAR_25 = 0;
    FUNC_20(VAR_24, &VAR_25, sizeof(USHORT));
    FUNC_20(VAR_24, &VAR_25, sizeof(USHORT));

    VAR_16 = 0x20;
    FUNC_20(VAR_24, &VAR_16, 1);

    FUNC_20(VAR_24, VAR_17, 32);

    VAR_18 = 0;
    FUNC_20(VAR_24, &VAR_18, 1);

    VAR_19 = FUNC_2(VAR_19);
    VAR_20 = FUNC_2(VAR_20);

    FUNC_20(VAR_24, &VAR_19, sizeof(USHORT));
    FUNC_20(VAR_24, &VAR_20, sizeof(USHORT));

    VAR_26 = FUNC_3((UINT)(FUNC_19() / 1000ULL));
    FUNC_20(VAR_24, &VAR_26, sizeof(UINT));

    VAR_28 = FUNC_15();

    VAR_27 = FUNC_6();
    if (VAR_27 != ((void*)0))
    {
     UINT VAR_30;


     for (VAR_30 = 0;VAR_30 < FUNC_14(VAR_27);VAR_30++)
     {
      IP *VAR_31 = FUNC_13(VAR_27, VAR_30);

      if (FUNC_9(VAR_31) && FUNC_11(VAR_31) == 0 && FUNC_12(VAR_31) == 0)
      {
       if (FUNC_10(VAR_31))
       {
        USHORT VAR_32 = FUNC_2(0x4000);
        UINT VAR_33 = FUNC_8(VAR_31);

        FUNC_20(VAR_28, &VAR_32, sizeof(USHORT));
        FUNC_20(VAR_28, &VAR_33, sizeof(UINT));

        VAR_29 = 1;
       }
      }
     }

     if (VAR_29 == 0)
     {

      for (VAR_30 = 0;VAR_30 < FUNC_14(VAR_27);VAR_30++)
      {
       IP *VAR_34 = FUNC_13(VAR_27, VAR_30);

       if (FUNC_9(VAR_34) && FUNC_11(VAR_34) == 0 && FUNC_12(VAR_34) == 0)
       {
        USHORT VAR_35 = FUNC_2(0x4000);
        UINT VAR_36 = FUNC_8(VAR_34);

        FUNC_20(VAR_28, &VAR_35, sizeof(USHORT));
        FUNC_20(VAR_28, &VAR_36, sizeof(UINT));

        VAR_29 = 1;
       }
      }
     }

     FUNC_5(VAR_27);
    }

    VAR_25 = FUNC_2(VAR_28->Size);
    FUNC_20(VAR_24, &VAR_25, sizeof(USHORT));

    FUNC_21(VAR_24, VAR_28);

    FUNC_18(VAR_2, VAR_3, VAR_4, VAR_2->HostIP, VAR_6, VAR_24->Buf, VAR_24->Size);

    FUNC_4(VAR_28);

    FUNC_4(VAR_24);

    VAR_1;
   }
  }
 }

 FUNC_4(VAR_9);

 return VAR_22;
}
