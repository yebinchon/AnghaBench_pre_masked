
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int send_msg ;
typedef int nak ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_14__ {int PeapMode; scalar_t__ MsChapV2Challenge; int * Username; } ;
struct TYPE_13__ {scalar_t__ Type; scalar_t__* Data; int Len; } ;
struct TYPE_12__ {scalar_t__ Chap_Opcode; } ;
typedef TYPE_1__ EAP_MSCHAPV2_GENERAL ;
typedef int EAP_MSCHAPV2_CHALLENGE ;
typedef TYPE_2__ EAP_MESSAGE ;
typedef TYPE_3__ EAP_CLIENT ;


 int FUNC_0 (scalar_t__*,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int) ;

bool FUNC_8(EAP_CLIENT *VAR_4)
{
 bool VAR_5 = 0;
 UINT VAR_6 = 0;
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_4(VAR_4))
 {
  if (FUNC_5(VAR_4))
  {
   EAP_MESSAGE VAR_7;
   EAP_MESSAGE VAR_8;

   if (FUNC_2(VAR_4, &VAR_7) && VAR_7.Type == VAR_1)
   {
LABEL_RETRY:
    VAR_6++;
    if (VAR_6 >= 10)
    {
     return 0;
    }
    FUNC_7(&VAR_8, sizeof(VAR_8));
    VAR_8.Type = VAR_1;
    VAR_8.Len = FUNC_1(5 + FUNC_6(VAR_4->Username));
    FUNC_0(VAR_8.Data, VAR_4->Username, FUNC_6(VAR_4->Username));

    if (FUNC_3(VAR_4, &VAR_8, 5 + FUNC_6(VAR_4->Username)) &&
     FUNC_2(VAR_4, &VAR_7))
    {
LABEL_RETRY2:
     VAR_6++;
     if (VAR_6 >= 10)
     {
      return 0;
     }
     if (VAR_7.Type == VAR_3 &&
      ((EAP_MSCHAPV2_GENERAL *)&VAR_7)->Chap_Opcode == VAR_0)
     {
      EAP_MSCHAPV2_CHALLENGE *VAR_9 = (EAP_MSCHAPV2_CHALLENGE *)&VAR_7;

      FUNC_0(&VAR_4->MsChapV2Challenge, VAR_9, sizeof(EAP_MSCHAPV2_CHALLENGE));

      VAR_5 = 1;

      VAR_4->PeapMode = 1;
     }
     else if (VAR_7.Type == VAR_1)
     {
      UCHAR *VAR_10 = ((UCHAR *)&VAR_7);
      if (VAR_10[4] == 0x01 && VAR_10[8] == 0x21 && VAR_10[9] == 0x80 &&
       VAR_10[10] == 0x03 && VAR_10[11] == 0x00 && VAR_10[12] == 0x02 &&
       VAR_10[13] == 0x00)
      {
       if (VAR_10[14] == 0x02)
       {

        return 0;
       }
      }

      goto LABEL_RETRY;
     }
     else
     {
      EAP_MESSAGE VAR_11;

      FUNC_7(&VAR_11, sizeof(VAR_11));
      VAR_11.Type = VAR_2;
      VAR_11.Data[0] = VAR_3;

      if (FUNC_3(VAR_4, &VAR_11, 6) &&
       FUNC_2(VAR_4, &VAR_7))
      {
       goto LABEL_RETRY2;
      }
     }
    }
   }
  }
 }
 return VAR_5;
}
