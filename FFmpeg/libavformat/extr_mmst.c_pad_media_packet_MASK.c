
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ remaining_in_len; scalar_t__ asf_packet_len; int in_buffer; } ;
typedef TYPE_1__ MMSContext ;


 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static void FUNC_1(MMSContext *VAR_0)
{
    if(VAR_0->remaining_in_len<VAR_0->asf_packet_len) {
        int VAR_1 = VAR_0->asf_packet_len - VAR_0->remaining_in_len;
        FUNC_0(VAR_0->in_buffer + VAR_0->remaining_in_len, 0, VAR_1);
        VAR_0->remaining_in_len += VAR_1;
    }
}
