
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int year; scalar_t__ month; scalar_t__ day; } ;
typedef TYPE_1__ efi_time_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static inline int
FUNC_1(efi_time_t *VAR_0)
{

 return FUNC_0(VAR_0->day - 1, VAR_0->month - 1, VAR_0->year);
}
