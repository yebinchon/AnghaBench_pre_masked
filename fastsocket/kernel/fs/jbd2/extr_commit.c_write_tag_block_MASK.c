
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u32 ;
struct TYPE_3__ {void* t_blocknr_high; void* t_blocknr; } ;
typedef TYPE_1__ journal_block_tag_t ;


 int VAR_0 ;
 void* FUNC_0 (unsigned long long) ;

__attribute__((used)) static void FUNC_1(int VAR_1, journal_block_tag_t *VAR_2,
       unsigned long long VAR_3)
{
 VAR_2->t_blocknr = FUNC_0(VAR_3 & (u32)~0);
 if (VAR_1 > VAR_0)
  VAR_2->t_blocknr_high = FUNC_0((VAR_3 >> 31) >> 1);
}
