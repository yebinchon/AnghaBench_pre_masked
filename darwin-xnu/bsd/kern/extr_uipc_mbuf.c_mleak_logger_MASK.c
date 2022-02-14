
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int mcache_obj_t ;
typedef int boolean_t ;
struct TYPE_2__ {int mleak_sample_factor; int mleak_capture; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (uintptr_t*,int) ;
 scalar_t__ VAR_1 ;
 void FUNC_2 (int *) ;
 int FUNC_3 (uintptr_t*,int *,int,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_4(u_int32_t VAR_3, mcache_obj_t *VAR_4, boolean_t VAR_5)
{
 int VAR_6;

 if (VAR_1 == 0)
  return;

 if (!VAR_5)
  return (FUNC_2(VAR_4));

 VAR_6 = FUNC_0(&VAR_2.mleak_capture, 1);

 if ((VAR_6 % VAR_2.mleak_sample_factor) == 0 && VAR_4 != ((void*)0)) {
  uintptr_t VAR_7[VAR_0];
  int VAR_8 = FUNC_1(VAR_7, VAR_0);
  FUNC_3(VAR_7, VAR_4, VAR_8, VAR_3);
 }
}
