
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ebml_master ;
struct TYPE_6__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int * tags_bc; int seekhead; } ;
typedef TYPE_1__ MatroskaMuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,unsigned int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int **,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3, uint32_t VAR_4,
                                 unsigned int VAR_5, ebml_master *VAR_6)
{
    AVIOContext *VAR_7;
    MatroskaMuxContext *VAR_8 = VAR_3->priv_data;
    ebml_master VAR_9;
    int VAR_10;

    if (!VAR_8->tags_bc) {
        VAR_10 = FUNC_2(VAR_8->seekhead, VAR_1, FUNC_0(VAR_3->pb));
        if (VAR_10 < 0) return VAR_10;

        FUNC_5(VAR_3->pb, &VAR_8->tags_bc, VAR_8, VAR_1);
    }
    VAR_7 = VAR_8->tags_bc;

    *VAR_6 = FUNC_4(VAR_7, VAR_0, 0);
    VAR_9 = FUNC_4(VAR_7, VAR_2, 0);
    if (VAR_4)
        FUNC_3(VAR_7, VAR_4, VAR_5);
    FUNC_1(VAR_7, VAR_9);
    return 0;
}
