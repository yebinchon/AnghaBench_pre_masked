
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ wSeqCtl; int wFrameCtl; int * abyAddr2; } ;
struct TYPE_8__ {scalar_t__ uInPtr; TYPE_1__* asCacheEntry; } ;
struct TYPE_7__ {scalar_t__ wFmSequence; int wFrameCtl; int * abyAddr2; } ;
typedef TYPE_1__* PSCacheEntry ;
typedef TYPE_2__* PSCache ;
typedef TYPE_3__* PS802_11Header ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int *,int ) ;

BOOL FUNC_5 (PSCache VAR_4, PS802_11Header VAR_5)
{
    UINT VAR_6;
    UINT VAR_7;
    PSCacheEntry VAR_8;

    if (FUNC_2(VAR_5)) {

        VAR_6 = VAR_4->uInPtr;
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            VAR_8 = &(VAR_4->asCacheEntry[VAR_6]);
            if ((VAR_8->wFmSequence == VAR_5->wSeqCtl) &&
                (FUNC_1 (&(VAR_8->abyAddr2[0]), &(VAR_5->abyAddr2[0]))) &&
                (FUNC_3(VAR_8->wFrameCtl) == FUNC_3(VAR_5->wFrameCtl))
                ) {

                return VAR_2;
            }
            FUNC_0(VAR_6, VAR_0);
        }
    }

    VAR_8 = &VAR_4->asCacheEntry[VAR_4->uInPtr];
    VAR_8->wFmSequence = VAR_5->wSeqCtl;
    FUNC_4(&(VAR_8->abyAddr2[0]), &(VAR_5->abyAddr2[0]), VAR_3);
    VAR_8->wFrameCtl = VAR_5->wFrameCtl;
    FUNC_0(VAR_4->uInPtr, VAR_0);
    return VAR_1;
}
