
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {scalar_t__ asf_header_read_size; scalar_t__ asf_header_size; scalar_t__ remaining_in_len; scalar_t__ asf_packet_len; } ;
struct TYPE_10__ {TYPE_3__ mms; } ;
typedef TYPE_2__ MMSTContext ;
typedef TYPE_3__ MMSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 int FUNC_4 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_4, uint8_t *VAR_5, int VAR_6)
{

    MMSTContext *VAR_7 = VAR_4->priv_data;
    MMSContext *VAR_8 = &VAR_7->mms;
    int VAR_9 = 0;

    do {
        if(VAR_8->asf_header_read_size < VAR_8->asf_header_size) {

            VAR_9 = FUNC_3(VAR_8, VAR_5, VAR_6);
        } else if(VAR_8->remaining_in_len) {


            VAR_9 = FUNC_2(VAR_8, VAR_5, VAR_6);
        } else {

            int VAR_10 = FUNC_4(VAR_7, ((void*)0), VAR_3);
            if (VAR_10 == 0) {
                if(VAR_8->remaining_in_len>VAR_8->asf_packet_len) {
                    FUNC_1(VAR_4, VAR_0,
                           "Incoming pktlen %d is larger than ASF pktsize %d\n",
                           VAR_8->remaining_in_len, VAR_8->asf_packet_len);
                    VAR_9= FUNC_0(VAR_2);
                } else {

                    VAR_9 = FUNC_2(VAR_8, VAR_5, VAR_6);
                    if (VAR_9 == 0) {
                        FUNC_1(VAR_4, VAR_1, "Read ASF media packet size is zero!\n");
                        break;
                    }
                }
            } else {
                FUNC_1(VAR_4, VAR_1, "read packet error!\n");
                break;
            }
        }
    } while(!VAR_9);
    return VAR_9;
}
