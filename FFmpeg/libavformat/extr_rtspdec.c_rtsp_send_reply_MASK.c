
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int message ;
typedef enum RTSPStatusCode { ____Placeholder_RTSPStatusCode } RTSPStatusCode ;
struct TYPE_8__ {int code; char* message; } ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int rtsp_hd_out; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,int,char*,int,char*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_4, enum RTSPStatusCode VAR_5,
                           const char *VAR_6, uint16_t VAR_7)
{
    RTSPState *VAR_8 = VAR_4->priv_data;
    char VAR_9[4096];
    int VAR_10 = 0;
    while (VAR_3[VAR_10].code) {
        if (VAR_3[VAR_10].code == VAR_5) {
            FUNC_5(VAR_9, sizeof(VAR_9), "RTSP/1.0 %d %s\r\n",
                     VAR_5, VAR_3[VAR_10].message);
            break;
        }
        VAR_10++;
    }
    if (!VAR_3[VAR_10].code)
        return FUNC_0(VAR_1);
    FUNC_3(VAR_9, sizeof(VAR_9), "CSeq: %d\r\n", VAR_7);
    FUNC_3(VAR_9, sizeof(VAR_9), "Server: %s\r\n", VAR_2);
    if (VAR_6)
        FUNC_2(VAR_9, VAR_6, sizeof(VAR_9));
    FUNC_2(VAR_9, "\r\n", sizeof(VAR_9));
    FUNC_1(VAR_4, VAR_0, "Sending response:\n%s", VAR_9);
    FUNC_4(VAR_8->rtsp_hd_out, VAR_9, FUNC_6(VAR_9));

    return 0;
}
