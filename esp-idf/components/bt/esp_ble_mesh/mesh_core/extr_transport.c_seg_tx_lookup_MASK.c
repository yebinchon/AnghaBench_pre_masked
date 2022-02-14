
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct seg_tx {int seq_auth; int dst; scalar_t__ nack_count; scalar_t__ seg_n; } ;


 int FUNC_0 (struct seg_tx*) ;
 struct seg_tx* VAR_0 ;

__attribute__((used)) static struct seg_tx *FUNC_1(u16_t VAR_1, u8_t VAR_2, u16_t VAR_3)
{
    struct seg_tx *VAR_4;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
        VAR_4 = &VAR_0[VAR_5];

        if ((VAR_4->seq_auth & 0x1fff) != VAR_1) {
            continue;
        }

        if (VAR_4->dst == VAR_3) {
            return VAR_4;
        }






        if (VAR_2 && VAR_4->nack_count == VAR_4->seg_n + 1) {
            VAR_4->dst = VAR_3;
            return VAR_4;
        }
    }

    return ((void*)0);
}
