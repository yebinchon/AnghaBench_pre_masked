
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_7__* PointerL7; } ;
struct TYPE_14__ {TYPE_7__* PointerL4; } ;
struct TYPE_13__ {TYPE_7__* PointerL3; } ;
struct TYPE_11__ {TYPE_7__* HeaderPointer; } ;
struct TYPE_12__ {int OptionList; TYPE_2__ Headers; TYPE_7__* EchoData; TYPE_7__* Data; } ;
struct TYPE_10__ {TYPE_7__* Payload; TYPE_7__* FragmentHeader; TYPE_7__* RoutingHeader; TYPE_7__* EndPointHeader; TYPE_7__* HopHeader; TYPE_7__* IPv6Header; } ;
struct TYPE_16__ {struct TYPE_16__* HttpLog; struct TYPE_16__* MacHeader; struct TYPE_16__* PacketData; TYPE_6__ L7; TYPE_5__ L4; TYPE_4__ L3; TYPE_3__ ICMPv6HeaderPacketInfo; TYPE_1__ IPv6HeaderPacketInfo; } ;
typedef TYPE_7__ PKT ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(PKT *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->IPv6HeaderPacketInfo.IPv6Header);
 FUNC_0(VAR_0->IPv6HeaderPacketInfo.HopHeader);
 FUNC_0(VAR_0->IPv6HeaderPacketInfo.EndPointHeader);
 FUNC_0(VAR_0->IPv6HeaderPacketInfo.RoutingHeader);
 FUNC_0(VAR_0->IPv6HeaderPacketInfo.FragmentHeader);
 FUNC_0(VAR_0->IPv6HeaderPacketInfo.Payload);
 FUNC_0(VAR_0->ICMPv6HeaderPacketInfo.Data);
 FUNC_0(VAR_0->ICMPv6HeaderPacketInfo.EchoData);
 FUNC_0(VAR_0->ICMPv6HeaderPacketInfo.Headers.HeaderPointer);
 FUNC_1(&VAR_0->ICMPv6HeaderPacketInfo.OptionList);
 FUNC_0(VAR_0->L3.PointerL3);
 FUNC_0(VAR_0->L4.PointerL4);
 FUNC_0(VAR_0->L7.PointerL7);
 FUNC_0(VAR_0->PacketData);
 FUNC_0(VAR_0->MacHeader);
 FUNC_0(VAR_0->HttpLog);
 FUNC_0(VAR_0);
}
