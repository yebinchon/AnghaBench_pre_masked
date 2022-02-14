
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long txnpokint; unsigned long txhpokint; unsigned long txlpokint; int txbeaconerr; int txbeacon; int txretry; scalar_t__ txlperr; scalar_t__ txhperr; scalar_t__ txnperr; } ;
struct r8180_priv {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
typedef int off_t ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (char*,int,char*,unsigned long,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char **VAR_1,
     off_t VAR_2, int VAR_3,
     int *VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct r8180_priv *VAR_7 = (struct r8180_priv *)FUNC_0(VAR_6);

 int VAR_8 = 0;
 unsigned long VAR_9;

 VAR_9=VAR_7->stats.txnpokint+VAR_7->stats.txhpokint+VAR_7->stats.txlpokint;
 VAR_8 += FUNC_1(VAR_0 + VAR_8, VAR_3 - VAR_8,
  "TX OK: %lu\n"
  "TX Error: %lu\n"
  "TX Retry: %lu\n"
  "TX beacon OK: %lu\n"
  "TX beacon error: %lu\n",
  VAR_9,
  VAR_7->stats.txnperr+VAR_7->stats.txhperr+VAR_7->stats.txlperr,
  VAR_7->stats.txretry,
  VAR_7->stats.txbeacon,
  VAR_7->stats.txbeaconerr
 );

 *VAR_4 = 1;
 return VAR_8;
}
