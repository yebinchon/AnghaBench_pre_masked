
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int data_len; int load_addr; } ;
typedef TYPE_1__ esp_image_segment_header_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static esp_err_t FUNC_3(int VAR_5, const esp_image_segment_header_t *VAR_6, uint32_t VAR_7, bool VAR_8)
{
    if ((VAR_6->data_len & 3) != 0
            || VAR_6->data_len >= VAR_2) {
        if (!VAR_8) {
            FUNC_0(VAR_4, "invalid segment length 0x%x", VAR_6->data_len);
        }
        return VAR_0;
    }

    uint32_t VAR_9 = VAR_6->load_addr;
    bool VAR_10 = FUNC_2(VAR_9);




    FUNC_1(VAR_4, "segment %d map_segment %d segment_data_offs 0x%x load_addr 0x%x",
             VAR_5, VAR_10, VAR_7, VAR_9);
    if (VAR_10
            && ((VAR_7 % VAR_3) != (VAR_9 % VAR_3))) {
        if (!VAR_8) {
            FUNC_0(VAR_4, "Segment %d load address 0x%08x, doesn't match data 0x%08x",
                     VAR_5, VAR_9, VAR_7);
        }
        return VAR_0;
    }

    return VAR_1;
}
