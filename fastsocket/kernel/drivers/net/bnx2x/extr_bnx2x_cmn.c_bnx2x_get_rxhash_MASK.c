
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct eth_fast_path_rx_cqe {int status_flags; int rss_hash_result; } ;
struct bnx2x {TYPE_1__* dev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(const struct bnx2x *VAR_2,
       const struct eth_fast_path_rx_cqe *VAR_3)
{

 if ((VAR_2->dev->features & VAR_1) &&
     (VAR_3->status_flags & VAR_0))
  return FUNC_0(VAR_3->rss_hash_result);
 return 0;
}
