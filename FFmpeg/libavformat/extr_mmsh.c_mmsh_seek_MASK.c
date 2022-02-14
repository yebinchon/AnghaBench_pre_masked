
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {scalar_t__ asf_header_read_size; scalar_t__ remaining_in_len; scalar_t__ asf_packet_len; } ;
struct TYPE_6__ {scalar_t__ chunk_seq; TYPE_3__ mms; } ;
typedef TYPE_2__ MMSHContext ;
typedef TYPE_3__ MMSContext ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int64_t FUNC_1(URLContext *VAR_2, int64_t VAR_3, int VAR_4)
{
    MMSHContext *VAR_5 = VAR_2->priv_data;
    MMSContext *VAR_6 = &VAR_5->mms;

    if(VAR_3 == 0 && VAR_4 == VAR_1)
        return VAR_6->asf_header_read_size + VAR_6->remaining_in_len + VAR_5->chunk_seq * (int64_t)VAR_6->asf_packet_len;
    return FUNC_0(VAR_0);
}
