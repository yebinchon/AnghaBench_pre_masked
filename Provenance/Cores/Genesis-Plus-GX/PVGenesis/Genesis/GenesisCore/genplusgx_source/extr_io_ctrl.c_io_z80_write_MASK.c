
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* data_w ) (unsigned int,int) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,int) ;

void FUNC_3(unsigned int VAR_7, unsigned int VAR_8, unsigned int VAR_9)
{
  if (VAR_7)
  {

    if (VAR_6 & VAR_1)
    {
      VAR_5[0].data_w((VAR_8 << 1) & 0x60, (~VAR_4[0x0F] << 5) & 0x60);
      VAR_5[1].data_w((VAR_8 >> 1) & 0x60, (~VAR_4[0x0F] << 3) & 0x60);



      if ((!(VAR_4[0x0F] & 0x80) && (VAR_8 & 0x80)) ||
          (!(VAR_4[0x0F] & 0x20) && (VAR_8 & 0x20)))
      {

        VAR_3 = VAR_2[VAR_9 % VAR_0] | 0x10000;
     }


      VAR_4[0x0F] = VAR_8;
    }
    else
    {

      VAR_4[0x0F] = (VAR_8 | 0x05) & 0x5F;


      VAR_4[0x0D] = ((VAR_8 & 0x01) << 4) | ((VAR_8 & 0x04) << 3);
    }
  }
  else
  {

    VAR_4[0x0E] = VAR_8;


    FUNC_0(~VAR_8);
  }
}
