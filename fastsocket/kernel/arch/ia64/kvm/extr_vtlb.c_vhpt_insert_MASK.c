
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_rr {int ps; int val; } ;
typedef unsigned long u64 ;
struct thash_data {unsigned long page_flags; int itir; unsigned long gpaddr; int etag; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(u64 VAR_3, u64 VAR_4, u64 VAR_5, u64 VAR_6)
{
 union ia64_rr VAR_7;
 struct thash_data *VAR_8;
 unsigned long VAR_9, VAR_10;

 VAR_9 = FUNC_4(VAR_4);
 VAR_7.val = FUNC_0(VAR_5);

  VAR_10 = ((VAR_6 & VAR_2) >> VAR_9 << VAR_9) |
     (VAR_5 & ((1UL << VAR_9) - 1));

 VAR_8 = (struct thash_data *)FUNC_2(VAR_5);
 VAR_8->etag = VAR_0;
 FUNC_1();
 VAR_8->page_flags = VAR_3 & ~VAR_1;
 VAR_8->itir = VAR_7.ps << 2;
 VAR_8->etag = FUNC_3(VAR_5);
 VAR_8->gpaddr = VAR_10;
}
