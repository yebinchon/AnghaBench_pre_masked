
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int addr_error; } ;
struct TYPE_7__ {TYPE_1__* memory_map; int aerr_enabled; } ;
struct TYPE_6__ {int * write; int read; } ;
struct TYPE_5__ {int * write16; int * write8; int * read16; int * read8; void* base; } ;





 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;



 TYPE_4__ VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_0 () ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_1 () ;
 scalar_t__ VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_5 (int ,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int ** VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int * VAR_47 ;
 TYPE_2__* VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int * VAR_52 ;
 int * VAR_53 ;
 int * VAR_54 ;

void FUNC_6(void)
{
  int VAR_55;


  FUNC_5(0,VAR_28);


  if ((VAR_20 & 131) == VAR_1)
  {

    FUNC_0();
    VAR_8.aerr_enabled = VAR_3.addr_error;




    for (VAR_55=0x80; VAR_55<0xe0; VAR_55++)
    {
      VAR_8.memory_map[VAR_55].base = VAR_25;
      VAR_8.memory_map[VAR_55].read8 = VAR_10;
      VAR_8.memory_map[VAR_55].read16 = VAR_9;
      VAR_8.memory_map[VAR_55].write8 = VAR_12;
      VAR_8.memory_map[VAR_55].write16 = VAR_11;
      VAR_48[VAR_55].read = VAR_46;
      VAR_48[VAR_55].write = VAR_47;
    }


    for (VAR_55=0xc0; VAR_55<0xe0; VAR_55+=8)
    {
      VAR_8.memory_map[VAR_55].read8 = VAR_21;
      VAR_8.memory_map[VAR_55].read16 = VAR_22;
      VAR_8.memory_map[VAR_55].write8 = VAR_23;
      VAR_8.memory_map[VAR_55].write16 = VAR_24;
      VAR_48[VAR_55].read = VAR_50;
      VAR_48[VAR_55].write = VAR_53;
    }


    for (VAR_55=0xe0; VAR_55<0x100; VAR_55++)
    {
      VAR_8.memory_map[VAR_55].base = VAR_25;
      VAR_8.memory_map[VAR_55].read8 = ((void*)0);
      VAR_8.memory_map[VAR_55].read16 = ((void*)0);
      VAR_8.memory_map[VAR_55].write8 = ((void*)0);
      VAR_8.memory_map[VAR_55].write16 = ((void*)0);


      VAR_48[VAR_55].read = VAR_51;
      VAR_48[VAR_55].write = ((void*)0);
    }

    if (VAR_20 == VAR_2)
    {

      VAR_8.memory_map[0x80].read8 = VAR_18;
      VAR_8.memory_map[0x80].read16 = VAR_19;
      VAR_8.memory_map[0x80].write8 = VAR_16;
      VAR_8.memory_map[0x80].write16 = VAR_15;


      VAR_8.memory_map[0xa1].read8 = VAR_14;
      VAR_8.memory_map[0xa1].read16 = VAR_13;
      VAR_8.memory_map[0xa1].write8 = VAR_16;
      VAR_8.memory_map[0xa1].write16 = VAR_15;


      VAR_17 = 0;
    }
    else
    {

      VAR_8.memory_map[0xa1].read8 = VAR_4;
      VAR_8.memory_map[0xa1].read16 = VAR_5;
      VAR_8.memory_map[0xa1].write8 = VAR_6;
      VAR_8.memory_map[0xa1].write16 = VAR_7;
      VAR_48[0xa1].read = VAR_49;
      VAR_48[0xa1].write = VAR_52;




      for (VAR_55=0; VAR_55<64; VAR_55++)
      {
        VAR_37[VAR_55] = &VAR_54[(VAR_55 & 7) << 10];
      }


      VAR_44 = VAR_34;
      VAR_38 = VAR_33;


      VAR_45 = VAR_43;
      VAR_39 = VAR_42;
    }


    if (VAR_20 == VAR_0)
    {

      FUNC_2();


      FUNC_3();
    }
    else
    {

      FUNC_1();
    }
  }
  else
  {

    FUNC_4();


    switch (VAR_20)
    {

      case 131:
      {
        VAR_45 = VAR_32;
        VAR_39 = VAR_31;
        break;
      }


      case 134:
      case 133:
      {

        FUNC_4();


        VAR_45 = VAR_27;
        VAR_39 = VAR_26;
        break;
      }


      case 129:
      case 128:
      {
        VAR_45 = VAR_36;
        VAR_39 = VAR_35;
        break;
      }


      case 132:
      {
        VAR_45 = VAR_30;
        VAR_39 = VAR_29;
        break;
      }


      case 130:
      {
        VAR_45 = VAR_41;
        VAR_39 = VAR_40;
        break;
      }
    }
  }
}
