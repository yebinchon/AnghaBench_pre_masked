
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;
struct TYPE_9__ {scalar_t__ nitems; } ;
struct TYPE_8__ {int extrelocs; int locrelocs; int symtab; TYPE_5__ segs; } ;
typedef int KXLDSeg ;
typedef TYPE_1__ KXLDObject ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int * FUNC_1 (TYPE_5__*,scalar_t__) ;
 int * FUNC_2 (TYPE_1__ const*,int ) ;
 int FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*) ;

__attribute__((used)) static u_long
FUNC_9(const KXLDObject *VAR_1)
{
    KXLDSeg *VAR_2 = ((void*)0);
    u_long VAR_3 = 0;
    u_int VAR_4 = 0;

    FUNC_0(VAR_1);


    for (VAR_4 = 0; VAR_4 < VAR_1->segs.nitems; ++VAR_4) {
        VAR_2 = FUNC_1(&VAR_1->segs, VAR_4);
        VAR_3 += (u_long) FUNC_6(VAR_2);
    }
    return VAR_3;
}
