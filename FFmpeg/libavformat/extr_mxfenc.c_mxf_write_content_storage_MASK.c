
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* pb; } ;
struct TYPE_13__ {scalar_t__ buf_ptr; } ;
struct TYPE_12__ {int instance; int type; } ;
typedef TYPE_1__ MXFPackage ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(AVFormatContext *VAR_2, MXFPackage *VAR_3, int VAR_4)
{
    AVIOContext *VAR_5 = VAR_2->pb;
    int VAR_6;

    FUNC_3(VAR_5, 0x011800);
    FUNC_0(VAR_2, "content storage key", VAR_5->buf_ptr - 16);
    FUNC_1(VAR_5, 60 + (16 * VAR_4));


    FUNC_2(VAR_5, 16, 0x3C0A);
    FUNC_5(VAR_5, VAR_0, 0);
    FUNC_0(VAR_2, "content storage uid", VAR_5->buf_ptr - 16);


    FUNC_2(VAR_5, 16 * VAR_4 + 8, 0x1901);
    FUNC_4(VAR_5, VAR_4);
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        FUNC_5(VAR_5, VAR_3[VAR_6].type, VAR_3[VAR_6].instance);
    }


    FUNC_2(VAR_5, 8 + 16, 0x1902);
    FUNC_4(VAR_5, 1);
    FUNC_5(VAR_5, VAR_1, 0);
}
