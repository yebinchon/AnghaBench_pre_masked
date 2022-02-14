
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rx_ring_info {int rx_channel; scalar_t__ syn_threshold; scalar_t__ syn_window; scalar_t__ nonsyn_threshold; scalar_t__ nonsyn_window; } ;
struct niu {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_4, struct rx_ring_info *VAR_5)
{
 u64 VAR_6;

 VAR_6 = (((u64)VAR_5->nonsyn_window << VAR_2) |
        ((u64)VAR_5->nonsyn_threshold << VAR_0) |
        ((u64)VAR_5->syn_window << VAR_3) |
        ((u64)VAR_5->syn_threshold << VAR_1));
 FUNC_1(FUNC_0(VAR_5->rx_channel), VAR_6);
}
