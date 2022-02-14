
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int word; int nleft; } ;
typedef TYPE_1__ adpcm_state ;


 int* VAR_0 ;

__attribute__((used)) static void
FUNC_0(int VAR_1, int VAR_2, adpcm_state * VAR_3,
      unsigned char **VAR_4, int *VAR_5)
{
 VAR_3->word = (VAR_3->word << VAR_2) | (VAR_1 & VAR_0[VAR_2]);
 VAR_3->nleft += VAR_2;
 while (VAR_3->nleft >= 8) {
  int VAR_6 = (VAR_3->word >> (VAR_3->nleft - 8));
  *(VAR_4[0]++) = VAR_6 & 255;
  (*VAR_5)++;
  VAR_3->nleft -= 8;
 }
}
