
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int dsrate; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct uea_softc {size_t modem_index; TYPE_2__ stats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uea_softc*) ;
 scalar_t__ FUNC_1 (struct uea_softc*) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (int ,char*,int,char*) ;
 int FUNC_3 (struct uea_softc*,int ,int,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct uea_softc *VAR_3, u32 VAR_4)
{
 int VAR_5;
 u16 VAR_6;







 if (FUNC_1(VAR_3) == VAR_0 ||
     VAR_2[VAR_3->modem_index] > 0 ||
     VAR_3->stats.phy.dsrate == VAR_4)
  return;


 VAR_6 = (VAR_4 <= 1024*1024) ? 0 : 1;
 VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_6, 0, ((void*)0));
 FUNC_2(FUNC_0(VAR_3), "setting new timeout %d%s\n",
   VAR_6, VAR_5 < 0 ? " failed" : "");

}
