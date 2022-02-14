
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int last; int end; TYPE_1__* tracks; } ;
struct TYPE_6__ {int sectorSize; int loaded; int status; TYPE_2__ toc; } ;
struct TYPE_4__ {int start; int end; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char const*,int*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,int ) ;
 int * FUNC_5 (char*,char*) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;

int FUNC_6(const char *VAR_11, int VAR_12)
{
  char VAR_13[0x210];
  int VAR_14;


  FUNC_0();


  VAR_14 = FUNC_2(VAR_11, &VAR_12);
  if (VAR_14 != 0)
    return VAR_14;


  FUNC_4(VAR_13, 0x10, VAR_4.toc.tracks[0].fd);


  if (FUNC_3("SEGADISCSYSTEM", VAR_13, 14))
  {

    FUNC_4(VAR_13, 0x10, VAR_4.toc.tracks[0].fd);


    if (FUNC_3("SEGADISCSYSTEM", VAR_13, 14))
    {
      FUNC_1(VAR_2|VAR_1, "cd: bad cd image?");

    }


    VAR_4.sectorSize = 2352;
  }
  else
  {

    VAR_4.sectorSize = 2048;
  }

  VAR_14 = (VAR_12 == VAR_0) ? 2352 : 2048;
  if (VAR_14 != VAR_4.sectorSize)
    FUNC_1(VAR_2|VAR_1, "cd: type detection mismatch");


  FUNC_4(VAR_13 + 0x10, 0x200, VAR_4.toc.tracks[0].fd);


  if (VAR_4.toc.last == 1)
  {

    if (FUNC_5(VAR_13 + 0x180,"T-95035") != ((void*)0))
    {

      VAR_4.toc.last = VAR_4.toc.end = 0;
      do
      {
        VAR_4.toc.tracks[VAR_4.toc.last].start = VAR_4.toc.end;
        VAR_4.toc.tracks[VAR_4.toc.last].end = VAR_4.toc.tracks[VAR_4.toc.last].start + VAR_10[VAR_4.toc.last];
        VAR_4.toc.end = VAR_4.toc.tracks[VAR_4.toc.last].end;
        VAR_4.toc.last++;
      }
      while (VAR_4.toc.last < 21);
    }
    else if (FUNC_5(VAR_13 + 0x180,"T-127015") != ((void*)0))
    {

      VAR_4.toc.last = VAR_4.toc.end = 0;
      do
      {
        VAR_4.toc.tracks[VAR_4.toc.last].start = VAR_4.toc.end;
        VAR_4.toc.tracks[VAR_4.toc.last].end = VAR_4.toc.tracks[VAR_4.toc.last].start + VAR_8[VAR_4.toc.last];
        VAR_4.toc.end = VAR_4.toc.tracks[VAR_4.toc.last].end;
        VAR_4.toc.last++;
      }
      while (VAR_4.toc.last < 52);
    }
    else if (FUNC_5(VAR_13 + 0x180,"T-113045") != ((void*)0))
    {

      VAR_4.toc.last = VAR_4.toc.end = 0;
      do
      {
        VAR_4.toc.tracks[VAR_4.toc.last].start = VAR_4.toc.end;
        VAR_4.toc.tracks[VAR_4.toc.last].end = VAR_4.toc.tracks[VAR_4.toc.last].start + VAR_9[VAR_4.toc.last];
        VAR_4.toc.end = VAR_4.toc.tracks[VAR_4.toc.last].end;
        VAR_4.toc.last++;
      }
      while (VAR_4.toc.last < 15);
    }
    else if (FUNC_5(VAR_13 + 0x180,"T-143025") != ((void*)0))
    {

      VAR_4.toc.last = VAR_4.toc.end = 0;
      do
      {
        VAR_4.toc.tracks[VAR_4.toc.last].start = VAR_4.toc.end;
        VAR_4.toc.tracks[VAR_4.toc.last].end = VAR_4.toc.tracks[VAR_4.toc.last].start + VAR_5[VAR_4.toc.last];
        VAR_4.toc.end = VAR_4.toc.tracks[VAR_4.toc.last].end;
        VAR_4.toc.last++;
      }
      while (VAR_4.toc.last < 13);
    }
    else if (FUNC_5(VAR_13 + 0x180,"MK-4410") != ((void*)0))
    {

      VAR_4.toc.last = VAR_4.toc.end = 0;
      do
      {
        VAR_4.toc.tracks[VAR_4.toc.last].start = VAR_4.toc.end;
        VAR_4.toc.tracks[VAR_4.toc.last].end = VAR_4.toc.tracks[VAR_4.toc.last].start + VAR_6[VAR_4.toc.last];
        VAR_4.toc.end = VAR_4.toc.tracks[VAR_4.toc.last].end;
        VAR_4.toc.last++;
      }
      while (VAR_4.toc.last < 26);
    }
    else if (FUNC_5(VAR_13 + 0x180,"G-6013") != ((void*)0))
    {

      VAR_4.toc.last = VAR_4.toc.end = 0;
      do
      {
        VAR_4.toc.tracks[VAR_4.toc.last].start = VAR_4.toc.end;
        VAR_4.toc.tracks[VAR_4.toc.last].end = VAR_4.toc.tracks[VAR_4.toc.last].start + VAR_7[VAR_4.toc.last];
        VAR_4.toc.end = VAR_4.toc.tracks[VAR_4.toc.last].end;
        VAR_4.toc.last++;
      }
      while (VAR_4.toc.last < 29);
    }
  }


  VAR_4.toc.tracks[VAR_4.toc.last].start = VAR_4.toc.end;


  VAR_4.loaded = 1;


  VAR_4.status = VAR_3;

  return 0;
}
