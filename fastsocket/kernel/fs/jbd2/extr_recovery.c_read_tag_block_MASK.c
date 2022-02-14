
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int t_blocknr_high; int t_blocknr; } ;
typedef TYPE_1__ journal_block_tag_t ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned long long FUNC_1(int VAR_1, journal_block_tag_t *VAR_2)
{
 unsigned long long VAR_3 = FUNC_0(VAR_2->t_blocknr);
 if (VAR_1 > VAR_0)
  VAR_3 |= (u64)FUNC_0(VAR_2->t_blocknr_high) << 32;
 return VAR_3;
}
