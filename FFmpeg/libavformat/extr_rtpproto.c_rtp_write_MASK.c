
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_6__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int rtcp_fd; int rtp_fd; TYPE_1__* fec_hd; TYPE_1__* rtp_hd; TYPE_1__* rtcp_hd; int last_rtcp_source_len; struct sockaddr_storage last_rtcp_source; int last_rtp_source_len; struct sockaddr_storage last_rtp_source; scalar_t__ write_to_source; } ;
typedef TYPE_2__ RTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int const) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*,int const*,int) ;
 scalar_t__ FUNC_6 (struct sockaddr_storage*) ;
 int FUNC_7 (int,int const*,int,int ,struct sockaddr*,int ) ;
 int FUNC_8 (struct sockaddr_storage*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_6, const uint8_t *VAR_7, int VAR_8)
{
    RTPContext *VAR_9 = VAR_6->priv_data;
    int VAR_10, VAR_11;
    URLContext *VAR_12;

    if (VAR_8 < 2)
        return FUNC_0(VAR_4);

    if ((VAR_7[0] & 0xc0) != (VAR_5 << 6))
        FUNC_2(VAR_6, VAR_3, "Data doesn't look like RTP packets, "
                                  "make sure the RTP muxer is used\n");

    if (VAR_9->write_to_source) {
        int VAR_13;
        struct sockaddr_storage *VAR_14, VAR_15;
        socklen_t *VAR_16, VAR_17;
        if (!VAR_9->last_rtp_source.ss_family && !VAR_9->last_rtcp_source.ss_family) {
            FUNC_2(VAR_6, VAR_1,
                   "Unable to send packet to source, no packets received yet\n");

            return VAR_8;
        }

        if (FUNC_1(VAR_7[1])) {
            VAR_13 = VAR_9->rtcp_fd;
            VAR_14 = &VAR_9->last_rtcp_source;
            VAR_16 = &VAR_9->last_rtcp_source_len;
        } else {
            VAR_13 = VAR_9->rtp_fd;
            VAR_14 = &VAR_9->last_rtp_source;
            VAR_16 = &VAR_9->last_rtp_source_len;
        }
        if (!VAR_14->ss_family) {
            VAR_14 = &VAR_15;
            VAR_16 = &VAR_17;
            if (FUNC_1(VAR_7[1])) {
                VAR_15 = VAR_9->last_rtp_source;
                VAR_17 = VAR_9->last_rtp_source_len;
                FUNC_8(VAR_14, FUNC_6(VAR_14) + 1);
                FUNC_2(VAR_6, VAR_2,
                       "Not received any RTCP packets yet, inferring peer port "
                       "from the RTP port\n");
            } else {
                VAR_15 = VAR_9->last_rtcp_source;
                VAR_17 = VAR_9->last_rtcp_source_len;
                FUNC_8(VAR_14, FUNC_6(VAR_14) - 1);
                FUNC_2(VAR_6, VAR_2,
                       "Not received any RTP packets yet, inferring peer port "
                       "from the RTCP port\n");
            }
        }

        if (!(VAR_6->flags & VAR_0)) {
            VAR_10 = FUNC_4(VAR_13, 1);
            if (VAR_10 < 0)
                return VAR_10;
        }
        VAR_10 = FUNC_7(VAR_13, VAR_7, VAR_8, 0, (struct sockaddr *) VAR_14,
                     *VAR_16);

        return VAR_10 < 0 ? FUNC_3() : VAR_10;
    }

    if (FUNC_1(VAR_7[1])) {

        VAR_12 = VAR_9->rtcp_hd;
    } else {

        VAR_12 = VAR_9->rtp_hd;
    }

    if ((VAR_10 = FUNC_5(VAR_12, VAR_7, VAR_8)) < 0) {
        return VAR_10;
    }

    if (VAR_9->fec_hd && !FUNC_1(VAR_7[1])) {
        if ((VAR_11 = FUNC_5(VAR_9->fec_hd, VAR_7, VAR_8)) < 0) {
            FUNC_2(VAR_6, VAR_1, "Failed to send FEC\n");
            return VAR_11;
        }
    }

    return VAR_10;
}
