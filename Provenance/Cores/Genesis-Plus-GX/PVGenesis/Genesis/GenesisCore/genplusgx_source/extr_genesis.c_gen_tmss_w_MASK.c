
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* memory_map; } ;
struct TYPE_5__ {int write; int read; } ;
struct TYPE_4__ {int write16; int write8; int read16; int read8; } ;


 int FUNC_0 (scalar_t__,unsigned int,unsigned int) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_2(unsigned int VAR_15, unsigned int VAR_16)
{
  int VAR_17;


  FUNC_0(VAR_5, VAR_15, VAR_16);


  if (FUNC_1((char *)VAR_5, "SEGA", 4) == 0)
  {
    for (VAR_17=0xc0; VAR_17<0xe0; VAR_17+=8)
    {
      VAR_0.memory_map[VAR_17].read8 = VAR_6;
      VAR_0.memory_map[VAR_17].read16 = VAR_7;
      VAR_0.memory_map[VAR_17].write8 = VAR_8;
      VAR_0.memory_map[VAR_17].write16 = VAR_9;
      VAR_12[VAR_17].read = VAR_13;
      VAR_12[VAR_17].write = VAR_14;
    }
  }
  else
  {
    for (VAR_17=0xc0; VAR_17<0xe0; VAR_17+=8)
    {
      VAR_0.memory_map[VAR_17].read8 = VAR_2;
      VAR_0.memory_map[VAR_17].read16 = VAR_1;
      VAR_0.memory_map[VAR_17].write8 = VAR_4;
      VAR_0.memory_map[VAR_17].write16 = VAR_3;
      VAR_12[VAR_17].read = VAR_10;
      VAR_12[VAR_17].write = VAR_11;
    }
  }
}
