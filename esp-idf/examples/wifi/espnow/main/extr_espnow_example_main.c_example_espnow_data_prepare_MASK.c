
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int len; int magic; int state; int dest_mac; scalar_t__ buffer; } ;
typedef TYPE_1__ example_espnow_send_param_t ;
struct TYPE_5__ {size_t type; scalar_t__ crc; int payload; int magic; scalar_t__ seq_num; int state; } ;
typedef TYPE_2__ example_espnow_data_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (int ,int) ;
 int * VAR_3 ;

void FUNC_4(example_espnow_send_param_t *VAR_4)
{
    example_espnow_data_t *VAR_5 = (example_espnow_data_t *)VAR_4->buffer;

    FUNC_1(VAR_4->len >= sizeof(example_espnow_data_t));

    VAR_5->type = FUNC_0(VAR_4->dest_mac) ? VAR_0 : VAR_1;
    VAR_5->state = VAR_4->state;
    VAR_5->seq_num = VAR_3[VAR_5->type]++;
    VAR_5->crc = 0;
    VAR_5->magic = VAR_4->magic;

    FUNC_3(VAR_5->payload, VAR_4->len - sizeof(example_espnow_data_t));
    VAR_5->crc = FUNC_2(VAR_2, (uint8_t const *)VAR_5, VAR_4->len);
}
