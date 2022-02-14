
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppoe_addr {scalar_t__ sid; int remote; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct pppoe_addr *VAR_1, struct pppoe_addr *VAR_2)
{
 return VAR_1->sid == VAR_2->sid && !FUNC_0(VAR_1->remote, VAR_2->remote, VAR_0);
}
