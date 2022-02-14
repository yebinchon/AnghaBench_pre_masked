
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_13__ {int Current; } ;
struct TYPE_12__ {int* PreMasterSecret; int* Random1; int* Random2; struct TYPE_12__* PeerInfo; struct TYPE_12__* Password; struct TYPE_12__* Username; struct TYPE_12__* OptionString; } ;
typedef TYPE_1__ OPENVPN_KEY_METHOD_2 ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,int*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;

UINT FUNC_7(OPENVPN_KEY_METHOD_2 *VAR_0, UCHAR *VAR_1, UINT VAR_2, bool VAR_3)
{
 BUF *VAR_4;
 UINT VAR_5 = 0;
 UINT VAR_6;
 UCHAR VAR_7;

 FUNC_6(VAR_0, sizeof(OPENVPN_KEY_METHOD_2));
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }

 VAR_4 = FUNC_1();
 FUNC_5(VAR_4, VAR_1, VAR_2);
 FUNC_4(VAR_4, 0, 0);


 if (FUNC_3(VAR_4, &VAR_6, sizeof(UINT)) == sizeof(UINT))
 {

  if (FUNC_3(VAR_4, &VAR_7, sizeof(UCHAR)) == sizeof(UCHAR) && VAR_7 == 2)
  {

   if (VAR_3 == 0 || FUNC_3(VAR_4, VAR_0->PreMasterSecret, sizeof(VAR_0->PreMasterSecret)) == sizeof(VAR_0->PreMasterSecret))
   {

    if (FUNC_3(VAR_4, VAR_0->Random1, sizeof(VAR_0->Random1)) == sizeof(VAR_0->Random1))
    {

     if (FUNC_3(VAR_4, VAR_0->Random2, sizeof(VAR_0->Random2)) == sizeof(VAR_0->Random2))
     {

      if (FUNC_2(VAR_4, VAR_0->OptionString, sizeof(VAR_0->OptionString)) &&
       FUNC_2(VAR_4, VAR_0->Username, sizeof(VAR_0->Username)) &&
       FUNC_2(VAR_4, VAR_0->Password, sizeof(VAR_0->Password)))
       {
        if (!FUNC_2(VAR_4, VAR_0->PeerInfo, sizeof(VAR_0->PeerInfo)))
        {
         FUNC_6(VAR_0->PeerInfo, sizeof(VAR_0->PeerInfo));
        }
       VAR_5 = VAR_4->Current;
      }
     }
    }
   }
  }
 }

 FUNC_0(VAR_4);

 return VAR_5;
}
