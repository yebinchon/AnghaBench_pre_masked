
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* status; } ;
typedef TYPE_2__ dsfmt_t ;
struct TYPE_4__ {int* u; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(dsfmt_t *VAR_5) {
    uint64_t VAR_6[2] = {VAR_3, VAR_4};
    uint64_t VAR_7[2];
    uint64_t VAR_8;
    int VAR_9;

    int VAR_10;
    uint64_t VAR_11;


    VAR_7[0] = (VAR_5->status[VAR_2].u[0] ^ VAR_0);
    VAR_7[1] = (VAR_5->status[VAR_2].u[1] ^ VAR_1);

    VAR_8 = VAR_7[0] & VAR_6[0];
    VAR_8 ^= VAR_7[1] & VAR_6[1];
    for (VAR_9 = 32; VAR_9 > 0; VAR_9 >>= 1) {
        VAR_8 ^= VAR_8 >> VAR_9;
    }
    VAR_8 &= 1;

    if (VAR_8 == 1) {
 return;
    }




    for (VAR_9 = 1; VAR_9 >= 0; VAR_9--) {
 VAR_11 = 1;
 for (VAR_10 = 0; VAR_10 < 64; VAR_10++) {
     if ((VAR_11 & VAR_6[VAR_9]) != 0) {
  VAR_5->status[VAR_2].u[VAR_9] ^= VAR_11;
  return;
     }
     VAR_11 = VAR_11 << 1;
 }
    }

    return;
}
