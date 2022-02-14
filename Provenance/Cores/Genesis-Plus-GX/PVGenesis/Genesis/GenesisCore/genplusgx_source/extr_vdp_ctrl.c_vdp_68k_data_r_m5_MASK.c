
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_2__ {int cycles; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (char*,int ,int ,int,int,int,int,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static unsigned int FUNC_2(void)
{
  uint16 VAR_11 = 0;


  VAR_6 = 0;

  switch (VAR_3 & 0x0F)
  {
    case 0x00:
    {

      VAR_11 = *(uint16 *)&VAR_9[VAR_2 & 0xFFFE];




      break;
    }

    case 0x04:
    {

      VAR_11 = *(uint16 *)&VAR_10[VAR_2 & 0x7E];




      break;
    }

    case 0x08:
    {

      VAR_11 = *(uint16 *)&VAR_4[VAR_2 & 0x7E];


      VAR_11 = ((VAR_11 & 0x1C0) << 3) | ((VAR_11 & 0x038) << 2) | ((VAR_11 & 0x007) << 1);




      break;
    }

    case 0x0c:
    {

      VAR_11 = *(uint16 *)&VAR_9[VAR_2 & 0xFFFE] & 0xff;




      break;
    }

    default:
    {




      break;
    }
  }


  VAR_2 += VAR_7[15];


  return VAR_11;
}
