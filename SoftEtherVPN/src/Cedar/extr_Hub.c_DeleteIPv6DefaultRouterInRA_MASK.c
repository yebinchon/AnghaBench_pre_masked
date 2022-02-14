
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_18__ {int PayloadSize; } ;
struct TYPE_17__ {TYPE_10__* ICMPHeader; } ;
struct TYPE_16__ {TYPE_4__* IPv6Header; } ;
struct TYPE_13__ {TYPE_1__* RouterAdvertisementHeader; } ;
struct TYPE_14__ {scalar_t__ Type; TYPE_2__ Headers; } ;
struct TYPE_19__ {scalar_t__ TypeL3; scalar_t__ TypeL4; TYPE_7__ IPv6HeaderPacketInfo; TYPE_6__ L4; TYPE_5__ L3; TYPE_3__ ICMPv6HeaderPacketInfo; } ;
struct TYPE_15__ {int DestAddress; int SrcAddress; } ;
struct TYPE_12__ {scalar_t__ Lifetime; } ;
struct TYPE_11__ {scalar_t__ Checksum; } ;
typedef TYPE_8__ PKT ;


 scalar_t__ FUNC_0 (int *,int *,int ,TYPE_10__*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

bool FUNC_1(PKT *VAR_4)
{
 if (VAR_4->TypeL3 == VAR_2 && VAR_4->TypeL4 == VAR_3 &&
  (VAR_4->ICMPv6HeaderPacketInfo.Type == VAR_0))
 {
  if (VAR_4->ICMPv6HeaderPacketInfo.Headers.RouterAdvertisementHeader->Lifetime != 0)
  {
   VAR_4->ICMPv6HeaderPacketInfo.Headers.RouterAdvertisementHeader->Lifetime = 0;

   VAR_4->L4.ICMPHeader->Checksum = 0;
   VAR_4->L4.ICMPHeader->Checksum =
    FUNC_0(&VAR_4->L3.IPv6Header->SrcAddress,
     &VAR_4->L3.IPv6Header->DestAddress, VAR_1,
     VAR_4->L4.ICMPHeader, VAR_4->IPv6HeaderPacketInfo.PayloadSize, 0);
  }
 }

 return 0;
}
