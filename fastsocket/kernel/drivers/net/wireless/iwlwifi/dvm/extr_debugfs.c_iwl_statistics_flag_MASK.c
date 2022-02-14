
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flag; int lock; } ;
struct iwl_priv {TYPE_1__ statistics; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_3(struct iwl_priv *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7;

 FUNC_1(&VAR_3->statistics.lock);

 VAR_7 = FUNC_0(VAR_3->statistics.flag);

 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "Statistics Flag(0x%X):\n", VAR_7);
 if (VAR_7 & VAR_0)
  VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6,
  "\tStatistics have been cleared\n");
 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "\tOperational Frequency: %s\n",
  (VAR_7 & VAR_1)
  ? "2.4 GHz" : "5.2 GHz");
 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "\tTGj Narrow Band: %s\n",
  (VAR_7 & VAR_2)
   ? "enabled" : "disabled");

 return VAR_6;
}
