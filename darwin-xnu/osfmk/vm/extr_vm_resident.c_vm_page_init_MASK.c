
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ ppnum_t ;
typedef int boolean_t ;
struct TYPE_5__ {int vmp_lopage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

void
FUNC_5(
 vm_page_t VAR_5,
 ppnum_t VAR_6,
 boolean_t VAR_7)
{
 FUNC_1(VAR_6);
 *VAR_5 = VAR_4;

 FUNC_0(VAR_5, VAR_6);
 VAR_5->vmp_lopage = VAR_7;
}
