
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fulldup; int idletime; int tailtime; } ;
struct TYPE_4__ {int tx_state; } ;
struct scc_channel {int dev; TYPE_1__ kiss; TYPE_2__ stat; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scc_channel*,int ) ;
 int FUNC_2 (struct scc_channel*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct scc_channel *VAR_6)
{




 switch (VAR_6->kiss.fulldup)
 {
  case 129:
   VAR_6->stat.tx_state = VAR_3;
   if (VAR_6->kiss.idletime != VAR_1)
   FUNC_2(VAR_6, VAR_4, VAR_6->kiss.idletime*100);
   break;
  case 128:
   FUNC_1(VAR_6, VAR_0);
   break;
  default:
   VAR_6->stat.tx_state = VAR_2;
   FUNC_2(VAR_6, VAR_5, VAR_6->kiss.tailtime);
 }

 FUNC_0(VAR_6->dev);
}
