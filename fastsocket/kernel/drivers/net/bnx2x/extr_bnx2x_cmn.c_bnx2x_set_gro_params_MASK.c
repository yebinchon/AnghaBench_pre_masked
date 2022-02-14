
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tcphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct bnx2x {int * vlgrp; } ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int gso_size; int gso_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_9, u16 VAR_10,
     u16 VAR_11, unsigned int VAR_12,
     u16 VAR_13,
     struct bnx2x *VAR_14)
{



 u16 VAR_15 = VAR_0 + sizeof(struct tcphdr);

 if (FUNC_0(VAR_10, VAR_1) ==
     VAR_4) {
  VAR_15 += sizeof(struct ipv6hdr);
  FUNC_2(VAR_9)->gso_type = VAR_6;
 } else {
  VAR_15 += sizeof(struct iphdr);
  FUNC_2(VAR_9)->gso_type = VAR_5;
 }


 if ((VAR_14->vlgrp == ((void*)0)) && (VAR_10 & VAR_3))
  VAR_15 += VAR_8;






 if (VAR_10 & VAR_2)
  VAR_15 += VAR_7;

 FUNC_2(VAR_9)->gso_size = VAR_11 - VAR_15;




 FUNC_1(VAR_9)->count = VAR_13;
}
