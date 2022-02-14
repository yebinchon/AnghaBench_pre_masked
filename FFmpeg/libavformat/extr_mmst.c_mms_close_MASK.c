
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int asf_header; int streams; scalar_t__ mms_hd; } ;
struct TYPE_7__ {TYPE_3__ mms; } ;
typedef TYPE_2__ MMSTContext ;
typedef TYPE_3__ MMSContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_0)
{
    MMSTContext *VAR_1 = (MMSTContext *)VAR_0->priv_data;
    MMSContext *VAR_2 = &VAR_1->mms;
    if(VAR_2->mms_hd) {
        FUNC_2(VAR_1);
        FUNC_1(VAR_2->mms_hd);
    }


    FUNC_0(&VAR_2->streams);
    FUNC_0(&VAR_2->asf_header);

    return 0;
}
