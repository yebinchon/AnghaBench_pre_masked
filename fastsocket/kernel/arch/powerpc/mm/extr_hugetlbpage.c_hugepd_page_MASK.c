
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pte_t ;
struct TYPE_3__ {int pd; } ;
typedef TYPE_1__ hugepd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline pte_t *FUNC_1(hugepd_t VAR_1)
{
 FUNC_0(!(VAR_1.pd & VAR_0));
 return (pte_t *)(VAR_1.pd & ~VAR_0);
}
