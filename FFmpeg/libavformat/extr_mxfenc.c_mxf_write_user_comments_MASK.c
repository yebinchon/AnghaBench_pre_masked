
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int value; scalar_t__ key; } ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {scalar_t__ tagged_value_count; } ;
typedef TYPE_1__ MXFContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (int const*,char*,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3, const AVDictionary *VAR_4)
{
    MXFContext *VAR_5 = VAR_3->priv_data;
    AVDictionaryEntry *VAR_6 = ((void*)0);
    int VAR_7 = 0;

    while ((VAR_6 = FUNC_0(VAR_4, "comment_", VAR_6, VAR_0))) {
        if (VAR_5->tagged_value_count >= VAR_2) {
            FUNC_1(VAR_3, VAR_1, "too many tagged values, ignoring remaining\n");
            return VAR_7;
        }

        if (FUNC_2(VAR_3, VAR_6->key + 8, VAR_6->value) == 0)
            VAR_7++;
    }
    return VAR_7;
}
