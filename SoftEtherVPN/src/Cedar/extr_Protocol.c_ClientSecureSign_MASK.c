
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int X ;
typedef scalar_t__ UINT64 ;
typedef int UCHAR ;
struct TYPE_19__ {int SecureSignProc; int SecurePublicCertName; int SecurePrivateKeyName; } ;
struct TYPE_18__ {int ServerName; TYPE_2__* Cedar; TYPE_3__* Session; } ;
struct TYPE_17__ {int Ok; struct TYPE_17__* SecureSign; int * ClientCert; int * Signature; scalar_t__ UserFinished; int SecureSignProc; int BitmapId; int * Random; int UseSecureDeviceId; int SecurePublicCertName; int SecurePrivateKeyName; TYPE_6__* Connection; } ;
struct TYPE_16__ {TYPE_7__* ClientAuth; int * ClientOption; } ;
struct TYPE_15__ {TYPE_1__* Client; } ;
struct TYPE_14__ {int UseSecureDeviceId; } ;
typedef int THREAD ;
typedef TYPE_3__ SESSION ;
typedef TYPE_4__ SECURE_SIGN_THREAD_PROC ;
typedef TYPE_4__ SECURE_SIGN ;
typedef TYPE_6__ CONNECTION ;
typedef int CLIENT_OPTION ;
typedef TYPE_7__ CLIENT_AUTH ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int * FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int ,int,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 TYPE_4__* FUNC_10 (int) ;
 TYPE_4__* FUNC_11 (int,int) ;

bool FUNC_12(CONNECTION *VAR_3, UCHAR *VAR_4, UCHAR *VAR_5, X **VAR_6)
{
 SECURE_SIGN_THREAD_PROC *VAR_7;
 SECURE_SIGN *VAR_8;
 SESSION *VAR_9;
 CLIENT_OPTION *VAR_10;
 CLIENT_AUTH *VAR_11;
 THREAD *VAR_12;
 UINT64 VAR_13;
 bool VAR_14;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 0;
 }

 VAR_9 = VAR_3->Session;
 VAR_10 = VAR_9->ClientOption;
 VAR_11 = VAR_9->ClientAuth;

 VAR_7 = FUNC_10(sizeof(SECURE_SIGN_THREAD_PROC));
 VAR_7->Connection = VAR_3;
 VAR_8 = VAR_7->SecureSign = FUNC_11(sizeof(SECURE_SIGN), 1);
 FUNC_6(VAR_8->SecurePrivateKeyName, sizeof(VAR_8->SecurePrivateKeyName),
  VAR_11->SecurePrivateKeyName);
 FUNC_6(VAR_8->SecurePublicCertName, sizeof(VAR_8->SecurePublicCertName),
  VAR_11->SecurePublicCertName);
 VAR_8->UseSecureDeviceId = VAR_3->Cedar->Client->UseSecureDeviceId;
 FUNC_2(VAR_8->Random, VAR_5, VAR_2);





 VAR_7->SecureSignProc = VAR_11->SecureSignProc;


 VAR_12 = FUNC_4(VAR_1, VAR_7);
 FUNC_9(VAR_12);


 VAR_13 = FUNC_7();
 while (1)
 {
  if ((FUNC_7() - VAR_13) > VAR_0)
  {

   VAR_13 = FUNC_7();
   FUNC_0(VAR_3);
  }
  if (VAR_7->UserFinished)
  {

   break;
  }
  FUNC_8(VAR_12, 500);
 }
 FUNC_5(VAR_12);

 VAR_14 = VAR_7->Ok;

 if (VAR_14)
 {
  FUNC_2(VAR_4, VAR_8->Signature, sizeof(VAR_8->Signature));
  *VAR_6 = VAR_8->ClientCert;
 }

 FUNC_3(VAR_7->SecureSign);
 FUNC_3(VAR_7);

 return VAR_14;
}
