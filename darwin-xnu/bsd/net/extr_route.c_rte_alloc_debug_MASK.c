
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry_dbg {int rtd_inuse; int rtd_alloc; } ;
struct rtentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtentry_dbg*,int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline struct rtentry *
FUNC_3(void)
{
 struct rtentry_dbg *VAR_4;

 VAR_4 = ((struct rtentry_dbg *)FUNC_2(VAR_3));
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4, sizeof (*VAR_4));
  if (VAR_2 & VAR_1)
   FUNC_1(&VAR_4->rtd_alloc);
  VAR_4->rtd_inuse = VAR_0;
 }
 return ((struct rtentry *)VAR_4);
}
