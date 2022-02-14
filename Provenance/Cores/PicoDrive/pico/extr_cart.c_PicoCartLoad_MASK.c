
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
typedef TYPE_1__ pm_file ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (unsigned char*,int,TYPE_1__*) ;
 int FUNC_8 (char*,char*,int) ;

int FUNC_9(pm_file *VAR_3,unsigned char **VAR_4,unsigned int *VAR_5,int VAR_6)
{
  unsigned char *VAR_7;
  int VAR_8, VAR_9;

  if (VAR_3 == ((void*)0))
    return 1;

  VAR_8 = VAR_3->size;
  if (VAR_8 <= 0) return 1;
  VAR_8 = (VAR_8+3)&~3;


  VAR_7 = FUNC_2(VAR_8, VAR_6);
  if (VAR_7 == ((void*)0)) {
    FUNC_4(VAR_0, "out of memory (wanted %i)", VAR_8);
    return 2;
  }

  if (&FUNC_3 != ((void*)0))
  {

    int VAR_10;
    unsigned char *VAR_11 = VAR_7;
    VAR_9=0;
    do
    {
      int VAR_12 = VAR_8 - VAR_9;
      if (VAR_12 > 256*1024) VAR_12 = 256*1024;
      VAR_10 = FUNC_7(VAR_11,VAR_12,VAR_3);
      VAR_9 += VAR_10;
      VAR_11 += VAR_10;
      FUNC_3(VAR_9 * 100 / VAR_8);
    }
    while (VAR_10 > 0);
  }
  else
    VAR_9 = FUNC_7(VAR_7,VAR_8,VAR_3);
  if (VAR_9 <= 0) {
    FUNC_4(VAR_0, "read failed");
    FUNC_5(VAR_7);
    return 3;
  }

  if (!VAR_6)
  {

    if (!(VAR_2 & VAR_1) && VAR_8 == 0x20000 && (!FUNC_8((char *)VAR_7+0x124, "BOOT", 4) ||
         !FUNC_8((char *)VAR_7+0x128, "BOOT", 4))) {
      VAR_2 |= VAR_1;
    }


    if (VAR_8 >= 0x4200 && (VAR_8&0x3fff) == 0x200 &&
        ((VAR_7[0x2280] == 'S' && VAR_7[0x280] == 'E') || (VAR_7[0x280] == 'S' && VAR_7[0x2281] == 'E'))) {
      FUNC_4(VAR_0, "SMD format detected.");
      FUNC_1(VAR_7,VAR_8); VAR_8-=0x200;
    }
    else FUNC_0(VAR_7, VAR_7, VAR_8);
  }
  else
  {
    if (VAR_8 >= 0x4200 && (VAR_8&0x3fff) == 0x200) {
      FUNC_4(VAR_0, "SMD format detected.");

      VAR_8 -= 0x200;
      FUNC_6(VAR_7, VAR_7 + 0x200, VAR_8);
    }
  }

  if (VAR_4) *VAR_4 = VAR_7;
  if (VAR_5) *VAR_5 = VAR_8;

  return 0;
}
