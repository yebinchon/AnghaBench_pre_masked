
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct bnx2 {scalar_t__ temp_stats_blk; scalar_t__ stats_blk; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 unsigned long* VAR_7 ;
 int FUNC_1 (int*,int ,int) ;
 struct bnx2* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_8,
  struct ethtool_stats *VAR_9, u64 *VAR_10)
{
 struct bnx2 *VAR_11 = FUNC_2(VAR_8);
 int VAR_12;
 u32 *VAR_13 = (u32 *) VAR_11->stats_blk;
 u32 *VAR_14 = (u32 *) VAR_11->temp_stats_blk;
 u8 *VAR_15 = ((void*)0);

 if (VAR_13 == ((void*)0)) {
  FUNC_1(VAR_10, 0, sizeof(u64) * VAR_4);
  return;
 }

 if ((FUNC_0(VAR_11) == VAR_0) ||
     (FUNC_0(VAR_11) == VAR_1) ||
     (FUNC_0(VAR_11) == VAR_2) ||
     (FUNC_0(VAR_11) == VAR_3))
  VAR_15 = VAR_5;
 else
  VAR_15 = VAR_6;

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  unsigned long VAR_16;

  if (VAR_15[VAR_12] == 0) {

   VAR_10[VAR_12] = 0;
   continue;
  }

  VAR_16 = VAR_7[VAR_12];
  if (VAR_15[VAR_12] == 4) {

   VAR_10[VAR_12] = (u64) *(VAR_13 + VAR_16) +
     *(VAR_14 + VAR_16);
   continue;
  }

  VAR_10[VAR_12] = (((u64) *(VAR_13 + VAR_16)) << 32) +
    *(VAR_13 + VAR_16 + 1) +
    (((u64) *(VAR_14 + VAR_16)) << 32) +
    *(VAR_14 + VAR_16 + 1);
 }
}
