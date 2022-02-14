
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int rtsp_hd; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static inline int FUNC_3(AVFormatContext *VAR_3, char *VAR_4, const int VAR_5,
                            int *VAR_6)
{
    RTSPState *VAR_7 = VAR_3->priv_data;
    int VAR_8 = 0;
    int VAR_9 = 0;
    *VAR_6 = 0;

    do {
        VAR_9 = FUNC_2(VAR_7->rtsp_hd, VAR_4 + VAR_8, 1);
        if (VAR_9 <= 0)
            return VAR_9 ? VAR_9 : VAR_0;
        if (VAR_4[VAR_8] == '\r') {

        } else if (VAR_4[VAR_8] == '\n') {
            VAR_4[VAR_8] = '\0';
            *VAR_6 = VAR_8;
            return 0;
        } else
            VAR_8++;
    } while (VAR_8 < VAR_5);
    FUNC_1(VAR_3, VAR_1, "Message too long\n");
    return FUNC_0(VAR_2);
}
