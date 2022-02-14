
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
typedef int hb_work_object_t ;
struct TYPE_7__ {int num; int den; } ;
struct TYPE_8__ {char* name; int bitrate; int flags; int sample_bit_depth; int samples_per_frame; int * channel_map; int channel_layout; int matrix_encoding; TYPE_1__ rate; } ;
typedef TYPE_2__ hb_work_info_t ;
struct TYPE_9__ {int* data; } ;
typedef TYPE_3__ hb_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_1( hb_work_object_t *VAR_5, const hb_buffer_t *VAR_6,
                          hb_work_info_t *VAR_7 )
{
    int VAR_8 = ( VAR_6->data[4] & 7 ) + 1;
    int VAR_9 = VAR_4[VAR_6->data[4] >> 6];

    int VAR_10 = VAR_3[ ( VAR_6->data[4] >> 4 ) & 0x3 ];
    int VAR_11 = VAR_10 * VAR_9 * VAR_8;
    int64_t VAR_12 = VAR_6->data[0] * 150;

    FUNC_0( VAR_7, 0, sizeof(*VAR_7) );

    VAR_7->name = "LPCM";
    VAR_7->rate.num = VAR_10;
    VAR_7->rate.den = 1;
    VAR_7->bitrate = VAR_11;
    VAR_7->flags = ( VAR_6->data[3] << 16 ) | ( VAR_6->data[4] << 8 ) | VAR_6->data[5];
    VAR_7->matrix_encoding = VAR_0;
    VAR_7->channel_layout = VAR_2[VAR_8 - 1];
    VAR_7->channel_map = &VAR_1;
    VAR_7->sample_bit_depth = VAR_9;
    VAR_7->samples_per_frame = ( VAR_12 * VAR_10 ) / 90000;

    return 1;
}
