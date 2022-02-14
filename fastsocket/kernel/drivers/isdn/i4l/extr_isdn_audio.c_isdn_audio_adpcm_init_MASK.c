
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int d; int nbits; scalar_t__ nleft; scalar_t__ word; scalar_t__ a; } ;
typedef TYPE_1__ adpcm_state ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;

adpcm_state *
FUNC_1(adpcm_state * VAR_1, int VAR_2)
{
 if (!VAR_1)
  VAR_1 = FUNC_0(sizeof(adpcm_state), VAR_0);
 if (VAR_1) {
  VAR_1->a = 0;
  VAR_1->d = 5;
  VAR_1->word = 0;
  VAR_1->nleft = 0;
  VAR_1->nbits = VAR_2;
 }
 return VAR_1;
}
