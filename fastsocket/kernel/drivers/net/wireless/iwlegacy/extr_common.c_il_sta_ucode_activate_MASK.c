
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct il_priv {TYPE_3__* stations; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {TYPE_1__ sta; } ;
struct TYPE_6__ {int used; TYPE_2__ sta; } ;


 int FUNC_0 (char*,size_t,int ) ;
 int FUNC_1 (char*,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_2, u8 VAR_3)
{

 if (!(VAR_2->stations[VAR_3].used & VAR_0))
  FUNC_1("ACTIVATE a non DRIVER active station id %u addr %pM\n",
         VAR_3, VAR_2->stations[VAR_3].sta.sta.addr);

 if (VAR_2->stations[VAR_3].used & VAR_1) {
  FUNC_0("STA id %u addr %pM already present"
   " in uCode (according to driver)\n", VAR_3,
   VAR_2->stations[VAR_3].sta.sta.addr);
 } else {
  VAR_2->stations[VAR_3].used |= VAR_1;
  FUNC_0("Added STA id %u addr %pM to uCode\n", VAR_3,
   VAR_2->stations[VAR_3].sta.sta.addr);
 }
}
