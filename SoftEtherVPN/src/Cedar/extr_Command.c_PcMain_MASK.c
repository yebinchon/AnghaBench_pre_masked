
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int prompt ;
typedef int cmd ;
struct TYPE_13__ {scalar_t__ RetCode; scalar_t__ ConsoleType; int (* Write ) (TYPE_3__*,char*) ;} ;
struct TYPE_12__ {char* member_0; int member_1; } ;
struct TYPE_11__ {scalar_t__ LastError; int * CmdLine; TYPE_3__* Console; int ServerName; } ;
typedef TYPE_1__ PC ;
typedef TYPE_2__ CMD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,char*,TYPE_2__*,int,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int,char*,int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,char*) ;

void FUNC_8(PC *VAR_78)
{
 char VAR_79[VAR_2];
 wchar_t VAR_80[VAR_2];

 if (VAR_78 == ((void*)0))
 {
  return;
 }


 FUNC_2(VAR_80, sizeof(VAR_80), FUNC_3("CMD_VPNCMD_CLIENT_CONNECTED"),
  VAR_78->ServerName);
 VAR_78->Console->Write(VAR_78->Console, VAR_80);
 VAR_78->Console->Write(VAR_78->Console, L"");

 while (1)
 {

  CMD VAR_81[] =
  {
   {"About", VAR_72},
   {"Check", VAR_73},
   {"VersionGet", VAR_71},
   {"PasswordSet", VAR_62},
   {"PasswordGet", VAR_61},
   {"CertList", VAR_48},
   {"CertAdd", VAR_45},
   {"CertDelete", VAR_46},
   {"CertGet", VAR_47},
   {"SecureList", VAR_66},
   {"SecureSelect", VAR_67},
   {"SecureGet", VAR_65},
   {"NicCreate", VAR_53},
   {"NicDelete", VAR_54},
   {"NicUpgrade", VAR_60},
   {"NicGetSetting", VAR_57},
   {"NicSetSetting", VAR_59},
   {"NicEnable", VAR_56},
   {"NicDisable", VAR_55},
   {"NicList", VAR_58},
   {"AccountList", VAR_21},
   {"AccountCreate", VAR_9},
   {"AccountSet", VAR_38},
   {"AccountGet", VAR_16},
   {"AccountDelete", VAR_10},
   {"AccountUsernameSet", VAR_44},
   {"AccountAnonymousSet", VAR_3},
   {"AccountPasswordSet", VAR_23},
   {"AccountCertSet", VAR_5},
   {"AccountCertGet", VAR_4},
   {"AccountEncryptDisable", VAR_13},
   {"AccountEncryptEnable", VAR_14},
   {"AccountCompressEnable", VAR_7},
   {"AccountCompressDisable", VAR_6},
   {"AccountHttpHeaderAdd", VAR_17},
   {"AccountHttpHeaderDelete", VAR_18},
   {"AccountHttpHeaderGet", VAR_19},
   {"AccountProxyNone", VAR_25},
   {"AccountProxyHttp", VAR_24},
   {"AccountProxySocks", VAR_26},
   {"AccountProxySocks5", VAR_27},
   {"AccountServerCertEnable", VAR_35},
   {"AccountServerCertDisable", VAR_34},
   {"AccountRetryOnServerCertEnable", VAR_30},
   {"AccountRetryOnServerCertDisable", VAR_29},
   {"AccountServerCertSet", VAR_37},
   {"AccountServerCertDelete", VAR_33},
   {"AccountServerCertGet", VAR_36},
   {"AccountDetailSet", VAR_11},
   {"AccountRename", VAR_28},
   {"AccountConnect", VAR_8},
   {"AccountDisconnect", VAR_12},
   {"AccountStatusGet", VAR_41},
   {"AccountNicSet", VAR_22},
   {"AccountStatusShow", VAR_43},
   {"AccountStatusHide", VAR_42},
   {"AccountSecureCertSet", VAR_32},
   {"AccountRetrySet", VAR_31},
   {"AccountStartupSet", VAR_40},
   {"AccountStartupRemove", VAR_39},
   {"AccountExport", VAR_15},
   {"AccountImport", VAR_20},
   {"RemoteEnable", VAR_64},
   {"RemoteDisable", VAR_63},
   {"TUNDownOnDisconnectEnable", VAR_69},
   {"TUNDownOnDisconnectDisable", VAR_68},
   {"TUNDownOnDisconnectGet", VAR_70},
   {"KeepEnable", VAR_50},
   {"KeepDisable", VAR_49},
   {"KeepSet", VAR_52},
   {"KeepGet", VAR_51},
   {"MakeCert", VAR_74},
   {"MakeCert2048", VAR_75},
   {"TrafficClient", VAR_76},
   {"TrafficServer", VAR_77},
  };


  FUNC_1(VAR_79, sizeof(VAR_79), "VPN Client>");

  if (FUNC_0(VAR_78->Console, VAR_78->CmdLine, VAR_79, VAR_81, sizeof(VAR_81) / sizeof(VAR_81[0]), VAR_78) == 0)
  {
   break;
  }
  VAR_78->LastError = VAR_78->Console->RetCode;

  if (VAR_78->LastError == VAR_1 && VAR_78->Console->ConsoleType != VAR_0)
  {
   VAR_78->Console->Write(VAR_78->Console, FUNC_3("CMD_MSG_OK"));
   VAR_78->Console->Write(VAR_78->Console, L"");
  }

  if (VAR_78->CmdLine != ((void*)0))
  {
   break;
  }
 }
}
