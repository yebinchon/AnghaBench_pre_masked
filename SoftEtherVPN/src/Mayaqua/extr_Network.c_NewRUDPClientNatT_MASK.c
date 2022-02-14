
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int result_ip_str ;
typedef int ip_str ;
typedef int hostname ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_19__ {int Size; int Buf; } ;
struct TYPE_18__ {int IgnoreRecvErr; int IPv6; } ;
typedef int SOCK_EVENT ;
typedef TYPE_1__ SOCK ;
typedef int PACK ;
typedef int IP ;
typedef int INTERRUPT_MANAGER ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ,int*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_10 (char*,int,int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_18 (scalar_t__,int) ;
 int * FUNC_19 (scalar_t__) ;
 TYPE_2__* FUNC_20 () ;
 int * FUNC_21 () ;
 int * FUNC_22 () ;
 TYPE_1__* FUNC_23 (char*,int *,scalar_t__,scalar_t__*,scalar_t__,int*,TYPE_1__*,int *,int ,int) ;
 int * FUNC_24 () ;
 TYPE_1__* FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,char*,int ) ;
 int FUNC_27 (int *,char*,scalar_t__) ;
 int FUNC_28 (int *,char*,char*) ;
 scalar_t__ FUNC_29 (int *,char*,char*) ;
 int FUNC_30 (int *,char*) ;
 scalar_t__ FUNC_31 (int *,char*) ;
 scalar_t__ FUNC_32 (int *,char*) ;
 int FUNC_33 (int *,char*,char*,int) ;
 TYPE_2__* FUNC_34 (int *) ;
 scalar_t__ FUNC_35 (int,scalar_t__) ;
 int FUNC_36 (char*,int,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_37 () ;
 scalar_t__ FUNC_38 (TYPE_1__*,int *,scalar_t__*,int *,scalar_t__) ;
 int FUNC_39 (TYPE_1__*) ;
 int FUNC_40 (int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_41 (TYPE_2__*,int ,int ) ;
 int FUNC_42 (TYPE_1__*,int *,scalar_t__,int ,int ) ;
 int FUNC_43 (int *,char*) ;
 scalar_t__ FUNC_44 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_45 (int *,scalar_t__) ;
 int FUNC_46 (TYPE_2__*,int *,scalar_t__) ;

SOCK *FUNC_47(char *VAR_15, IP *VAR_16, UINT *VAR_17, UINT VAR_18, bool *VAR_19, char *VAR_20, char *VAR_21)
{
 IP VAR_22;
 UINT VAR_23 = 0;
 UINT64 VAR_24;
 bool VAR_25 = 0;
 SOCK_EVENT *VAR_26;
 SOCK *VAR_27;
 bool VAR_28 = 0;
 char VAR_29[VAR_2];



 if (VAR_18 == 0)
 {
  VAR_18 = VAR_10;
 }
 if (VAR_17 == ((void*)0))
 {
  VAR_17 = &VAR_23;
 }
 if (VAR_19 == ((void*)0))
 {
  VAR_19 = &VAR_25;
 }
 *VAR_17 = VAR_8;
 if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_16();

 VAR_24 = FUNC_44() + (UINT64)VAR_18;


 FUNC_36(VAR_29, sizeof(VAR_29), VAR_16);
 if (FUNC_8(&VAR_22, VAR_29, 0, VAR_19) == 0)
 {
  *VAR_17 = VAR_4;
  return ((void*)0);
 }

 if (FUNC_44() >= VAR_24)
 {
  *VAR_17 = VAR_7;
  return ((void*)0);
 }
 if (*VAR_19)
 {
  *VAR_17 = VAR_9;
  return ((void*)0);
 }

 VAR_27 = FUNC_25(&VAR_22, 0);
 if (VAR_27 == ((void*)0))
 {
  *VAR_17 = VAR_8;
  return ((void*)0);
 }
 else
 {
  UINT64 VAR_30 = 0;
  INTERRUPT_MANAGER *VAR_31 = FUNC_21();
  UINT64 VAR_32 = FUNC_37();
  UINT VAR_33 = 65536;
  UCHAR *VAR_34 = FUNC_19(VAR_33);
  char VAR_35[VAR_2];
  IP VAR_36;
  UINT VAR_37;
  SOCK *VAR_38 = ((void*)0);
  UINT VAR_39 = 0;
  UINT64 VAR_40 = 0;

  FUNC_0(VAR_31, VAR_24);

  VAR_26 = FUNC_24();
  FUNC_15(VAR_27, VAR_26);


  while (1)
  {
   UINT64 VAR_41 = FUNC_44();
   UINT VAR_42;
   UINT VAR_43;
   IP VAR_44;
   UINT VAR_45;
   UINT VAR_46;
   UINT VAR_47 = 0;

   if (VAR_41 >= VAR_24)
   {

LABEL_TIMEOUT:
    *VAR_17 = VAR_4;
    break;
   }

   if (*VAR_19)
   {

    *VAR_17 = VAR_9;
    break;
   }

   VAR_46 = VAR_0;


   while (VAR_46 == VAR_0)
   {
    VAR_43 = FUNC_38(VAR_27, &VAR_44, &VAR_45, VAR_34, VAR_33);
    if (VAR_43 == VAR_11)
    {

     break;
    }
    else if (VAR_43 == 0)
    {
     if (VAR_27->IgnoreRecvErr == 0)
     {

      goto LABEL_TIMEOUT;
     }
     else
     {
      if ((VAR_47++) >= VAR_1)
      {
       goto LABEL_TIMEOUT;
      }
     }
    }
    else
    {

     if (FUNC_2(&VAR_44, &VAR_22) == 0 && VAR_45 == VAR_14)
     {
      BUF *VAR_48 = FUNC_20();
      PACK *VAR_49;

      FUNC_46(VAR_48, VAR_34, VAR_43);
      FUNC_41(VAR_48, 0, 0);


      VAR_49 = FUNC_1(VAR_48);

      if (VAR_49 != ((void*)0))
      {
       UINT64 VAR_50 = FUNC_32(VAR_49, "cookie");
       if (VAR_50 != 0)
       {
        VAR_40 = VAR_50;
       }


       if (FUNC_32(VAR_49, "tran_id") == VAR_32)
       {

        if (FUNC_29(VAR_49, "opcode", "nat_t_connect_request"))
        {
         bool VAR_51 = FUNC_30(VAR_49, "ok");
         bool VAR_52 = FUNC_30(VAR_49, "multi_candidates");

         if (VAR_51)
         {

          FUNC_33(VAR_49, "result_ip", VAR_35, sizeof(VAR_35));
          FUNC_43(&VAR_36, VAR_35);

          VAR_37 = FUNC_31(VAR_49, "result_port");

          VAR_28 = FUNC_30(VAR_49, "same_lan");

          if (VAR_37 != 0)
          {
           if (FUNC_14(&VAR_36) == 0)
           {
            if ((VAR_27->IPv6 == 0 && FUNC_12(&VAR_36)) ||
             (VAR_27->IPv6 && FUNC_13(&VAR_36)))
            {
             VAR_46 = VAR_6;
            }
           }
          }
         }
         else if (VAR_52)
         {

          VAR_46 = VAR_5;
         }
         else
         {

          VAR_46 = VAR_3;
         }
        }
       }

       FUNC_7(VAR_49);
      }

      FUNC_5(VAR_48);
     }
    }
   }

   if (VAR_46 != VAR_0)
   {
    *VAR_17 = VAR_46;
    break;
   }

   if (VAR_30 == 0 || VAR_41 >= VAR_30)
   {

    BUF *VAR_53;
    char VAR_54[VAR_2];
    PACK *VAR_55 = FUNC_22();

    FUNC_28(VAR_55, "opcode", "nat_t_connect_request");
    FUNC_27(VAR_55, "tran_id", VAR_32);
    FUNC_10(VAR_54, sizeof(VAR_54), VAR_16);
    FUNC_28(VAR_55, "dest_ip", VAR_54);
    FUNC_27(VAR_55, "cookie", VAR_40);
    if (FUNC_11(VAR_20) == 0)
    {
     FUNC_28(VAR_55, "hint", VAR_20);
    }
    if (FUNC_11(VAR_21) == 0)
    {
     FUNC_28(VAR_55, "target_hostname", VAR_21);
    }
    FUNC_28(VAR_55, "svc_name", VAR_15);

    FUNC_26(VAR_55, "nat_traversal_version", VAR_12);

    VAR_53 = FUNC_34(VAR_55);
    FUNC_7(VAR_55);

    FUNC_42(VAR_27, &VAR_22, VAR_14, VAR_53->Buf, VAR_53->Size);
    FUNC_5(VAR_53);


    VAR_30 = VAR_41 + (UINT64)VAR_13 * (UINT64)(FUNC_35(2, FUNC_17(VAR_39, 6)));
    VAR_39++;
    FUNC_0(VAR_31, VAR_30);
   }

   VAR_42 = FUNC_9(VAR_31);
   VAR_42 = FUNC_18(VAR_42, 50);

   FUNC_45(VAR_26, VAR_42);
  }

  FUNC_4(VAR_34);
  FUNC_6(VAR_31);

  if (*VAR_17 == VAR_6)
  {
   UINT VAR_56;
   UINT64 VAR_57 = FUNC_44();



   if (VAR_57 <= VAR_24)
   {
    VAR_56 = (UINT)(VAR_24 - VAR_57);
   }
   else
   {
    VAR_56 = 0;
   }

   VAR_56 = FUNC_17(VAR_56, 2000);

   if (VAR_28)
   {



    FUNC_40(VAR_26);
    FUNC_39(VAR_27);

    VAR_27 = ((void*)0);
    VAR_26 = ((void*)0);
   }

   VAR_38 = FUNC_23(VAR_15, &VAR_36, VAR_37, VAR_17, VAR_56, VAR_19,
    VAR_27, VAR_26, 0, 0);
  }

  if (VAR_26 != ((void*)0))
  {
   FUNC_40(VAR_26);
  }

  if (VAR_27 != ((void*)0))
  {
   if (VAR_38 == ((void*)0))
   {
    FUNC_3(VAR_27);
   }

   FUNC_39(VAR_27);
  }

  return VAR_38;
 }
}
