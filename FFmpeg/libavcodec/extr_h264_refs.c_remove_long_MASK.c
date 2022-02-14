
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int long_ref_count; TYPE_1__** long_ref; } ;
struct TYPE_7__ {int long_ref; } ;
typedef TYPE_1__ H264Picture ;
typedef TYPE_2__ H264Context ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static H264Picture *FUNC_2(H264Context *VAR_0, int VAR_1, int VAR_2)
{
    H264Picture *VAR_3;

    VAR_3 = VAR_0->long_ref[VAR_1];
    if (VAR_3) {
        if (FUNC_1(VAR_0, VAR_3, VAR_2)) {
            FUNC_0(VAR_0->long_ref[VAR_1]->long_ref == 1);
            VAR_0->long_ref[VAR_1]->long_ref = 0;
            VAR_0->long_ref[VAR_1] = ((void*)0);
            VAR_0->long_ref_count--;
        }
    }

    return VAR_3;
}
