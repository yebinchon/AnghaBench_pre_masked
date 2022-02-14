
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct representation {scalar_t__ cur_seg_offset; int input; scalar_t__ cur_seg_size; } ;
struct fragment {scalar_t__ size; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct representation *VAR_0, struct fragment *VAR_1,
                         uint8_t *VAR_2, int VAR_3)
{
    int VAR_4;


    if (VAR_1->size >= 0)
        VAR_3 = FUNC_0(VAR_3, VAR_0->cur_seg_size - VAR_0->cur_seg_offset);

    VAR_4 = FUNC_1(VAR_0->input, VAR_2, VAR_3);
    if (VAR_4 > 0)
        VAR_0->cur_seg_offset += VAR_4;

    return VAR_4;
}
