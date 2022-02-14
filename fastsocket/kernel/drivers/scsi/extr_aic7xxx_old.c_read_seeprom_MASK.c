
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aic7xxx_host {int dummy; } ;
typedef scalar_t__ seeprom_chip_type ;
struct TYPE_2__ {int member_0; int member_1; int member_2; } ;


 int FUNC_0 (struct aic7xxx_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct aic7xxx_host*) ;
 unsigned short FUNC_2 (struct aic7xxx_host*,int ) ;
 int FUNC_3 (struct aic7xxx_host*,int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct aic7xxx_host*) ;

__attribute__((used)) static int
FUNC_6(struct aic7xxx_host *VAR_5, int VAR_6,
    unsigned short *VAR_7, unsigned int VAR_8, seeprom_chip_type VAR_9)
{
  int VAR_10 = 0, VAR_11;
  unsigned char VAR_12;
  unsigned short VAR_13 = 0;
  struct seeprom_cmd {
    unsigned char len;
    unsigned char bits[3];
  };
  struct seeprom_cmd VAR_14 = {3, {1, 1, 0}};




  if (FUNC_1(VAR_5) == 0)
  {
    return (0);
  }
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  {



    FUNC_3(VAR_5, VAR_4 | VAR_0 | VAR_1, VAR_2);
    FUNC_0(VAR_5);





    for (VAR_10 = 0; VAR_10 < VAR_14.len; VAR_10++)
    {
      VAR_12 = VAR_4 | VAR_1 | (VAR_14.bits[VAR_10] << 1);
      FUNC_3(VAR_5, VAR_12, VAR_2);
      FUNC_0(VAR_5);
      VAR_12 = VAR_12 ^ VAR_0;
      FUNC_3(VAR_5, VAR_12, VAR_2);
      FUNC_0(VAR_5);
    }



    for (VAR_10 = ((int) VAR_9 - 1); VAR_10 >= 0; VAR_10--)
    {
      VAR_12 = VAR_11 + VAR_6;
      VAR_12 = (VAR_12 >> VAR_10) & 1;
      VAR_12 = VAR_4 | VAR_1 | (VAR_12 << 1);
      FUNC_3(VAR_5, VAR_12, VAR_2);
      FUNC_0(VAR_5);
      VAR_12 = VAR_12 ^ VAR_0;
      FUNC_3(VAR_5, VAR_12, VAR_2);
      FUNC_0(VAR_5);
    }







    for (VAR_10 = 0; VAR_10 <= 16; VAR_10++)
    {
      VAR_12 = VAR_4 | VAR_1;
      FUNC_3(VAR_5, VAR_12, VAR_2);
      FUNC_0(VAR_5);
      VAR_12 = VAR_12 ^ VAR_0;
      VAR_7[VAR_11] = (VAR_7[VAR_11] << 1) | (FUNC_2(VAR_5, VAR_2) & VAR_3);
      FUNC_3(VAR_5, VAR_12, VAR_2);
      FUNC_0(VAR_5);
    }







    if (VAR_11 < (VAR_8 - 1))
    {
      VAR_13 = VAR_13 + VAR_7[VAR_11];
    }




    FUNC_3(VAR_5, VAR_4, VAR_2);
    FUNC_0(VAR_5);
    FUNC_3(VAR_5, VAR_4 | VAR_0, VAR_2);
    FUNC_0(VAR_5);
    FUNC_3(VAR_5, VAR_4, VAR_2);
    FUNC_0(VAR_5);
  }




  FUNC_5(VAR_5);
  if ( (VAR_13 != VAR_7[VAR_8 - 1]) || (VAR_13 == 0) )
  {
    return (0);
  }

  return (1);
}
