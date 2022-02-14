
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int tex_size; scalar_t__ tex_data; int gbc; } ;
typedef int GetByteContext ;
typedef TYPE_1__ DXVContext ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_0)
{
    DXVContext *VAR_1 = VAR_0->priv_data;
    GetByteContext *VAR_2 = &VAR_1->gbc;
    uint32_t VAR_3, VAR_4, VAR_5;
    int VAR_6 = 0, VAR_7 = 0;
    int VAR_8 = 2;


    FUNC_1(VAR_1->tex_data, FUNC_3(VAR_2));
    FUNC_1(VAR_1->tex_data + 4, FUNC_3(VAR_2));


    while (VAR_8 + 2 <= VAR_1->tex_size / 4) {
        FUNC_2(2);


        if (VAR_5) {
            VAR_4 = FUNC_0(VAR_1->tex_data + 4 * (VAR_8 - VAR_6));
            FUNC_1(VAR_1->tex_data + 4 * VAR_8, VAR_4);
            VAR_8++;

            VAR_4 = FUNC_0(VAR_1->tex_data + 4 * (VAR_8 - VAR_6));
            FUNC_1(VAR_1->tex_data + 4 * VAR_8, VAR_4);
            VAR_8++;
        } else {
            FUNC_2(2);

            if (VAR_5)
                VAR_4 = FUNC_0(VAR_1->tex_data + 4 * (VAR_8 - VAR_6));
            else
                VAR_4 = FUNC_3(VAR_2);
            FUNC_1(VAR_1->tex_data + 4 * VAR_8, VAR_4);
            VAR_8++;

            FUNC_2(2);

            if (VAR_5)
                VAR_4 = FUNC_0(VAR_1->tex_data + 4 * (VAR_8 - VAR_6));
            else
                VAR_4 = FUNC_3(VAR_2);
            FUNC_1(VAR_1->tex_data + 4 * VAR_8, VAR_4);
            VAR_8++;
        }
    }

    return 0;
}
