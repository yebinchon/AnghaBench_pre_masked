
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* buf; int size; int val; scalar_t__ pos; } ;
typedef TYPE_1__ bitbuf_t ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(bitbuf_t *VAR_0, uint8_t* VAR_1, int VAR_2, int VAR_3)
{
    VAR_0->pos = 0;
    VAR_0->buf = VAR_1;
    VAR_0->size = VAR_2;
    VAR_0->val = (VAR_0->buf[0] << 24) | (VAR_0->buf[1] << 16) |
              (VAR_0->buf[2] << 8) | VAR_0->buf[3];
    if (VAR_3)
        FUNC_0(VAR_0->buf, 0, VAR_2);
    VAR_0->size = VAR_2;
}
