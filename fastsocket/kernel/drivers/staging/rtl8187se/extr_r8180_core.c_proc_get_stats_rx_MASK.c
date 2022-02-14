
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rxicverr; int rxcrcerrmax; int rxcrcerrmid; int rxcrcerrmin; int rxerr; int rxint; } ;
struct r8180_priv {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
typedef int off_t ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (char*,int,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char **VAR_1,
     off_t VAR_2, int VAR_3,
     int *VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct r8180_priv *VAR_7 = (struct r8180_priv *)FUNC_0(VAR_6);

 int VAR_8 = 0;

 VAR_8 += FUNC_1(VAR_0 + VAR_8, VAR_3 - VAR_8,
  "RX OK: %lu\n"
  "RX Retry: %lu\n"
  "RX CRC Error(0-500): %lu\n"
  "RX CRC Error(500-1000): %lu\n"
  "RX CRC Error(>1000): %lu\n"
  "RX ICV Error: %lu\n",
  VAR_7->stats.rxint,
  VAR_7->stats.rxerr,
  VAR_7->stats.rxcrcerrmin,
  VAR_7->stats.rxcrcerrmid,
  VAR_7->stats.rxcrcerrmax,
  VAR_7->stats.rxicverr
  );

 *VAR_4 = 1;
 return VAR_8;
}
