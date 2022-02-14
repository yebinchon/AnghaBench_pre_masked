
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ebml_master ;
struct TYPE_11__ {int key; } ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int tags_bc; } ;
typedef TYPE_1__ MatroskaMuxContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,char*,TYPE_3__*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int ,unsigned int,int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVDictionary *VAR_2, uint32_t VAR_3,
                         unsigned int VAR_4)
{
    MatroskaMuxContext *VAR_5 = VAR_1->priv_data;
    ebml_master VAR_6;
    int VAR_7;
    AVDictionaryEntry *VAR_8 = ((void*)0);

    VAR_7 = FUNC_4(VAR_1, VAR_3, VAR_4, &VAR_6);
    if (VAR_7 < 0)
        return VAR_7;

    while ((VAR_8 = FUNC_0(VAR_2, "", VAR_8, VAR_0))) {
        if (FUNC_2(VAR_8->key, VAR_3)) {
            VAR_7 = FUNC_3(VAR_5->tags_bc, VAR_8);
            if (VAR_7 < 0)
                return VAR_7;
        }
    }

    FUNC_1(VAR_5->tags_bc, VAR_6);
    return 0;
}
