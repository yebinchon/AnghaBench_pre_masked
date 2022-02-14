
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t nb_extra_packets; int* extra_packet_sizes; int metadata_size; void* metadata; void** extra_packets; } ;
typedef TYPE_1__ OutputStream ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*) ;
 int VAR_1 ;
 size_t FUNC_2 (void**) ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int const*,char*,int) ;
 int FUNC_5 (void*,int const*,int) ;

__attribute__((used)) static int FUNC_6(OutputStream *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    if (VAR_4 < 13)
        return VAR_0;
    if (FUNC_4(VAR_3, "FLV", 3))
        return VAR_0;
    VAR_3 += 13;
    VAR_4 -= 13;
    while (VAR_4 >= 11 + 4) {
        int VAR_5 = VAR_3[0];
        int VAR_6 = FUNC_1(&VAR_3[1]) + 11 + 4;
        if (VAR_6 > VAR_4)
            return VAR_0;
        if (VAR_5 == 8 || VAR_5 == 9) {
            if (VAR_2->nb_extra_packets >= FUNC_2(VAR_2->extra_packets))
                return VAR_0;
            VAR_2->extra_packet_sizes[VAR_2->nb_extra_packets] = VAR_6;
            VAR_2->extra_packets[VAR_2->nb_extra_packets] = FUNC_3(VAR_6);
            if (!VAR_2->extra_packets[VAR_2->nb_extra_packets])
                return FUNC_0(VAR_1);
            FUNC_5(VAR_2->extra_packets[VAR_2->nb_extra_packets], VAR_3, VAR_6);
            VAR_2->nb_extra_packets++;
        } else if (VAR_5 == 0x12) {
            if (VAR_2->metadata)
                return VAR_0;
            VAR_2->metadata_size = VAR_6 - 11 - 4;
            VAR_2->metadata = FUNC_3(VAR_2->metadata_size);
            if (!VAR_2->metadata)
                return FUNC_0(VAR_1);
            FUNC_5(VAR_2->metadata, VAR_3 + 11, VAR_2->metadata_size);
        }
        VAR_3 += VAR_6;
        VAR_4 -= VAR_6;
    }
    if (!VAR_2->metadata)
        return VAR_0;
    return 0;
}
