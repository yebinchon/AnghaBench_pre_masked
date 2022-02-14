
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_4__ {int segname; } ;
typedef TYPE_1__ KXLDSeg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ,int) ;

boolean_t
FUNC_2(const KXLDSeg *VAR_2)
{
    boolean_t VAR_3 = VAR_0;

    FUNC_0(VAR_2);
    VAR_3 = !FUNC_1(VAR_2->segname, VAR_1, sizeof(VAR_2->segname));

    return VAR_3;
}
