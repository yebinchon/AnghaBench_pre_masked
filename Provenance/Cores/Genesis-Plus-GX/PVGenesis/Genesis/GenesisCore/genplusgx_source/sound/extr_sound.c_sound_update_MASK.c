
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fm_preamp; scalar_t__ hq_fm; } ;
struct TYPE_3__ {int ** blips; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ) ;
 TYPE_2__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 void* VAR_6 ;
 int FUNC_5 (unsigned int) ;
 TYPE_1__ VAR_7 ;

int FUNC_6(unsigned int VAR_8)
{
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, *VAR_14;


  FUNC_0(VAR_8);
  FUNC_5(VAR_8);


  VAR_10 = VAR_0.fm_preamp;


  VAR_11 = VAR_4;


  VAR_12 = VAR_5[0];
  VAR_13 = VAR_5[1];


  VAR_14 = VAR_1;


  if (VAR_0.hq_fm)
  {

    do
    {

      VAR_9 = ((*VAR_14++ * VAR_10) / 100) - VAR_12;
      VAR_12 += VAR_9;
      FUNC_1(VAR_7.blips[0][0], VAR_11, VAR_9);


      VAR_9 = ((*VAR_14++ * VAR_10) / 100) - VAR_13;
      VAR_13 += VAR_9;
      FUNC_1(VAR_7.blips[0][1], VAR_11, VAR_9);


      VAR_11 += VAR_3;
    }
    while (VAR_11 < VAR_8);
  }
  else
  {

    do
    {

      VAR_9 = ((*VAR_14++ * VAR_10) / 100) - VAR_12;
      VAR_12 += VAR_9;
      FUNC_2(VAR_7.blips[0][0], VAR_11, VAR_9);


      VAR_9 = ((*VAR_14++ * VAR_10) / 100) - VAR_13;
      VAR_13 += VAR_9;
      FUNC_2(VAR_7.blips[0][1], VAR_11, VAR_9);


      VAR_11 += VAR_3;
    }
    while (VAR_11 < VAR_8);
  }


  VAR_6 = VAR_1;


  VAR_5[0] = VAR_12;
  VAR_5[1] = VAR_13;


  VAR_2 = VAR_4 = VAR_11 - VAR_8;


  FUNC_3(VAR_7.blips[0][0], VAR_8);
  FUNC_3(VAR_7.blips[0][1], VAR_8);


  return FUNC_4(VAR_7.blips[0][0]);
}
