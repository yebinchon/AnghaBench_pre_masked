
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_9__ {int seekable; } ;
struct TYPE_8__ {TYPE_4__* pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int *,int) ;
 int FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

void FUNC_5(AVFormatContext *VAR_3)
{
    int VAR_4;
    uint8_t VAR_5[VAR_1];
    int64_t VAR_6, VAR_7 = FUNC_3(VAR_3->pb);

    if (VAR_3->pb->seekable & VAR_0) {

        VAR_6 = FUNC_2(VAR_3->pb);
        if (VAR_6 > 128) {
            FUNC_1(VAR_3->pb, VAR_6 - 128, VAR_2);
            VAR_4 = FUNC_0(VAR_3->pb, VAR_5, VAR_1);
            if (VAR_4 == VAR_1) {
                FUNC_4(VAR_3, VAR_5);
            }
            FUNC_1(VAR_3->pb, VAR_7, VAR_2);
        }
    }
}
