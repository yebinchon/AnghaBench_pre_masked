
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int lck_mtx_state; } ;
typedef TYPE_1__ lck_mtx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int,int,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_6(
 lck_mtx_t *VAR_3,
 uint32_t VAR_4,
 uint32_t VAR_5,
 uint32_t *VAR_6)
{
 uint32_t VAR_7, VAR_8;
 VAR_7 = *VAR_6;

 for ( ; ; ) {

  while (FUNC_0(VAR_7 & (VAR_1 | VAR_4))) {
   FUNC_2();
   VAR_7 = FUNC_5(VAR_3);
  }
  VAR_8 = VAR_7;
  VAR_7 |= VAR_1 | VAR_4;
  VAR_7 &= ~VAR_5;

  FUNC_3();
  if (FUNC_1(&VAR_3->lck_mtx_state, VAR_8, VAR_7, VAR_2, VAR_0))
   break;
  FUNC_4();
  FUNC_2();
  VAR_7 = FUNC_5(VAR_3);
 }
 *VAR_6 = VAR_7;
 return;
}
