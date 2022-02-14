
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tx_ring_info {int * descr; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct tx_ring_info *VAR_3, int VAR_4,
   u64 VAR_5, u64 VAR_6, u64 VAR_7,
   u64 VAR_8)
{
 __le64 *VAR_9 = &VAR_3->descr[VAR_4];

 *VAR_9 = FUNC_0(VAR_7 |
       (VAR_8 << VAR_0) |
       (VAR_6 << VAR_2) |
       (VAR_5 & VAR_1));
}
