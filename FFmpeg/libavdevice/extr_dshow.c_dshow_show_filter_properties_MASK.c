
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pElems; int cElems; int member_0; } ;
struct TYPE_5__ {scalar_t__ pGraph; int achName; int member_0; } ;
typedef int IUnknown ;
typedef int ISpecifyPropertyPages ;
typedef int IBaseFilter ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ FILTER_INFO ;
typedef TYPE_2__ CAUUID ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,int ,int ,int,int **,int ,scalar_t__,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int *,int ,char*) ;

void
FUNC_9(IBaseFilter *VAR_5, AVFormatContext *VAR_6) {
    ISpecifyPropertyPages *VAR_7 = ((void*)0);
    IUnknown *VAR_8 = ((void*)0);
    HRESULT VAR_9;
    FILTER_INFO VAR_10 = {0};
    CAUUID VAR_11 = {0};

    VAR_9 = FUNC_2(VAR_5, &VAR_2, (void **)&VAR_7);
    if (VAR_9 != VAR_4) {
        FUNC_8(VAR_6, VAR_1, "requested filter does not have a property page to show");
        goto end;
    }
    VAR_9 = FUNC_1(VAR_5, &VAR_10);
    if (VAR_9 != VAR_4) {
        goto fail;
    }
    VAR_9 = FUNC_2(VAR_5, &VAR_3, (void **)&VAR_8);
    if (VAR_9 != VAR_4) {
        goto fail;
    }
    VAR_9 = FUNC_4(VAR_7, &VAR_11);
    if (VAR_9 != VAR_4) {
        goto fail;
    }
    VAR_9 = FUNC_7(((void*)0), 0, 0, VAR_10.achName, 1, &VAR_8, VAR_11.cElems,
        VAR_11.pElems, 0, 0, ((void*)0));
    if (VAR_9 != VAR_4) {
        goto fail;
    }
    goto end;
fail:
    FUNC_8(VAR_6, VAR_0, "Failure showing property pages for filter");
end:
    if (VAR_7)
        FUNC_5(VAR_7);
    if (VAR_8)
        FUNC_6(VAR_8);
    if (VAR_10.pGraph)
        FUNC_3(VAR_10.pGraph);
    if (VAR_11.pElems)
        FUNC_0(VAR_11.pElems);
}
