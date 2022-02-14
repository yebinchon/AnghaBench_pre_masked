
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int metadata; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,char*,int) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, uint8_t *VAR_4)
{
    AVDictionaryEntry *VAR_5;
    int VAR_6, VAR_7 = 0;

    FUNC_4(VAR_4, 0, VAR_1);
    VAR_4[0] = 'T';
    VAR_4[1] = 'A';
    VAR_4[2] = 'G';

    VAR_7 += FUNC_3(VAR_3, "TIT2", VAR_4 + 3, 30 + 1);
    VAR_7 += FUNC_3(VAR_3, "TPE1", VAR_4 + 33, 30 + 1);
    VAR_7 += FUNC_3(VAR_3, "TALB", VAR_4 + 63, 30 + 1);
    VAR_7 += FUNC_3(VAR_3, "TDRC", VAR_4 + 93, 4 + 1);
    VAR_7 += FUNC_3(VAR_3, "comment", VAR_4 + 97, 30 + 1);
    if ((VAR_5 = FUNC_1(VAR_3->metadata, "TRCK", ((void*)0), 0))) {
        VAR_4[125] = 0;
        VAR_4[126] = FUNC_0(VAR_5->value);
        VAR_7++;
    }
    VAR_4[127] = 0xFF;
    if ((VAR_5 = FUNC_1(VAR_3->metadata, "TCON", ((void*)0), 0))) {
        for(VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++) {
            if (!FUNC_2(VAR_5->value, VAR_2[VAR_6])) {
                VAR_4[127] = VAR_6;
                VAR_7++;
                break;
            }
        }
    }
    return VAR_7;
}
