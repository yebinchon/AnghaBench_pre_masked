
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* p; int* sequence; } ;
typedef TYPE_1__ cheatseq_t ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_1
( cheatseq_t* VAR_2,
  char VAR_3 )
{
    int VAR_4;
    int VAR_5 = 0;

    if (VAR_1)
    {
 VAR_1 = 0;
 for (VAR_4=0;VAR_4<256;VAR_4++) VAR_0[VAR_4] = FUNC_0(VAR_4);
    }

    if (!VAR_2->p)
 VAR_2->p = VAR_2->sequence;

    if (*VAR_2->p == 0)
 *(VAR_2->p++) = VAR_3;
    else if
 (VAR_0[(unsigned char)VAR_3] == *VAR_2->p) VAR_2->p++;
    else
 VAR_2->p = VAR_2->sequence;

    if (*VAR_2->p == 1)
 VAR_2->p++;
    else if (*VAR_2->p == 0xff)
    {
 VAR_2->p = VAR_2->sequence;
 VAR_5 = 1;
    }

    return VAR_5;
}
