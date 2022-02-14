
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct LATMContext {int frame_length_type; int frame_length; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct LATMContext *VAR_1, GetBitContext *VAR_2)
{
    uint8_t VAR_3;

    if (VAR_1->frame_length_type == 0) {
        int VAR_4 = 0;
        do {
            if (FUNC_1(VAR_2) < 8)
                return VAR_0;
            VAR_3 = FUNC_0(VAR_2, 8);
            VAR_4 += VAR_3;
        } while (VAR_3 == 255);
        return VAR_4;
    } else if (VAR_1->frame_length_type == 1) {
        return VAR_1->frame_length;
    } else if (VAR_1->frame_length_type == 3 ||
               VAR_1->frame_length_type == 5 ||
               VAR_1->frame_length_type == 7) {
        FUNC_2(VAR_2, 2);
    }
    return 0;
}
