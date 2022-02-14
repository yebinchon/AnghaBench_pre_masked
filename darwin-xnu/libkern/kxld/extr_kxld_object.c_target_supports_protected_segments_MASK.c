
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ cputype; scalar_t__ is_final_image; } ;
typedef TYPE_1__ KXLDObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_0(const KXLDObject *VAR_3)
{
    return (VAR_3->is_final_image &&
            (VAR_3->cputype == VAR_2 ||
             VAR_3->cputype == VAR_0 ||
             VAR_3->cputype == VAR_1));
}
