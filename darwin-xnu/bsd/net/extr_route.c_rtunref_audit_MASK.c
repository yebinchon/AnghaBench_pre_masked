
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct rtentry_dbg {scalar_t__ rtd_inuse; int * rtd_refrele; int rtd_refrele_cnt; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct rtentry_dbg*) ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_3(struct rtentry_dbg *VAR_4)
{
 uint16_t VAR_5;

 if (VAR_4->rtd_inuse != VAR_1) {
  FUNC_2("rtunref: on freed rte=%p\n", VAR_4);

 }
 VAR_5 = FUNC_0(&VAR_4->rtd_refrele_cnt, 1) % VAR_0;
 if (VAR_3 & VAR_2)
  FUNC_1(&VAR_4->rtd_refrele[VAR_5]);
}
