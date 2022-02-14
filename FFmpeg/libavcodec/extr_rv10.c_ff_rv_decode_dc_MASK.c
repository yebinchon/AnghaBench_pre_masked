
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_7__ {int table; } ;
struct TYPE_6__ {int table; } ;
struct TYPE_5__ {int avctx; int gb; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (int *,int) ;

int FUNC_5(MpegEncContext *VAR_4, int VAR_5)
{
    int VAR_6;

    if (VAR_5 < 4) {
        VAR_6 = FUNC_3(&VAR_4->gb, VAR_3.table, VAR_1, 2);
        if (VAR_6 < 0) {



            VAR_6 = FUNC_1(&VAR_4->gb, 7);
            if (VAR_6 == 0x7c) {
                VAR_6 = (int8_t) (FUNC_1(&VAR_4->gb, 7) + 1);
            } else if (VAR_6 == 0x7d) {
                VAR_6 = -128 + FUNC_1(&VAR_4->gb, 7);
            } else if (VAR_6 == 0x7e) {
                if (FUNC_2(&VAR_4->gb) == 0)
                    VAR_6 = (int8_t) (FUNC_1(&VAR_4->gb, 8) + 1);
                else
                    VAR_6 = (int8_t) (FUNC_1(&VAR_4->gb, 8));
            } else if (VAR_6 == 0x7f) {
                FUNC_4(&VAR_4->gb, 11);
                VAR_6 = 1;
            }
        } else {
            VAR_6 -= 128;
        }
    } else {
        VAR_6 = FUNC_3(&VAR_4->gb, VAR_2.table, VAR_1, 2);

        if (VAR_6 < 0) {
            VAR_6 = FUNC_1(&VAR_4->gb, 9);
            if (VAR_6 == 0x1fc) {
                VAR_6 = (int8_t) (FUNC_1(&VAR_4->gb, 7) + 1);
            } else if (VAR_6 == 0x1fd) {
                VAR_6 = -128 + FUNC_1(&VAR_4->gb, 7);
            } else if (VAR_6 == 0x1fe) {
                FUNC_4(&VAR_4->gb, 9);
                VAR_6 = 1;
            } else {
                FUNC_0(VAR_4->avctx, VAR_0, "chroma dc error\n");
                return 0xffff;
            }
        } else {
            VAR_6 -= 128;
        }
    }
    return -VAR_6;
}
