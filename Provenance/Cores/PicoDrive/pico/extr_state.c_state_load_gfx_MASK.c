
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dirty_pal; } ;
struct TYPE_7__ {TYPE_2__ video; TYPE_2__ vsram; TYPE_2__ cram; TYPE_2__ vram; } ;
struct TYPE_5__ {TYPE_2__ pal; TYPE_2__ dram; } ;


 int FUNC_0 (int,...) ;
 int FUNC_1 (TYPE_2__) ;




 char VAR_0 ;
 char VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 int VAR_8 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_10)
{
  int VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 4;
  char VAR_15[8];

  if (VAR_7 & VAR_2)
    VAR_14 += 2;

  VAR_9 = 0;
  FUNC_0(8, VAR_15);
  if (FUNC_5((char *)VAR_15, "PicoSMCD", 8) && FUNC_5((char *)VAR_15, "PicoSEXT", 8))
    FUNC_2("bad header");
  FUNC_0(4, &VAR_11);

  while (!FUNC_3(VAR_10) && VAR_13 < VAR_14)
  {
    FUNC_0(1, VAR_15);
    FUNC_0(4, &VAR_12);
    if (VAR_12 < 0 || VAR_12 > 1024*512) FUNC_2("bad length");
    if (VAR_15[0] > VAR_0 && VAR_15[0] <= VAR_1 && !(VAR_7 & VAR_3))
      FUNC_2("cd chunk in non CD state?");

    switch (VAR_15[0])
    {
      case 129: FUNC_1(VAR_4.vram); VAR_13++; break;
      case 132: FUNC_1(VAR_4.cram); VAR_13++; break;
      case 128: FUNC_1(VAR_4.vsram); VAR_13++; break;
      case 130: FUNC_1(VAR_4.video); VAR_13++; break;


      case 131:
        if (VAR_6 != ((void*)0))
          FUNC_1(VAR_6->dram);
        break;

      case 134:
        if (VAR_6 != ((void*)0))
          FUNC_1(VAR_6->pal);
        VAR_5.dirty_pal = 1;
        break;

      case 133:
        FUNC_1(VAR_5);
        break;

      default:
        FUNC_4(VAR_10, VAR_12, VAR_8);
        break;
    }
  }

out:
readend:
  return 0;
}
