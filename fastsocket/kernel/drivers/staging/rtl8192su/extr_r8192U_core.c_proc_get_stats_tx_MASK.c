
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txviokint; int txvierr; int txvookint; int txvoerr; int txbeokint; int txdatapkt; int txbkdrop; int txbedrop; int txvodrop; int txvidrop; int txoverflow; int txresumed; int txbeaconerr; int txbeaconokint; int txmanageerr; int txmanageokint; int txbkerr; int txbkokint; int txbeerr; } ;
struct r8192_priv {TYPE_1__ stats; int * tx_pending; } ;
struct net_device {int dummy; } ;
typedef int off_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (char*,int,char*,int,int,int,int,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_4, char **VAR_5,
     off_t VAR_6, int VAR_7,
     int *VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = VAR_9;
 struct r8192_priv *VAR_11 = (struct r8192_priv *)FUNC_1(VAR_10);

 int VAR_12 = 0;

 VAR_12 += FUNC_3(VAR_4 + VAR_12, VAR_7 - VAR_12,
  "TX VI priority ok int: %lu\n"
  "TX VI priority error int: %lu\n"
  "TX VO priority ok int: %lu\n"
  "TX VO priority error int: %lu\n"
  "TX BE priority ok int: %lu\n"
  "TX BE priority error int: %lu\n"
  "TX BK priority ok int: %lu\n"
  "TX BK priority error int: %lu\n"
  "TX MANAGE priority ok int: %lu\n"
  "TX MANAGE priority error int: %lu\n"
  "TX BEACON priority ok int: %lu\n"
  "TX BEACON priority error int: %lu\n"


  "TX queue resume: %lu\n"
  "TX queue stopped?: %d\n"
  "TX fifo overflow: %lu\n"

  "TX VI queue: %d\n"
  "TX VO queue: %d\n"
  "TX BE queue: %d\n"
  "TX BK queue: %d\n"

  "TX VI dropped: %lu\n"
  "TX VO dropped: %lu\n"
  "TX BE dropped: %lu\n"
  "TX BK dropped: %lu\n"
  "TX total data packets %lu\n",

  VAR_11->stats.txviokint,
  VAR_11->stats.txvierr,
  VAR_11->stats.txvookint,
  VAR_11->stats.txvoerr,
  VAR_11->stats.txbeokint,
  VAR_11->stats.txbeerr,
  VAR_11->stats.txbkokint,
  VAR_11->stats.txbkerr,
  VAR_11->stats.txmanageokint,
  VAR_11->stats.txmanageerr,
  VAR_11->stats.txbeaconokint,
  VAR_11->stats.txbeaconerr,


  VAR_11->stats.txresumed,
  FUNC_2(VAR_10),
  VAR_11->stats.txoverflow,

  FUNC_0(&(VAR_11->tx_pending[VAR_2])),
  FUNC_0(&(VAR_11->tx_pending[VAR_3])),
  FUNC_0(&(VAR_11->tx_pending[VAR_0])),
  FUNC_0(&(VAR_11->tx_pending[VAR_1])),

  VAR_11->stats.txvidrop,
  VAR_11->stats.txvodrop,
  VAR_11->stats.txbedrop,
  VAR_11->stats.txbkdrop,
  VAR_11->stats.txdatapkt

  );

 *VAR_8 = 1;
 return VAR_12;
}
