
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int maple_device_t ;
struct TYPE_3__ {int buttons; int rtrig; int ltrig; int joyx; int joyy; } ;
typedef TYPE_1__ cont_state_t ;
struct TYPE_4__ {int* padbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_10 ;

int FUNC_3(void) {
    maple_device_t *VAR_11;

    VAR_11 = FUNC_2(0, VAR_9);
    if(VAR_11 != ((void*)0)) {
        cont_state_t *VAR_12 = (cont_state_t *) FUNC_1(VAR_11);

        if(VAR_12 != ((void*)0)) {
            if(VAR_12->buttons & VAR_5)
                *VAR_10->padbits &= 0xEF;
            else
                *VAR_10->padbits |= 0x10;

            if(VAR_12->buttons & VAR_2)
                *VAR_10->padbits &= 0xDF;
            else
                *VAR_10->padbits |= 0x20;

            if(VAR_12->buttons & VAR_4)
                *VAR_10->padbits &= 0x7F;
            else
                *VAR_10->padbits |= 0x80;

            if(VAR_12->buttons & VAR_3)
                *VAR_10->padbits &= 0xBF;
            else
                *VAR_10->padbits |= 0x40;

            if(VAR_12->buttons & VAR_6)
                *VAR_10->padbits &= 0xF7;
            else
                *VAR_10->padbits |= 0x08;

            if(VAR_12->buttons & VAR_0)
                *VAR_10->padbits &= 0xFB;
            else
                *VAR_10->padbits |= 0x04;

            if(VAR_12->buttons & VAR_1)
                *VAR_10->padbits &= 0xFE;
            else
                *VAR_10->padbits |= 0x01;

            if(VAR_12->buttons & VAR_7)
                *(VAR_10->padbits + 1) &= 0xBF;
            else
                *(VAR_10->padbits + 1) |= 0x40;

            if(VAR_12->buttons & VAR_8)
                *(VAR_10->padbits + 1) &= 0xDF;
            else
                *(VAR_10->padbits + 1) |= 0x20;

            if(VAR_12->rtrig > 20)
                *(VAR_10->padbits + 1) &= 0x7F;
            else
                *(VAR_10->padbits + 1) |= 0x80;

            if(VAR_12->ltrig > 20)
                *(VAR_10->padbits + 1) &= 0xF7;
            else
                *(VAR_10->padbits + 1) |= 0x08;

            if(VAR_12->joyx > 20)
                *VAR_10->padbits &= 0xFD;
            else
                *VAR_10->padbits |= 0x02;

            if(VAR_12->joyy > 20)
                *(VAR_10->padbits + 1) &= 0xEF;
            else
                *(VAR_10->padbits + 1) |= 0x10;

        }
    }

    FUNC_0();

 return 0;
}
