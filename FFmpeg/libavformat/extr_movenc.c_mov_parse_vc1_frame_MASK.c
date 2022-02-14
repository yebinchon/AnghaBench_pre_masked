
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_10__ {int size; int flags; int const* data; } ;
struct TYPE_7__ {int slices; int first_packet_seen; int first_frag_written; int first_packet_seq; int first_packet_entry; int packet_seq; int packet_entry; } ;
struct TYPE_9__ {int entry; int has_keyframes; TYPE_2__* cluster; TYPE_1__ vc1_info; } ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_3__ MOVTrack ;
typedef TYPE_4__ AVPacket ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;



 int const* FUNC_1 (int const*,int const*) ;

__attribute__((used)) static void FUNC_2(AVPacket *VAR_2, MOVTrack *VAR_3)
{
    const uint8_t *VAR_4, *VAR_5, *VAR_6 = VAR_2->data + VAR_2->size;
    int VAR_7 = 0, VAR_8 = 0;
    int VAR_9 = VAR_2->flags & VAR_0;
    VAR_4 = FUNC_1(VAR_2->data, VAR_6);
    for (VAR_5 = VAR_4; VAR_5 < VAR_6; VAR_4 = VAR_5) {
        VAR_5 = FUNC_1(VAR_4 + 4, VAR_6);
        switch (FUNC_0(VAR_4)) {
        case 129:
            VAR_7 = 1;
            break;
        case 130:
            VAR_8 = 1;
            break;
        case 128:
            VAR_3->vc1_info.slices = 1;
            break;
        }
    }
    if (!VAR_3->entry && VAR_3->vc1_info.first_packet_seen)
        VAR_3->vc1_info.first_frag_written = 1;
    if (!VAR_3->entry && !VAR_3->vc1_info.first_frag_written) {

        VAR_3->vc1_info.first_packet_seq = VAR_7;
        VAR_3->vc1_info.first_packet_entry = VAR_8;
        VAR_3->vc1_info.first_packet_seen = 1;
    } else if ((VAR_7 && !VAR_3->vc1_info.packet_seq) ||
               (VAR_8 && !VAR_3->vc1_info.packet_entry)) {
        int VAR_10;
        for (VAR_10 = 0; VAR_10 < VAR_3->entry; VAR_10++)
            VAR_3->cluster[VAR_10].flags &= ~VAR_1;
        VAR_3->has_keyframes = 0;
        if (VAR_7)
            VAR_3->vc1_info.packet_seq = 1;
        if (VAR_8)
            VAR_3->vc1_info.packet_entry = 1;
        if (!VAR_3->vc1_info.first_frag_written) {

            if ((!VAR_7 || VAR_3->vc1_info.first_packet_seq) &&
                (!VAR_8 || VAR_3->vc1_info.first_packet_entry)) {


                VAR_3->cluster[0].flags |= VAR_1;
                VAR_3->has_keyframes = 1;
            }
        }
    }
    if (VAR_3->vc1_info.packet_seq && VAR_3->vc1_info.packet_entry)
        VAR_9 = VAR_7 && VAR_8;
    else if (VAR_3->vc1_info.packet_seq)
        VAR_9 = VAR_7;
    else if (VAR_3->vc1_info.packet_entry)
        VAR_9 = VAR_8;
    if (VAR_9) {
        VAR_3->cluster[VAR_3->entry].flags |= VAR_1;
        VAR_3->has_keyframes++;
    }
}
