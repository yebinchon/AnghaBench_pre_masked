
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_6__ {size_t* data; size_t size; } ;
typedef TYPE_1__ AVPacket ;


 size_t FUNC_0 (size_t*,size_t) ;
 size_t FUNC_1 (size_t*,size_t) ;
 size_t FUNC_2 (size_t*,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (TYPE_1__*,unsigned int) ;
 int FUNC_6 (size_t*,size_t*,size_t) ;
 int FUNC_7 (TYPE_1__* const*,int,unsigned int*,unsigned int*) ;
 int FUNC_8 (unsigned int,size_t) ;

__attribute__((used)) static int FUNC_9(AVPacket * const *VAR_0, int VAR_1, AVPacket *VAR_2)
{
    unsigned VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    uint8_t *VAR_9;
    int VAR_10;

    FUNC_7(VAR_0, VAR_1, &VAR_3, &VAR_4);
    VAR_5 = FUNC_4(VAR_3) >> 3;
    VAR_6 = 0xC0 + (VAR_5 << 3) + (VAR_1 - 1);
    VAR_8 = VAR_4 + 2 + (VAR_5 + 1) * VAR_1;
    VAR_10 = FUNC_5(VAR_2, VAR_8);
    if (VAR_10 < 0)
        return VAR_10;
    VAR_9 = VAR_2->data;
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        FUNC_6(VAR_9, VAR_0[VAR_7]->data, VAR_0[VAR_7]->size);
        VAR_9 += VAR_0[VAR_7]->size;
    }
    *VAR_9++ = VAR_6;
    switch (VAR_5) {
    case 0:
        do { for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) { *VAR_9 = VAR_0[VAR_7]->size; VAR_9 += VAR_5 + 1; } } while (0);
        break;
    case 1:
        do { for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) { FUNC_0(VAR_9, VAR_0[VAR_7]->size); VAR_9 += VAR_5 + 1; } } while (0);
        break;
    case 2:
        do { for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) { FUNC_1(VAR_9, VAR_0[VAR_7]->size); VAR_9 += VAR_5 + 1; } } while (0);
        break;
    case 3:
        do { for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) { FUNC_2(VAR_9, VAR_0[VAR_7]->size); VAR_9 += VAR_5 + 1; } } while (0);
        break;
    }
    *VAR_9++ = VAR_6;
    FUNC_3(VAR_9 == &VAR_2->data[VAR_2->size]);

    return 0;
}
