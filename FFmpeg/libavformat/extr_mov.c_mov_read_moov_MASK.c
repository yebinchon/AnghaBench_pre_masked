
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int size; } ;
struct TYPE_7__ {int found_moov; int fc; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *,TYPE_2__) ;

__attribute__((used)) static int FUNC_3(MOVContext *VAR_1, AVIOContext *VAR_2, MOVAtom VAR_3)
{
    int VAR_4;

    if (VAR_1->found_moov) {
        FUNC_0(VAR_1->fc, VAR_0, "Found duplicated MOOV Atom. Skipped it\n");
        FUNC_1(VAR_2, VAR_3.size);
        return 0;
    }

    if ((VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3)) < 0)
        return VAR_4;


    VAR_1->found_moov=1;
    return 0;
}
