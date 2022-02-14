
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ want_upgrade; scalar_t__ want_excl; int data; } ;
typedef TYPE_1__ lck_rw_word_t ;
typedef int lck_rw_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

boolean_t
FUNC_5(lck_rw_t *VAR_3, boolean_t VAR_4)
{
 lck_rw_word_t VAR_5;

 FUNC_0(VAR_3, VAR_1);

 VAR_5.data = FUNC_4(VAR_3);
 if (VAR_5.want_excl || VAR_5.want_upgrade || VAR_4) {
  FUNC_2(VAR_3);
  FUNC_3(2);
  FUNC_1(VAR_3);
  return VAR_2;
 }

 return VAR_0;
}
