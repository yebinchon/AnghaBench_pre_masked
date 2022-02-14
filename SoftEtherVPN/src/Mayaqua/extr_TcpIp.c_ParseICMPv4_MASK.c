
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int * ICMPHeader; } ;
struct TYPE_5__ {int TypeL4; TYPE_1__ L4; } ;
typedef TYPE_2__ PKT ;
typedef int ICMP_HEADER ;


 int VAR_0 ;

bool FUNC_0(PKT *VAR_1, UCHAR *VAR_2, UINT VAR_3)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }


 if (VAR_3 < sizeof(ICMP_HEADER))
 {

  return 0;
 }


 VAR_1->L4.ICMPHeader = (ICMP_HEADER *)VAR_2;
 VAR_1->TypeL4 = VAR_0;

 VAR_2 += sizeof(ICMP_HEADER);
 VAR_3 -= sizeof(ICMP_HEADER);

 return 1;
}
