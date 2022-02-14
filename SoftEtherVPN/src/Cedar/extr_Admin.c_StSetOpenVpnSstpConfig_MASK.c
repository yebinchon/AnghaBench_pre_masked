
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {TYPE_1__* Server; } ;
struct TYPE_7__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int OPENVPN_SSTP_CONFIG ;
typedef int CEDAR ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (TYPE_2__*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__*,int *) ;

UINT FUNC_3(ADMIN *VAR_5, OPENVPN_SSTP_CONFIG *VAR_6)
{
 SERVER *VAR_7 = VAR_5->Server;
 CEDAR *VAR_8 = VAR_7->Cedar;
 UINT VAR_9 = VAR_1;

 VAR_3;
 VAR_2;
 if (VAR_7->ServerType != VAR_4)
 {
  return VAR_0;
 }

 FUNC_2(VAR_7, VAR_6);

 FUNC_0(VAR_5, ((void*)0), "LA_SET_OVPN_SSTP_CONFIG");

 FUNC_1(VAR_7);

 return VAR_1;
}
