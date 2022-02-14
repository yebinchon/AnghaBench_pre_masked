
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rhythm; int noise_rng; int status; int * P_CH; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int* VAR_0 ;
 int FUNC_3 (int *,int) ;
 TYPE_1__ VAR_1 ;

void FUNC_4(int *VAR_2, int VAR_3)
{
  int VAR_4, VAR_5;

  for( VAR_4=0; VAR_4 < VAR_3 ; VAR_4++ )
  {
    VAR_0[0] = 0;
    VAR_0[1] = 0;

    FUNC_1();


    FUNC_2(&VAR_1[0]);
    FUNC_2(&VAR_1[1]);
    FUNC_2(&VAR_1[2]);
    FUNC_2(&VAR_1[3]);
    FUNC_2(&VAR_1[4]);
    FUNC_2(&VAR_1[5]);

    if(!(VAR_1&0x20))
    {
      FUNC_2(&VAR_1[6]);
      FUNC_2(&VAR_1[7]);
      FUNC_2(&VAR_1[8]);
    }
    else
    {
      FUNC_3(&VAR_1[0], (VAR_1>>0)&1 );
    }


    VAR_5 = (VAR_0[0] + (VAR_0[1] * 2)) * 2 * VAR_1;


    *VAR_2++ = VAR_5;
    *VAR_2++ = VAR_5;

    FUNC_0();
  }
}
