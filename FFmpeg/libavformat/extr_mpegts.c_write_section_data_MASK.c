
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int* crc_validity; } ;
struct TYPE_9__ {int* section_buf; int section_index; int section_h_size; int end_of_section_reached; int last_ver; int (* section_cb ) (TYPE_3__*,int*,int) ;int crc; scalar_t__ check_crc; } ;
struct TYPE_8__ {TYPE_2__ section_filter; } ;
struct TYPE_10__ {size_t pid; TYPE_1__ u; } ;
typedef TYPE_2__ MpegTSSectionFilter ;
typedef TYPE_3__ MpegTSFilter ;
typedef TYPE_4__ MpegTSContext ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int const*,int) ;
 int FUNC_5 (TYPE_3__*,int*,int) ;

__attribute__((used)) static void FUNC_6(MpegTSContext *VAR_2, MpegTSFilter *VAR_3,
                               const uint8_t *VAR_4, int VAR_5, int VAR_6)
{
    MpegTSSectionFilter *VAR_7 = &VAR_3->u.section_filter;
    uint8_t *VAR_8 = ((void*)0);
    int VAR_9, VAR_10;

    if (VAR_6) {
        FUNC_4(VAR_7->section_buf, VAR_4, VAR_5);
        VAR_7->section_index = VAR_5;
        VAR_7->section_h_size = -1;
        VAR_7->end_of_section_reached = 0;
    } else {
        if (VAR_7->end_of_section_reached)
            return;
        VAR_9 = VAR_1 - VAR_7->section_index;
        if (VAR_5 < VAR_9)
            VAR_9 = VAR_5;
        FUNC_4(VAR_7->section_buf + VAR_7->section_index, VAR_4, VAR_9);
        VAR_7->section_index += VAR_9;
    }

    VAR_10 = 0;
    VAR_8 = VAR_7->section_buf;
    while (VAR_8 - VAR_7->section_buf < VAR_1 && VAR_8[0] != 0xff) {

        if (VAR_7->section_h_size == -1 && VAR_7->section_index - VAR_10 >= 3) {
            VAR_9 = (FUNC_0(VAR_8 + 1) & 0xfff) + 3;
            if (VAR_9 > VAR_1)
                return;
            VAR_7->section_h_size = VAR_9;
        }

        if (VAR_7->section_h_size != -1 &&
            VAR_7->section_index >= VAR_10 + VAR_7->section_h_size) {
            int VAR_11 = 1;
            VAR_7->end_of_section_reached = 1;

            if (VAR_7->check_crc) {
                VAR_11 = !FUNC_2(FUNC_3(VAR_0), -1, VAR_8, VAR_7->section_h_size);
                if (VAR_7->section_h_size >= 4)
                    VAR_7->crc = FUNC_1(VAR_8 + VAR_7->section_h_size - 4);

                if (VAR_11) {
                    VAR_2->crc_validity[ VAR_3->pid ] = 100;
                }else if (VAR_2->crc_validity[ VAR_3->pid ] > -10) {
                    VAR_2->crc_validity[ VAR_3->pid ]--;
                }else
                    VAR_11 = 2;
            }
            if (VAR_11) {
                VAR_7->section_cb(VAR_3, VAR_8, VAR_7->section_h_size);
                if (VAR_11 != 1)
                    VAR_7->last_ver = -1;
            }

            VAR_8 += VAR_7->section_h_size;
            VAR_10 += VAR_7->section_h_size;
            VAR_7->section_h_size = -1;
        } else {
            VAR_7->section_h_size = -1;
            VAR_7->end_of_section_reached = 0;
            break;
        }
    }
}
