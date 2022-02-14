
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sadb_x_ipsecif {scalar_t__* sadb_x_ipsecif_ipsec_if; } ;
struct sadb_msghdr {scalar_t__* ext; } ;
typedef int * ifnet_t ;


 int FUNC_0 (scalar_t__*,int **) ;

__attribute__((used)) static ifnet_t
FUNC_1 (const struct sadb_msghdr *VAR_0, int VAR_1)
{
 struct sadb_x_ipsecif *VAR_2 = ((void*)0);
 ifnet_t VAR_3 = ((void*)0);

 VAR_2 = (struct sadb_x_ipsecif *)(void *)VAR_0->ext[VAR_1];
 if (VAR_2 != ((void*)0)) {
  if (VAR_2->sadb_x_ipsecif_ipsec_if[0]) {
   FUNC_0(VAR_2->sadb_x_ipsecif_ipsec_if, &VAR_3);
  }
 }

 return VAR_3;
}
