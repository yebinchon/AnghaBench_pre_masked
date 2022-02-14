
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int p ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {scalar_t__ Err_IPv4; scalar_t__ Err_IPv6; TYPE_1__* Cedar; } ;
struct TYPE_10__ {int NewHostname; } ;
struct TYPE_9__ {int Server; } ;
typedef TYPE_2__ DDNS_REGISTER_PARAM ;
typedef int DDNS_CLIENT_STATUS ;
typedef TYPE_3__ DDNS_CLIENT ;


 int FUNC_0 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,TYPE_2__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*,int) ;

UINT FUNC_6(DDNS_CLIENT *VAR_3, char *VAR_4)
{
 UINT VAR_5;
 DDNS_REGISTER_PARAM VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return VAR_1;
 }

 if (FUNC_4(VAR_4) > 32)
 {

  return VAR_0;
 }

 FUNC_5(&VAR_6, sizeof(VAR_6));

 FUNC_3(VAR_6.NewHostname, sizeof(VAR_6.NewHostname), VAR_4);


 if (VAR_3->Err_IPv4 == VAR_2)
 {

  VAR_5 = FUNC_1(VAR_3, 0, &VAR_6, ((void*)0));
 }
 else if (VAR_3->Err_IPv6 == VAR_2)
 {

  VAR_5 = FUNC_1(VAR_3, 1, &VAR_6, ((void*)0));
 }
 else
 {

  VAR_5 = FUNC_1(VAR_3, 1, &VAR_6, ((void*)0));
  if (VAR_5 != VAR_2)
  {
   VAR_5 = FUNC_1(VAR_3, 0, &VAR_6, ((void*)0));
  }
 }

 if (VAR_5 == VAR_2)
 {
  DDNS_CLIENT_STATUS VAR_7;

  FUNC_0(VAR_3, &VAR_7);

  FUNC_2(VAR_3->Cedar->Server, &VAR_7);
 }

 return VAR_5;
}
