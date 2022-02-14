
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* sequence; } ;
typedef TYPE_1__ cheatseq_t ;



void
FUNC_0
( cheatseq_t* VAR_0,
  char* VAR_1 )
{

    unsigned char *VAR_2, VAR_3;

    VAR_2 = VAR_0->sequence;
    while (*(VAR_2++) != 1);

    do
    {
 VAR_3 = *VAR_2;
 *(VAR_1++) = VAR_3;
 *(VAR_2++) = 0;
    }
    while (VAR_3 && *VAR_2!=0xff );

    if (*VAR_2==0xff)
 *VAR_1 = 0;

}
