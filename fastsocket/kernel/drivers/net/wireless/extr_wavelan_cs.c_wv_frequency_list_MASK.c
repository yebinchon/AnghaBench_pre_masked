
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
struct TYPE_3__ {int i; long m; int e; } ;
typedef TYPE_1__ iw_freq ;


 int* VAR_0 ;
 int FUNC_0 (int ,int,int*,int) ;

__attribute__((used)) static int
FUNC_1(u_long VAR_1,
    iw_freq * VAR_2,
    int VAR_3)
{
  u_short VAR_4[10];
  long VAR_5 = 0L;
  int VAR_6;
  const int VAR_7 = 10;
  int VAR_8 = 0;


  FUNC_0(VAR_1, 0x71 ,
    VAR_4, 10);


  VAR_6 = 0;
  for(VAR_5 = 0; VAR_5 < 150; VAR_5++)

    if(VAR_4[9 - (VAR_5 / 16)] & (1 << (VAR_5 % 16)))
      {

 while((((VAR_0[VAR_8] >> 1) - 24) < VAR_5) &&
       (VAR_8 < VAR_7))
   VAR_8++;
 VAR_2[VAR_6].i = VAR_8;


 VAR_2[VAR_6].m = (((VAR_5 + 24) * 5) + 24000L) * 10000;
 VAR_2[VAR_6++].e = 1;


 if(VAR_6 >= VAR_3)
   return(VAR_6);
      }

  return(VAR_6);
}
