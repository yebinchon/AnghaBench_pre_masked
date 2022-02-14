
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_4__ {int metadata; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,char*,char const,int ) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*,char const*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, const uint8_t *VAR_3)
{
    int VAR_4;

    if (!(VAR_3[0] == 'T' &&
          VAR_3[1] == 'A' &&
          VAR_3[2] == 'G'))
        return -1;
    FUNC_2(VAR_2, "title", VAR_3 + 3, 30);
    FUNC_2(VAR_2, "artist", VAR_3 + 33, 30);
    FUNC_2(VAR_2, "album", VAR_3 + 63, 30);
    FUNC_2(VAR_2, "date", VAR_3 + 93, 4);
    FUNC_2(VAR_2, "comment", VAR_3 + 97, 30);
    if (VAR_3[125] == 0 && VAR_3[126] != 0) {
        FUNC_1(&VAR_2->metadata, "track", VAR_3[126], 0);
    }
    VAR_4 = VAR_3[127];
    if (VAR_4 <= VAR_0)
        FUNC_0(&VAR_2->metadata, "genre", VAR_1[VAR_4], 0);
    return 0;
}
