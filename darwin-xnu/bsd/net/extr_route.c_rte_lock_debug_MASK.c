
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct rtentry_dbg {int * rtd_lock; int rtd_lock_cnt; } ;
struct rtentry {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtentry*) ;
 size_t FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_3(struct rtentry_dbg *VAR_3)
{
 uint32_t VAR_4;

 FUNC_0((struct rtentry *)VAR_3);
 VAR_4 = FUNC_1(&VAR_3->rtd_lock_cnt, 1) % VAR_0;
 if (VAR_2 & VAR_1)
  FUNC_2(&VAR_3->rtd_lock[VAR_4]);
}
