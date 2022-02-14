
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rxurberr; int rxstaterr; int rxoktotal; } ;
struct r8192_priv {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
typedef int off_t ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (char*,int,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char **VAR_1,
     off_t VAR_2, int VAR_3,
     int *VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct r8192_priv *VAR_7 = (struct r8192_priv *)FUNC_0(VAR_6);

 int VAR_8 = 0;

 VAR_8 += FUNC_1(VAR_0 + VAR_8, VAR_3 - VAR_8,
  "RX packets: %lu\n"
  "RX urb status error: %lu\n"
  "RX invalid urb error: %lu\n",
  VAR_7->stats.rxoktotal,
  VAR_7->stats.rxstaterr,
  VAR_7->stats.rxurberr);

 *VAR_4 = 1;
 return VAR_8;
}
