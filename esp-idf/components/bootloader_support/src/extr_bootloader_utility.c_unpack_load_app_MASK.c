
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ load_addr; scalar_t__ data_len; } ;
typedef TYPE_2__ esp_image_segment_header_t ;
struct TYPE_5__ {int segment_count; int entry_addr; } ;
struct TYPE_7__ {scalar_t__* segment_data; TYPE_1__ image; TYPE_2__* segments; } ;
typedef TYPE_3__ esp_image_metadata_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(const esp_image_metadata_t *VAR_6)
{
    uint32_t VAR_7 = 0;
    uint32_t VAR_8 = 0;
    uint32_t VAR_9 = 0;
    uint32_t VAR_10 = 0;
    uint32_t VAR_11 = 0;
    uint32_t VAR_12 = 0;


    for (int VAR_13 = 0; VAR_13 < VAR_6->image.segment_count; VAR_13++) {
        const esp_image_segment_header_t *VAR_14 = &VAR_6->segments[VAR_13];
        if (VAR_14->load_addr >= VAR_2 && VAR_14->load_addr < VAR_1) {
            if (VAR_7 != 0) {
                FUNC_1(VAR_5, VAR_0, "DROM");
            } else {
                FUNC_0(VAR_5, "Mapping segment %d as %s", VAR_13, "DROM");
            }
            VAR_7 = VAR_6->segment_data[VAR_13];
            VAR_8 = VAR_14->load_addr;
            VAR_9 = VAR_14->data_len;
        }
        if (VAR_14->load_addr >= VAR_4 && VAR_14->load_addr < VAR_3) {
            if (VAR_10 != 0) {
                FUNC_1(VAR_5, VAR_0, "IROM");
            } else {
                FUNC_0(VAR_5, "Mapping segment %d as %s", VAR_13, "IROM");
            }
            VAR_10 = VAR_6->segment_data[VAR_13];
            VAR_11 = VAR_14->load_addr;
            VAR_12 = VAR_14->data_len;
        }
    }

    FUNC_0(VAR_5, "calling set_cache_and_start_app");
    FUNC_2(VAR_7,
                            VAR_8,
                            VAR_9,
                            VAR_10,
                            VAR_11,
                            VAR_12,
                            VAR_6->image.entry_addr);
}
