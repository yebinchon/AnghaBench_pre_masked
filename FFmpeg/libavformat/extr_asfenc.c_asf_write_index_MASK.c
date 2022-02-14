
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int packet_number; int packet_count; } ;
struct TYPE_5__ {int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFIndex ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3, const ASFIndex *VAR_4,
                           uint16_t VAR_5, uint32_t VAR_6)
{
    AVIOContext *VAR_7 = VAR_3->pb;
    int VAR_8;

    FUNC_3(VAR_7, &VAR_2);
    FUNC_2(VAR_7, 24 + 16 + 8 + 4 + 4 + (4 + 2) * VAR_6);
    FUNC_3(VAR_7, &VAR_1);
    FUNC_2(VAR_7, VAR_0);
    FUNC_1(VAR_7, VAR_5);
    FUNC_1(VAR_7, VAR_6);
    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        FUNC_1(VAR_7, VAR_4[VAR_8].packet_number);
        FUNC_0(VAR_7, VAR_4[VAR_8].packet_count);
    }

    return 0;
}
