
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int lck_mtx_state; } ;
typedef TYPE_1__ lck_mtx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;

__attribute__((used)) static inline int
FUNC_3(
 lck_mtx_t *VAR_3,
 uint32_t VAR_4,
 uint32_t *VAR_5)
{
 uint32_t VAR_6, VAR_7;
 VAR_6 = *VAR_5;


 if (VAR_6 & (VAR_1 | VAR_4)) {
  return 0;
 }
 VAR_7 = VAR_6;
 VAR_6 |= VAR_1 | VAR_4;
 FUNC_1();
 if (FUNC_0(&VAR_3->lck_mtx_state, VAR_7, VAR_6, VAR_2, VAR_0)) {
   *VAR_5 = VAR_6;
   return 1;
 }

 FUNC_2();
 return 0;
}
