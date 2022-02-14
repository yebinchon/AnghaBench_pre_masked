
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lck_mtx_type; scalar_t__ lck_mtx_tag; } ;
typedef TYPE_1__ lck_mtx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_1(lck_mtx_t *VAR_2)
{
 if (VAR_2->lck_mtx_type != VAR_1)
  FUNC_0("Invalid mutex %p", VAR_2);




}
