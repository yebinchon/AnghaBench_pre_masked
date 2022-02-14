
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_free_space_ctl {int unit; } ;
struct btrfs_free_space {int bytes; int bitmap; int offset; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (scalar_t__,int ) ;
 unsigned long FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct btrfs_free_space_ctl *VAR_1,
           struct btrfs_free_space *VAR_2,
           u64 VAR_3, u64 VAR_4)
{
 unsigned long VAR_5, VAR_6;

 VAR_5 = FUNC_3(VAR_2->offset, VAR_1->unit, VAR_3);
 VAR_6 = FUNC_2(VAR_4, VAR_1->unit);
 FUNC_0(VAR_5 + VAR_6 > VAR_0);

 FUNC_1(VAR_2->bitmap, VAR_5, VAR_6);

 VAR_2->bytes -= VAR_4;
}
