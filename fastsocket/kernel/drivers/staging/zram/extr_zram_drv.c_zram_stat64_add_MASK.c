
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct zram {int stat64_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct zram *VAR_0, u64 *VAR_1, u64 VAR_2)
{
 FUNC_0(&VAR_0->stat64_lock);
 *VAR_1 = *VAR_1 + VAR_2;
 FUNC_1(&VAR_0->stat64_lock);
}
