
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int pt_entry_t ;
typedef scalar_t__ ppnum_t ;
typedef TYPE_1__* pmap_t ;
typedef int pd_entry_t ;
typedef int boolean_t ;
typedef int addr64_t ;
struct TYPE_6__ {int ref_count; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int* VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int* FUNC_5 (TYPE_1__*,int ) ;
 int* FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;

ppnum_t
FUNC_9(pmap_t VAR_3, addr64_t VAR_4)
{
 pt_entry_t *VAR_5;
 pd_entry_t *VAR_6;
 ppnum_t VAR_7 = 0;
 pd_entry_t VAR_8;
 pt_entry_t VAR_9;
 boolean_t VAR_10;

 VAR_10 = FUNC_2(VAR_3);

 FUNC_3();






 if (!VAR_3->ref_count)
  goto pfp_exit;

 VAR_6 = FUNC_5(VAR_3, VAR_4);

 if ((VAR_6 != VAR_0) && ((VAR_8 = *VAR_6) & FUNC_0(VAR_10))) {
  if (VAR_8 & VAR_1) {
   VAR_7 = (ppnum_t) FUNC_1(FUNC_7(VAR_8));
   VAR_7 += (ppnum_t) FUNC_8(VAR_4);
  }
  else {
   VAR_5 = FUNC_6(VAR_3, VAR_4);
   if ((VAR_2 != VAR_5) && (((VAR_9 = *VAR_5) & FUNC_0(VAR_10)) != 0)) {
    VAR_7 = (ppnum_t) FUNC_1(FUNC_7(VAR_9));
   }
  }
 }
pfp_exit:
 FUNC_4();

        return VAR_7;
}
