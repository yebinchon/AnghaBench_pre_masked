
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ lck_rw_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline boolean_t
FUNC_1(lck_rw_t *VAR_5)
{
 if (FUNC_0(&VAR_5->data) & (VAR_2 | VAR_1 | VAR_3))
  return VAR_4;
 return VAR_0;
}
