
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int ff_asf_guid ;
struct TYPE_7__ {int pb; } ;
typedef TYPE_1__ AVFormatContext ;
typedef int AVDictionary ;





 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int const*,int,int,int **) ;
 int FUNC_2 (TYPE_1__*,int const*,int,int **) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int const*,char*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_0, const uint8_t *VAR_1, uint16_t VAR_2,
                            uint16_t VAR_3, uint16_t VAR_4, AVDictionary **VAR_5)
{
    int VAR_6;
    ff_asf_guid VAR_7;

    if (VAR_3) {
        switch (VAR_4) {
        case 128:
            FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5);
            break;
        case 130:
            if (!FUNC_5(VAR_1, "WM/Picture"))
                FUNC_0(VAR_0, VAR_3);
            else if (!FUNC_5(VAR_1, "ID3"))
                FUNC_4(VAR_0, VAR_3);
            else
                FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5);
            break;
        case 129:
            FUNC_3(VAR_0->pb, &VAR_7);
            break;
        default:
            if ((VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_4, VAR_5)) < 0)
                return VAR_6;
            break;
        }
    }

    return 0;
}
