
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {TYPE_1__* Server; } ;
struct TYPE_5__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int OPENVPN_SSTP_CONFIG ;
typedef int CEDAR ;
typedef TYPE_2__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int) ;

UINT FUNC_2(ADMIN *VAR_5, OPENVPN_SSTP_CONFIG *VAR_6)
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

 FUNC_1(VAR_6, sizeof(OPENVPN_SSTP_CONFIG));
 FUNC_0(VAR_7, VAR_6);

 return VAR_1;
}
