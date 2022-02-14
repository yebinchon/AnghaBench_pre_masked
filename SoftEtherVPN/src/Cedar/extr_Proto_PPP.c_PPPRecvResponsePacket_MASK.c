
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


typedef scalar_t__ USHORT ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {scalar_t__ Protocol; int IsControl; TYPE_1__* Lcp; } ;
struct TYPE_21__ {TYPE_17__* TubeRecv; scalar_t__ ClientLCPOptionDetermined; TYPE_3__* LastStoredPacket; } ;
struct TYPE_20__ {scalar_t__ Id; scalar_t__ Code; } ;
struct TYPE_19__ {int Event; } ;
typedef TYPE_2__ PPP_SESSION ;
typedef TYPE_3__ PPP_PACKET ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_17__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int ,scalar_t__) ;

PPP_PACKET *FUNC_16(PPP_SESSION *VAR_6, PPP_PACKET *VAR_7, USHORT VAR_8, USHORT *VAR_9, bool VAR_10,
          bool VAR_11)
{
 UINT64 VAR_12 = FUNC_14() + (UINT64)VAR_1;
 UINT64 VAR_13 = FUNC_14() + (UINT64)VAR_2;
 PPP_PACKET *VAR_14 = ((void*)0);
 USHORT VAR_15 = 0;

 if (VAR_6 == ((void*)0) || VAR_7 != ((void*)0) && VAR_7->Lcp == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_9 == ((void*)0))
 {
  VAR_9 = &VAR_15;
 }

 if (VAR_7 != ((void*)0))
 {
  VAR_8 = VAR_7->Protocol;
 }

 *VAR_9 = 0;


 while (1)
 {
  UINT64 VAR_16 = FUNC_14();
  UINT VAR_17;

  if (FUNC_2(VAR_6->TubeRecv) == 0)
  {
   return ((void*)0);
  }

  while (1)
  {
   PPP_PACKET *VAR_18;
   PPP_PACKET *VAR_19;

   if (VAR_6->LastStoredPacket != ((void*)0))
   {
    VAR_18 = VAR_6->LastStoredPacket;
    VAR_6->LastStoredPacket = ((void*)0);
   }
   else
   {
    VAR_18 = FUNC_6(VAR_6, 1);
   }

   if (VAR_18 == ((void*)0))
   {
    break;
   }

   if (VAR_7 != ((void*)0))
   {

    if (VAR_18->IsControl && VAR_18->Protocol == VAR_7->Protocol && VAR_18->Lcp->Id == VAR_7->Lcp->Id &&
     FUNC_10(VAR_18->Protocol, VAR_18->Lcp->Code))
    {
     return VAR_18;
    }

    if (VAR_11)
    {

     if (VAR_18->IsControl && VAR_18->Protocol == VAR_7->Protocol && VAR_18->Lcp->Id == VAR_7->Lcp->Id &&
      VAR_18->Protocol == VAR_4 && FUNC_12(VAR_18->Lcp->Code))
     {
      return VAR_18;
     }
    }
   }


   if ((VAR_18->IsControl && VAR_18->Protocol != VAR_8) || VAR_18->IsControl == 0)
   {
    if (FUNC_11(VAR_18->Protocol))
    {


     FUNC_8(VAR_6, VAR_18);

     *VAR_9 = VAR_18->Protocol;
     return ((void*)0);
    }
    else
    {

     FUNC_0("Unsupported Protocol: 0x%x\n", VAR_18->Protocol);
     FUNC_1(VAR_18);

     return ((void*)0);
    }
   }

   if (VAR_18->IsControl && FUNC_9(VAR_18->Protocol, VAR_18->Lcp->Code))
   {

    UINT64 VAR_20 = VAR_13 - VAR_16;


    VAR_19 = FUNC_5(VAR_6, VAR_18);


    VAR_13 = FUNC_14() + VAR_20;

    FUNC_1(VAR_18);

    if (VAR_19 == ((void*)0))
    {
     return ((void*)0);
    }
    else
    {
     bool VAR_21 = 0;
     bool VAR_22 = 0;

     if (FUNC_7(VAR_6, VAR_19) == 0)
     {
      FUNC_1(VAR_19);
      return ((void*)0);
     }

     if (VAR_19->Protocol == VAR_5 && VAR_19->IsControl &&
      VAR_19->Lcp->Code != VAR_3)
     {
      VAR_21 = 1;
     }

     if (VAR_19->Protocol == VAR_4 && VAR_19->IsControl &&
      VAR_19->Lcp->Code == VAR_0)
     {
      VAR_22 = 1;
     }

     FUNC_1(VAR_19);

     if (VAR_21)
     {

      FUNC_0("Disconnecting because PAP failed.\n");
      FUNC_13(300);
      return ((void*)0);
     }

     if (VAR_22)
     {

      FUNC_0("Disconnecting because CHAP failed.\n");
      FUNC_13(300);
      return ((void*)0);
     }
    }
   }
   else
   {

    FUNC_1(VAR_18);
   }
  }


  if (VAR_7 != ((void*)0))
  {
   if (VAR_16 >= VAR_13)
   {
    VAR_13 = VAR_16 + VAR_2;

    if (FUNC_7(VAR_6, VAR_7) == 0)
    {
     return ((void*)0);
    }
   }
  }

  if (VAR_7 == ((void*)0))
  {
   VAR_12 = VAR_16 + (UINT64)VAR_1;
  }


  if (VAR_16 >= VAR_12)
  {
   FUNC_4(VAR_6, "LP_CONTROL_TIMEOUT");
   return ((void*)0);
  }


  if (VAR_7 != ((void*)0))
  {
   VAR_17 = FUNC_3((UINT)(VAR_12 - VAR_16), (UINT)(VAR_13 - VAR_16));
  }
  else
  {
   VAR_17 = (UINT)(VAR_12 - VAR_16);
  }

  if (VAR_10 && VAR_6->ClientLCPOptionDetermined)
  {
   return ((void*)0);
  }

  FUNC_15(VAR_6->TubeRecv->Event, VAR_17);
 }
}
