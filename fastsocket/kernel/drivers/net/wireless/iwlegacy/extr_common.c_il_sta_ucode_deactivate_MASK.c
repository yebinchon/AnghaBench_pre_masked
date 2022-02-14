
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct il_station_entry {int dummy; } ;
struct il_priv {TYPE_1__* stations; } ;
struct TYPE_2__ {int used; } ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct il_priv *VAR_2, u8 VAR_3)
{

 if ((VAR_2->stations[VAR_3].
      used & (VAR_1 | VAR_0)) !=
     VAR_1)
  FUNC_1("removed non active STA %u\n", VAR_3);

 VAR_2->stations[VAR_3].used &= ~VAR_1;

 FUNC_2(&VAR_2->stations[VAR_3], 0, sizeof(struct il_station_entry));
 FUNC_0("Removed STA %u\n", VAR_3);
}
