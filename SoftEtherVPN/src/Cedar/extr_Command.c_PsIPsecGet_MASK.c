
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int L2TP_DefaultHub; int IPsec_Secret; scalar_t__ EtherIP_IPsec; scalar_t__ L2TP_Raw; scalar_t__ L2TP_IPsec; } ;
struct TYPE_5__ {int Rpc; } ;
typedef TYPE_1__ PS ;
typedef int LIST ;
typedef TYPE_2__ IPSEC_SERVICES ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int * FUNC_5 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int * FUNC_9 (char*) ;

UINT FUNC_10(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 IPSEC_SERVICES VAR_10;

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_8(&VAR_10, sizeof(VAR_10));


 VAR_9 = FUNC_6(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_4(VAR_7);
  return VAR_9;
 }
 else
 {
  wchar_t VAR_11[VAR_2];
  CT *VAR_12 = FUNC_3();

  FUNC_2(VAR_12, FUNC_9("CMD_IPsecGet_PRINT_L2TP"), FUNC_9(VAR_10.L2TP_IPsec ? "SEC_YES" : "SEC_NO"));
  FUNC_2(VAR_12, FUNC_9("CMD_IPsecGet_PRINT_L2TPRAW"), FUNC_9(VAR_10.L2TP_Raw ? "SEC_YES" : "SEC_NO"));
  FUNC_2(VAR_12, FUNC_9("CMD_IPsecGet_PRINT_ETHERIP"), FUNC_9(VAR_10.EtherIP_IPsec ? "SEC_YES" : "SEC_NO"));

  FUNC_7(VAR_11, sizeof(VAR_11), VAR_10.IPsec_Secret);
  FUNC_2(VAR_12, FUNC_9("CMD_IPsecGet_PRINT_PSK"), VAR_11);

  FUNC_7(VAR_11, sizeof(VAR_11), VAR_10.L2TP_DefaultHub);
  FUNC_2(VAR_12, FUNC_9("CMD_IPsecGet_PRINT_DEFAULTHUB"), VAR_11);

  FUNC_1(VAR_12, VAR_3);
 }

 FUNC_4(VAR_7);

 return 0;
}
