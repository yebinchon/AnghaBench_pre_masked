
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int ism_lookahead; } ;
struct TYPE_7__ {int nb_frag_info; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ MOVMuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_1, MOVMuxContext *VAR_2,
                               MOVTrack *VAR_3)
{
    int64_t VAR_4 = FUNC_1(VAR_1);
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_2->ism_lookahead; VAR_5++) {


        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_3->nb_frag_info - 2 - VAR_5);
    }
    FUNC_0(VAR_1, VAR_4, VAR_0);
    return 0;
}
