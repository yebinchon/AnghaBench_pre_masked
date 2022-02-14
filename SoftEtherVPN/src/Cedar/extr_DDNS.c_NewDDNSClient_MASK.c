
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_8__ {int ref; } ;
struct TYPE_7__ {int Thread; int Event; int Lock; int InternetSetting; int * Key; int Err_IPv6; int Err_IPv4; TYPE_2__* Cedar; } ;
typedef int INTERNET_SETTING ;
typedef TYPE_1__ DDNS_CLIENT ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_6 (int *,int *,int) ;
 TYPE_1__* FUNC_7 (int) ;

DDNS_CLIENT *FUNC_8(CEDAR *VAR_3, UCHAR *VAR_4, INTERNET_SETTING *VAR_5)
{
 DDNS_CLIENT *VAR_6;
 UCHAR VAR_7[VAR_2];

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_7(sizeof(DDNS_CLIENT));
 VAR_6->Cedar = VAR_3;
 FUNC_0(VAR_6->Cedar->ref);

 VAR_6->Err_IPv4 = VAR_6->Err_IPv6 = VAR_1;

 if (VAR_4 == ((void*)0))
 {

  FUNC_2(VAR_6->Key);
 }
 else
 {

  FUNC_1(VAR_6->Key, VAR_4, VAR_2);
 }

 FUNC_6(VAR_7, VAR_6->Key, sizeof(VAR_6->Key));


 if (VAR_5 != ((void*)0))
 {
  FUNC_1(&VAR_6->InternetSetting, VAR_5, sizeof(INTERNET_SETTING));
 }

 VAR_6->Lock = FUNC_4();


 VAR_6->Event = FUNC_3();
 VAR_6->Thread = FUNC_5(VAR_0, VAR_6);

 return VAR_6;
}
