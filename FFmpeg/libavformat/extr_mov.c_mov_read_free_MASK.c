
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int content ;
struct TYPE_6__ {int size; } ;
struct TYPE_5__ {scalar_t__ use_mfra_for; int found_mdat; int found_moov; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef int AVIOContext ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int FUNC_3(MOVContext *VAR_2, AVIOContext *VAR_3, MOVAtom VAR_4)
{
    int VAR_5;
    uint8_t VAR_6[16];

    if (VAR_4.size < 8)
        return 0;

    VAR_5 = FUNC_1(VAR_3, VAR_6, FUNC_0(sizeof(VAR_6), VAR_4.size));
    if (VAR_5 < 0)
        return VAR_5;

    if ( !VAR_2->found_moov
        && !VAR_2->found_mdat
        && !FUNC_2(VAR_6, "Anevia\x1A\x1A", 8)
        && VAR_2->use_mfra_for == VAR_0) {
        VAR_2->use_mfra_for = VAR_1;
    }

    return 0;
}
