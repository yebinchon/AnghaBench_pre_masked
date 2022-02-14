
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* cpx_t ;
struct TYPE_4__ {size_t cpx_max_key_len; scalar_t__ cpx_key_len; scalar_t__ cpx_flags; int cpx_magic1; } ;


 int * FUNC_0 (int ,TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_2 ;

void FUNC_2(cpx_t VAR_3, size_t VAR_4)
{




 VAR_3->cpx_flags = 0;
 VAR_3->cpx_key_len = 0;
 VAR_3->cpx_max_key_len = VAR_4;
}
