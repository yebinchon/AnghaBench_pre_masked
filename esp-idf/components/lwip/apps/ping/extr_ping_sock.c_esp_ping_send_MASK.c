
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int opt_val ;
struct TYPE_5__ {int icmp_pkt_size; int transmitted; int sock; int target_addr; TYPE_2__* packet_hdr; } ;
typedef TYPE_1__ esp_ping_t ;
typedef int esp_err_t ;
struct TYPE_6__ {scalar_t__ chksum; int seqno; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int*,int*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,TYPE_2__*,int,int ,struct sockaddr*,int) ;

__attribute__((used)) static esp_err_t FUNC_4(esp_ping_t *VAR_5)
{
    esp_err_t VAR_6 = VAR_1;
    VAR_5->packet_hdr->seqno++;

    VAR_5->packet_hdr->chksum = 0;
    VAR_5->packet_hdr->chksum = FUNC_2(VAR_5->packet_hdr, VAR_5->icmp_pkt_size);

    int VAR_7 = FUNC_3(VAR_5->sock, VAR_5->packet_hdr, VAR_5->icmp_pkt_size, 0,
                      (struct sockaddr *)&VAR_5->target_addr, sizeof(VAR_5->target_addr));

    if (VAR_7 != VAR_5->icmp_pkt_size) {
        int VAR_8;
        socklen_t VAR_9 = sizeof(VAR_8);
        FUNC_1(VAR_5->sock, VAR_2, VAR_3, &VAR_8, &VAR_9);
        FUNC_0(VAR_4, "send error=%d", VAR_8);
        VAR_6 = VAR_0;
    } else {
        VAR_5->transmitted++;
    }
    return VAR_6;
}
