
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vlan_ethhdr {scalar_t__ h_vlan_encapsulated_proto; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct ethhdr {scalar_t__ h_proto; } ;
typedef scalar_t__ __be16 ;
struct TYPE_7__ {scalar_t__ protocol; } ;
struct TYPE_6__ {scalar_t__ nexthdr; } ;
struct TYPE_5__ {unsigned int doff; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static __be16 FUNC_7(struct sk_buff *VAR_5)
{
 __be16 VAR_6 = VAR_5->protocol;

 FUNC_0(((struct ethhdr *)VAR_5->data)->h_proto !=
       VAR_6);
 if (VAR_6 == FUNC_2(VAR_0)) {
  struct vlan_ethhdr *VAR_7 = (struct vlan_ethhdr *)VAR_5->data;
  VAR_6 = VAR_7->h_vlan_encapsulated_proto;
 }

 if (VAR_6 == FUNC_2(VAR_1)) {
  FUNC_0(FUNC_3(VAR_5)->protocol != VAR_3);
 } else {
  FUNC_0(VAR_6 != FUNC_2(VAR_2));
  FUNC_0(FUNC_4(VAR_5)->nexthdr != VAR_4);
 }
 FUNC_0((FUNC_1(FUNC_6(VAR_5), VAR_5->data)
        + (FUNC_6(VAR_5)->doff << 2u)) >
       FUNC_5(VAR_5));

 return VAR_6;
}
