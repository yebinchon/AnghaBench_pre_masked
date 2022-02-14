
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* par_out; TYPE_2__* par_in; } ;
struct TYPE_7__ {int extradata_size; scalar_t__ extradata; } ;
struct TYPE_6__ {char* extradata; } ;
typedef TYPE_3__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (scalar_t__,int ,int*,int *,int *) ;

__attribute__((used)) static int FUNC_2(AVBSFContext *VAR_1)
{
    if (VAR_1->par_in->extradata) {
        int VAR_2 = -1;
        FUNC_1(VAR_1->par_in->extradata, VAR_1->par_in->extradata_size, &VAR_2, ((void*)0), ((void*)0));
        if (VAR_2 >= 0) {
            FUNC_0(VAR_1, VAR_0,
                   "Updating DivX userdata (remove trailing 'p') in extradata.\n");
            VAR_1->par_out->extradata[VAR_2] = '\0';
        }
    }

    return 0;
}
