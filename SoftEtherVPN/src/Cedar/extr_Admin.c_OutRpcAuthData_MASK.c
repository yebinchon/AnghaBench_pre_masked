
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {int * NtUsername; } ;
struct TYPE_11__ {int NtLmSecureHash; int HashedKey; } ;
struct TYPE_10__ {int * RadiusUsername; } ;
struct TYPE_9__ {int * CommonName; TYPE_1__* Serial; } ;
struct TYPE_8__ {int UserX; } ;
struct TYPE_7__ {int size; int data; } ;
typedef int PACK ;
typedef TYPE_2__ AUTHUSERCERT ;
typedef TYPE_3__ AUTHROOTCERT ;
typedef TYPE_4__ AUTHRADIUS ;
typedef TYPE_5__ AUTHPASSWORD ;
typedef TYPE_6__ AUTHNT ;







 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(PACK *VAR_0, void *VAR_1, UINT VAR_2)
{
 AUTHPASSWORD *VAR_3 = VAR_1;
 AUTHUSERCERT *VAR_4 = VAR_1;
 AUTHROOTCERT *VAR_5 = VAR_1;
 AUTHRADIUS *VAR_6 = VAR_1;
 AUTHNT *VAR_7 = VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "AuthType", VAR_2);

 switch (VAR_2)
 {
 case 131:
  FUNC_0(VAR_0, "HashedKey", VAR_3->HashedKey, sizeof(VAR_3->HashedKey));
  FUNC_0(VAR_0, "NtLmSecureHash", VAR_3->NtLmSecureHash, sizeof(VAR_3->NtLmSecureHash));
  break;

 case 128:
  FUNC_3(VAR_0, "UserX", VAR_4->UserX);
  break;

 case 129:
  if (VAR_5->Serial != ((void*)0))
  {
   FUNC_0(VAR_0, "Serial", VAR_5->Serial->data, VAR_5->Serial->size);
  }
  if (VAR_5->CommonName != ((void*)0))
  {
   FUNC_2(VAR_0, "CommonName", VAR_5->CommonName);
  }
  break;

 case 130:
  FUNC_2(VAR_0, "RadiusUsername", VAR_6->RadiusUsername);
  break;

 case 132:
  FUNC_2(VAR_0, "NtUsername", VAR_7->NtUsername);
  break;
 }
}
