
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_free_space_ctl {int unit; int start; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static inline u64 FUNC_1(struct btrfs_free_space_ctl *VAR_1,
       u64 VAR_2)
{
 u64 VAR_3;
 u64 VAR_4;

 VAR_4 = VAR_0 * VAR_1->unit;
 VAR_3 = VAR_2 - VAR_1->start;
 VAR_3 = FUNC_0(VAR_3, VAR_4);
 VAR_3 *= VAR_4;
 VAR_3 += VAR_1->start;

 return VAR_3;
}
