
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* status; } ;
struct pasemi_mac_rxring {TYPE_1__ chan; } ;
struct pasemi_mac {TYPE_3__* rx; } ;
struct TYPE_5__ {int chno; } ;
struct TYPE_6__ {TYPE_2__ chan; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct pasemi_mac_rxring* FUNC_2 (struct pasemi_mac const*) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(const struct pasemi_mac *VAR_4)
{
 struct pasemi_mac_rxring *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6, VAR_7;




 VAR_7 = *VAR_5->chan.status & VAR_2;

 VAR_6 = FUNC_1(VAR_7) | VAR_0;

 if (*VAR_5->chan.status & VAR_3)
  VAR_6 |= VAR_1;

 FUNC_3(FUNC_0(VAR_4->rx->chan.chno), VAR_6);
}
