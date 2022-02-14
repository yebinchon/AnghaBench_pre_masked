
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_12__ {int Protocol; int TotalLength; } ;
struct TYPE_10__ {TYPE_3__* IPv4Header; } ;
struct TYPE_11__ {TYPE_1__ L3; int TypeL4; int * IPv4PayloadData; int IPv4PayloadSize; int TypeL3; } ;
typedef TYPE_2__ PKT ;
typedef TYPE_3__ IPV4_HEADER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int FUNC_6 (TYPE_2__*,int *,int) ;

bool FUNC_7(PKT *VAR_3, UCHAR *VAR_4, UINT VAR_5)
{
 UINT VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }


 if (VAR_5 < sizeof(IPV4_HEADER))
 {
  return 0;
 }


 VAR_3->L3.IPv4Header = (IPV4_HEADER *)VAR_4;
 VAR_3->TypeL3 = VAR_0;


 VAR_6 = FUNC_1(VAR_3->L3.IPv4Header) * 4;
 if (VAR_6 < sizeof(IPV4_HEADER) || VAR_5 < VAR_6)
 {

  VAR_3->L3.IPv4Header = ((void*)0);
  VAR_3->TypeL3= VAR_1;
  return 1;
 }

 VAR_4 += VAR_6;
 VAR_5 -= VAR_6;

 VAR_3->IPv4PayloadSize = FUNC_3(VAR_5, FUNC_0(VAR_3->L3.IPv4Header->TotalLength) - VAR_6);
 if (FUNC_0(VAR_3->L3.IPv4Header->TotalLength) < VAR_6)
 {
  VAR_3->IPv4PayloadSize = 0;
 }

 VAR_3->IPv4PayloadData = VAR_4;

 if (FUNC_2(VAR_3->L3.IPv4Header) != 0)
 {

  VAR_3->TypeL4 = VAR_2;

  return 1;
 }


 switch (VAR_3->L3.IPv4Header->Protocol)
 {
 case 130:
  return FUNC_4(VAR_3, VAR_4, VAR_5);

 case 128:
  return FUNC_6(VAR_3, VAR_4, VAR_5);

 case 129:
  return FUNC_5(VAR_3, VAR_4, VAR_5);

 default:
  return 1;
 }
}
