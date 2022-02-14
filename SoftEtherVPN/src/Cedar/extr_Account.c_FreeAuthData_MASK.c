
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {void* NtUsername; } ;
struct TYPE_7__ {void* RadiusUsername; } ;
struct TYPE_6__ {void* CommonName; int * Serial; } ;
struct TYPE_5__ {int UserX; } ;
typedef TYPE_1__ AUTHUSERCERT ;
typedef TYPE_2__ AUTHROOTCERT ;
typedef TYPE_3__ AUTHRADIUS ;
typedef int AUTHPASSWORD ;
typedef TYPE_4__ AUTHNT ;


 int VAR_0 ;





 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(UINT VAR_1, void *VAR_2)
{
 AUTHPASSWORD *VAR_3 = (AUTHPASSWORD *)VAR_2;
 AUTHUSERCERT *VAR_4 = (AUTHUSERCERT *)VAR_2;
 AUTHROOTCERT *VAR_5 = (AUTHROOTCERT *)VAR_2;
 AUTHRADIUS *VAR_6 = (AUTHRADIUS *)VAR_2;
 AUTHNT *VAR_7 = (AUTHNT *)VAR_2;

 if (VAR_1 == VAR_0 || VAR_2 == ((void*)0))
 {
  return;
 }

 switch (VAR_1)
 {
 case 131:


  break;

 case 128:

  FUNC_1(VAR_4->UserX);
  break;

 case 129:

  if (VAR_5->Serial != ((void*)0))
  {
   FUNC_2(VAR_5->Serial);
  }
  if (VAR_5->CommonName != ((void*)0))
  {
   FUNC_0(VAR_5->CommonName);
  }
  break;

 case 130:

  FUNC_0(VAR_6->RadiusUsername);
  break;

 case 132:

  FUNC_0(VAR_7->NtUsername);
  break;
 }

 FUNC_0(VAR_2);
}
