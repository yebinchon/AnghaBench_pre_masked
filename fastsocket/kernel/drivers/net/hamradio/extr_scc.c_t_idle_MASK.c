
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx_state; } ;
struct TYPE_3__ {int mintime; } ;
struct scc_channel {TYPE_2__ stat; TYPE_1__ kiss; int tx_wdog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scc_channel*,int ) ;
 int FUNC_2 (struct scc_channel*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3)
{
 struct scc_channel *VAR_4 = (struct scc_channel *) VAR_3;

 FUNC_0(&VAR_4->tx_wdog);

 FUNC_1(VAR_4, VAR_1);
 if(VAR_4->kiss.mintime)
  FUNC_2(VAR_4, VAR_2, VAR_4->kiss.mintime*100);
 VAR_4->stat.tx_state = VAR_0;
}
