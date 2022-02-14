
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct cas {int * stat_lock; TYPE_1__* net_stats; } ;
struct TYPE_2__ {int rx_dropped; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,struct cas*,int const) ;
 int FUNC_3 (struct net_device*,struct cas*,int ) ;
 int FUNC_4 (struct cas*,int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct net_device *VAR_5,
      struct cas *VAR_6, const u32 VAR_7)
{

 if (VAR_7 & VAR_0)
  FUNC_2(VAR_5, VAR_6, VAR_7);

 if (VAR_7 & VAR_2) {



  FUNC_4(VAR_6, 0, 0);
  FUNC_5(&VAR_6->stat_lock[0]);
  VAR_6->net_stats[0].rx_dropped++;
  FUNC_6(&VAR_6->stat_lock[0]);
 } else if (VAR_7 & VAR_1) {
  FUNC_4(VAR_6, 0, FUNC_1(0) -
        FUNC_0(0));
 }

 if (VAR_7 & (VAR_3 | VAR_4))
  FUNC_3(VAR_5, VAR_6, 0);
}
