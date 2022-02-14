
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lck_rw_interlock; } ;
typedef TYPE_1__ lck_rw_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline boolean_t
FUNC_2(lck_rw_t *VAR_1)
{
 boolean_t VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->lck_rw_interlock);
 return VAR_2;
}
