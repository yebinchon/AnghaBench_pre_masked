
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct il_priv {int lock; TYPE_3__* txq; scalar_t__ scd_base_addr; TYPE_1__* cfg; } ;
struct TYPE_5__ {int read_ptr; int write_ptr; } ;
struct TYPE_6__ {TYPE_2__ q; } ;
struct TYPE_4__ {int num_of_ampdu_queues; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct il_priv*,int,int) ;
 int FUNC_4 (struct il_priv*,int,int) ;
 int FUNC_5 (struct il_priv*,int,int) ;
 int FUNC_6 (struct il_priv*,TYPE_3__*,int,int) ;
 int FUNC_7 (struct il_priv*,int) ;
 int FUNC_8 (struct il_priv*,int ,int) ;
 int FUNC_9 (struct il_priv*,scalar_t__,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_12(struct il_priv *VAR_10, int VAR_11, int VAR_12, int VAR_13,
        int VAR_14, u16 VAR_15)
{
 unsigned long VAR_16;
 u16 VAR_17;
 int VAR_18;

 if ((VAR_1 > VAR_11) ||
     (VAR_1 +
      VAR_10->cfg->num_of_ampdu_queues <= VAR_11)) {
  FUNC_2("queue number out of range: %d, must be %d to %d\n",
   VAR_11, VAR_1,
   VAR_1 +
   VAR_10->cfg->num_of_ampdu_queues - 1);
  return -VAR_0;
 }

 VAR_17 = FUNC_0(VAR_13, VAR_14);


 VAR_18 = FUNC_4(VAR_10, VAR_13, VAR_14);
 if (VAR_18)
  return VAR_18;

 FUNC_10(&VAR_10->lock, VAR_16);


 FUNC_7(VAR_10, VAR_11);


 FUNC_5(VAR_10, VAR_17, VAR_11);


 FUNC_8(VAR_10, VAR_3, (1 << VAR_11));



 VAR_10->txq[VAR_11].q.read_ptr = (VAR_15 & 0xff);
 VAR_10->txq[VAR_11].q.write_ptr = (VAR_15 & 0xff);
 FUNC_3(VAR_10, VAR_11, VAR_15);


 FUNC_9(VAR_10,
     VAR_10->scd_base_addr +
     FUNC_1(VAR_11),
     (VAR_9 << VAR_5)
     & VAR_4);

 FUNC_9(VAR_10,
     VAR_10->scd_base_addr +
     FUNC_1(VAR_11) + sizeof(u32),
     (VAR_8 <<
      VAR_7) &
     VAR_6);

 FUNC_8(VAR_10, VAR_2, (1 << VAR_11));


 FUNC_6(VAR_10, &VAR_10->txq[VAR_11], VAR_12, 1);

 FUNC_11(&VAR_10->lock, VAR_16);

 return 0;
}
