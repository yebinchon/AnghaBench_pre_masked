
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct gxf_stream_info {void* last_field; void* first_field; } ;
typedef scalar_t__ GXFMatTag ;
typedef int AVIOContext ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_3, int *VAR_4, struct gxf_stream_info *VAR_5) {
    VAR_5->first_field = VAR_0;
    VAR_5->last_field = VAR_0;
    while (*VAR_4 >= 2) {
        GXFMatTag VAR_6 = FUNC_0(VAR_3);
        int VAR_7 = FUNC_0(VAR_3);
        *VAR_4 -= 2;
        if (VAR_7 > *VAR_4)
            return;
        *VAR_4 -= VAR_7;
        if (VAR_7 == 4) {
            uint32_t VAR_8 = FUNC_1(VAR_3);
            if (VAR_6 == VAR_1)
                VAR_5->first_field = VAR_8;
            else if (VAR_6 == VAR_2)
                VAR_5->last_field = VAR_8;
        } else
            FUNC_2(VAR_3, VAR_7);
    }
}
