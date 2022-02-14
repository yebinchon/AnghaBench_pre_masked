
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct rtentry {int rt_flags; struct llinfo_nd6* rt_llinfo; } ;
struct llinfo_nd6 {scalar_t__ ln_expire; scalar_t__ ln_state; } ;


 int FUNC_0 (struct llinfo_nd6*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct llinfo_nd6*,scalar_t__) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct rtentry *VAR_4)
{
 struct llinfo_nd6 *VAR_5 = VAR_4->rt_llinfo;
 uint64_t VAR_6 = FUNC_2();




 if (!VAR_5 || VAR_5->ln_expire == 0 ||
     (VAR_4->rt_flags & VAR_3) ||
     !(VAR_4->rt_flags & VAR_2)) {
  return;
 }

 if ((VAR_5->ln_state > VAR_0) &&
     (VAR_5->ln_state < VAR_1)) {
  if (VAR_5->ln_expire > VAR_6) {
   FUNC_1(VAR_5, VAR_6);
   FUNC_0(VAR_5, VAR_1);
  }
 }
 return;
}
