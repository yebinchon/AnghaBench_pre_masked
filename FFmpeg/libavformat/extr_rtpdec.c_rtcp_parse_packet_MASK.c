
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {scalar_t__ base_timestamp; scalar_t__ last_rtcp_timestamp; int rtcp_ts_offset; int last_rtcp_ntp_time; int first_rtcp_ntp_time; int last_rtcp_reception_time; int ic; } ;
typedef TYPE_1__ RTPDemuxContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const*) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char const*) ;
 int FUNC_3 (int,int) ;


 int FUNC_4 () ;
 int FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_6(RTPDemuxContext *VAR_3, const unsigned char *VAR_4,
                             int VAR_5)
{
    int VAR_6;
    while (VAR_5 >= 4) {
        VAR_6 = FUNC_3(VAR_5, (FUNC_0(VAR_4 + 2) + 1) * 4);

        switch (VAR_4[1]) {
        case 128:
            if (VAR_6 < 20) {
                FUNC_5(VAR_3->ic, VAR_1, "Invalid RTCP SR packet length\n");
                return VAR_0;
            }

            VAR_3->last_rtcp_reception_time = FUNC_4();
            VAR_3->last_rtcp_ntp_time = FUNC_2(VAR_4 + 8);
            VAR_3->last_rtcp_timestamp = FUNC_1(VAR_4 + 16);
            if (VAR_3->first_rtcp_ntp_time == VAR_2) {
                VAR_3->first_rtcp_ntp_time = VAR_3->last_rtcp_ntp_time;
                if (!VAR_3->base_timestamp)
                    VAR_3->base_timestamp = VAR_3->last_rtcp_timestamp;
                VAR_3->rtcp_ts_offset = (int32_t)(VAR_3->last_rtcp_timestamp - VAR_3->base_timestamp);
            }

            break;
        case 129:
            return -129;
        }

        VAR_4 += VAR_6;
        VAR_5 -= VAR_6;
    }
    return -1;
}
