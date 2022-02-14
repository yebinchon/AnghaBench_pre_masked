
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char enabled; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned int,unsigned char) ;
 unsigned char** VAR_1 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2, unsigned char VAR_3)
{

  if ((VAR_2 == 0x8000) && VAR_0.enabled)
  {
    FUNC_1(VAR_3);
    return;
  }


  if (VAR_2 == 0xFFFC)
  {

    VAR_0.enabled = VAR_3 & 0x08;

    if (VAR_3 & 0x80)
    {

      FUNC_0();
    }
  }


  if (VAR_2 > 0xFFFC)
  {
    FUNC_2(VAR_2 & 3, VAR_3);
  }

  VAR_1[VAR_2 >> 10][VAR_2 & 0x03FF] = VAR_3;
}
