
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_3__ {unsigned int data_size; int flags; unsigned int start; unsigned int len; unsigned int col; unsigned int row; int data; } ;
typedef TYPE_1__ Block ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(Block * VAR_2, uint8_t * VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    unsigned VAR_6 = VAR_2->data_size;

    if (VAR_2->flags & VAR_0)
        VAR_6 += 2;
    if (VAR_2->flags & VAR_1)
        VAR_6 += 2;
    if (VAR_6 > 0)
        VAR_6 += 1;
    if (VAR_4 < VAR_6 + 2)
        return -1;

    VAR_3[VAR_5++] = VAR_6 >> 8;
    VAR_3[VAR_5++] = VAR_6;

    if (VAR_6 == 0)
        return VAR_5;

    VAR_3[VAR_5++] = VAR_2->flags;

    if (VAR_2->flags & VAR_0) {
        VAR_3[VAR_5++] = (VAR_2->start);
        VAR_3[VAR_5++] = (VAR_2->len);
    }

    if (VAR_2->flags & VAR_1) {

        VAR_3[VAR_5++] = (VAR_2->col);
        VAR_3[VAR_5++] = (VAR_2->row);
    }

    FUNC_0(VAR_3 + VAR_5, VAR_2->data, VAR_2->data_size);

    VAR_5 += VAR_2->data_size;

    return VAR_5;
}
