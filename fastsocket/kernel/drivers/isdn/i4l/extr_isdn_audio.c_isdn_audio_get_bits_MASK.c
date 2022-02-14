
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nleft; size_t nbits; int word; } ;
typedef TYPE_1__ adpcm_state ;


 int* VAR_0 ;

__attribute__((used)) static int
FUNC_0(adpcm_state * VAR_1, unsigned char **VAR_2, int *VAR_3)
{
 while (VAR_1->nleft < VAR_1->nbits) {
  int VAR_4 = *((*VAR_2)++);
  (*VAR_3)--;
  VAR_1->word = (VAR_1->word << 8) | VAR_4;
  VAR_1->nleft += 8;
 }
 VAR_1->nleft -= VAR_1->nbits;
 return (VAR_1->word >> VAR_1->nleft) & VAR_0[VAR_1->nbits];
}
