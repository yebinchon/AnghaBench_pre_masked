
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_3__ {int* Random1; int* Random2; int PeerInfo; int Password; int Username; int OptionString; } ;
typedef TYPE_1__ OPENVPN_KEY_METHOD_2 ;
typedef int BUF ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *,int ) ;

BUF *FUNC_4(OPENVPN_KEY_METHOD_2 *VAR_0)
{
 BUF *VAR_1;
 UCHAR VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0();


 FUNC_3(VAR_1, 0);


 VAR_2 = 2;
 FUNC_2(VAR_1, &VAR_2, sizeof(UCHAR));


 FUNC_2(VAR_1, VAR_0->Random1, sizeof(VAR_0->Random1));


 FUNC_2(VAR_1, VAR_0->Random2, sizeof(VAR_0->Random2));


 FUNC_1(VAR_1, VAR_0->OptionString, sizeof(VAR_0->OptionString));


 FUNC_1(VAR_1, VAR_0->Username, sizeof(VAR_0->Username));


 FUNC_1(VAR_1, VAR_0->Password, sizeof(VAR_0->Password));


 FUNC_1(VAR_1, VAR_0->PeerInfo, sizeof(VAR_0->PeerInfo));

 return VAR_1;
}
