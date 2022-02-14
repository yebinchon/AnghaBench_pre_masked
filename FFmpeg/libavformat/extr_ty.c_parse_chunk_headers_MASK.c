
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int rec_type; int subrec_type; int* ex; int rec_size; int ty_pts; } ;
typedef TYPE_1__ TyRecHdr ;


 int FUNC_0 (int const*) ;
 TYPE_1__* FUNC_1 (int,int) ;

__attribute__((used)) static TyRecHdr *FUNC_2(const uint8_t *VAR_0,
                                     int VAR_1)
{
    TyRecHdr *VAR_2, *VAR_3;
    int VAR_4;

    VAR_2 = FUNC_1(VAR_1, sizeof(TyRecHdr));
    if (!VAR_2)
        return ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        const uint8_t *VAR_5 = VAR_0 + (VAR_4 * 16);

        VAR_3 = &VAR_2[VAR_4];
        VAR_3->rec_type = VAR_5[3];
        VAR_3->subrec_type = VAR_5[2] & 0x0f;
        if ((VAR_5[0] & 0x80) == 0x80) {
            uint8_t VAR_6, VAR_7;


            VAR_6 = (((VAR_5[0] & 0x0f) << 4) |
                  ((VAR_5[1] & 0xf0) >> 4));
            VAR_7 = (((VAR_5[1] & 0x0f) << 4) |
                  ((VAR_5[2] & 0xf0) >> 4));

            VAR_3->ex[0] = VAR_6;
            VAR_3->ex[1] = VAR_7;
            VAR_3->rec_size = 0;
            VAR_3->ty_pts = 0;
        } else {
            VAR_3->rec_size = (VAR_5[0] << 8 |
                                 VAR_5[1]) << 4 |
                                (VAR_5[2] >> 4);
            VAR_3->ty_pts = FUNC_0(&VAR_5[8]);
        }
    }
    return VAR_2;
}
