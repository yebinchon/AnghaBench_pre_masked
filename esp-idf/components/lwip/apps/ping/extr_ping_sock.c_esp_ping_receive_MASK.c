
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct ip_hdr {int _ttl; } ;
struct icmp_echo_hdr {scalar_t__ id; scalar_t__ seqno; } ;
typedef int socklen_t ;
typedef int from ;
struct TYPE_5__ {int ttl; int received; TYPE_1__* packet_hdr; int recv_addr; scalar_t__ recv_len; int sock; } ;
typedef TYPE_2__ esp_ping_t ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ id; scalar_t__ seqno; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ip_hdr*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int,int ,struct sockaddr*,int *) ;

__attribute__((used)) static int FUNC_8(esp_ping_t *VAR_3)
{
    char VAR_4[64];
    int VAR_5 = 0;
    struct sockaddr_storage VAR_6;
    int VAR_7 = sizeof(VAR_6);

    while ((VAR_5 = FUNC_7(VAR_3->sock, VAR_4, sizeof(VAR_4), 0, (struct sockaddr *)&VAR_6, (socklen_t *)&VAR_7)) > 0) {
        if (VAR_5 >= (int)(sizeof(struct ip_hdr) + sizeof(struct icmp_echo_hdr))) {
            VAR_3->recv_len = (uint32_t)VAR_5;
            if (VAR_6.ss_family == VAR_0) {

                struct sockaddr_in *VAR_8 = (struct sockaddr_in *)&VAR_6;
                FUNC_4(FUNC_5(&VAR_3->recv_addr), &VAR_8->sin_addr);
                FUNC_2(VAR_3->recv_addr, VAR_1);
            } else {

                struct sockaddr_in6 *VAR_9 = (struct sockaddr_in6 *)&VAR_6;
                FUNC_3(FUNC_6(&VAR_3->recv_addr), &VAR_9->sin6_addr);
                FUNC_2(VAR_3->recv_addr, VAR_2);
            }


            if (FUNC_1(VAR_3->recv_addr)) {
                struct ip_hdr *VAR_10 = (struct ip_hdr *)VAR_4;
                struct icmp_echo_hdr *VAR_11 = (struct icmp_echo_hdr *)(VAR_4 + (FUNC_0(VAR_10) * 4));
                if ((VAR_11->id == VAR_3->packet_hdr->id) && (VAR_11->seqno == VAR_3->packet_hdr->seqno)) {
                    VAR_3->received++;
                    VAR_3->ttl = VAR_10->_ttl;
                    return VAR_5;
                }
            }
        }
        VAR_7 = sizeof(VAR_6);
    }

    return VAR_5;
}
