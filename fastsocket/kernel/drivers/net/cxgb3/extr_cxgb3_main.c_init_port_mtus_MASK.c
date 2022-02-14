
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {TYPE_1__** port; } ;
struct TYPE_2__ {unsigned int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_1)
{
 unsigned int VAR_2 = VAR_1->port[0]->mtu;

 if (VAR_1->port[1])
  VAR_2 |= VAR_1->port[1]->mtu << 16;
 FUNC_0(VAR_1, VAR_0, VAR_2);
}
