
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rwlock_t ;
struct TYPE_2__ {scalar_t__ ibf; int status_io; int ibf_lock; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_6(void)
{
 unsigned long VAR_2;
 rwlock_t *VAR_3;

 VAR_3 = &VAR_1.ibf_lock;

 FUNC_0(VAR_3, VAR_2);
 if (!VAR_1.ibf) {
  FUNC_2(VAR_3, VAR_2);
  return;
 }
 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
 while (FUNC_3(VAR_1.status_io) & VAR_0)
  { }
 VAR_1.ibf = 0;
 FUNC_5(VAR_3, VAR_2);
}
