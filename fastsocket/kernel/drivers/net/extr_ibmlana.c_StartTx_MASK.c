
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tda_t ;
struct net_device {scalar_t__ base_addr; } ;
struct TYPE_3__ {int tdastart; int currtxdescr; } ;
typedef TYPE_1__ ibmlana_priv ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3, int VAR_4)
{
 ibmlana_priv *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 VAR_6 = VAR_5->tdastart + (VAR_4 * sizeof(tda_t));



 FUNC_1(VAR_6, VAR_3->base_addr + VAR_2);



 VAR_5->currtxdescr = VAR_4;
 FUNC_1(VAR_0, VAR_3->base_addr + VAR_1);
}
