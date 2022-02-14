
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct range_box {int len; int start; } ;
struct color_ref {int color; int count; } ;



__attribute__((used)) static uint32_t FUNC_0(struct color_ref * const *VAR_0,
                              const struct range_box *VAR_1)
{
    int VAR_2;
    const int VAR_3 = VAR_1->len;
    uint64_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
        const struct color_ref *VAR_8 = VAR_0[VAR_1->start + VAR_2];
        VAR_4 += (VAR_8->color >> 16 & 0xff) * VAR_8->count;
        VAR_5 += (VAR_8->color >> 8 & 0xff) * VAR_8->count;
        VAR_6 += (VAR_8->color & 0xff) * VAR_8->count;
        VAR_7 += VAR_8->count;
    }

    VAR_4 = VAR_4 / VAR_7;
    VAR_5 = VAR_5 / VAR_7;
    VAR_6 = VAR_6 / VAR_7;

    return 0xffU<<24 | VAR_4<<16 | VAR_5<<8 | VAR_6;
}
