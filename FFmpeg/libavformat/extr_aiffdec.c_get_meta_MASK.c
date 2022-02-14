
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int pb; int metadata; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_1, const char *VAR_2, int VAR_3)
{
    uint8_t *VAR_4 = FUNC_2(VAR_3+1);

    if (VAR_4) {
        int VAR_5 = FUNC_3(VAR_1->pb, VAR_4, VAR_3);
        if (VAR_5 < 0){
            FUNC_1(VAR_4);
            return;
        }
        VAR_3 -= VAR_5;
        VAR_4[VAR_5] = 0;
        FUNC_0(&VAR_1->metadata, VAR_2, VAR_4, VAR_0);
    }

    FUNC_4(VAR_1->pb, VAR_3);
}
