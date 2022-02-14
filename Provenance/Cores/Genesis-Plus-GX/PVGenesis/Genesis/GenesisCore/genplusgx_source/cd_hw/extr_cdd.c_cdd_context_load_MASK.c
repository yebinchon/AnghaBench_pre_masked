
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_6__ {TYPE_1__* tracks; } ;
struct TYPE_8__ {size_t cycles; size_t latency; size_t index; size_t lba; size_t scanOffset; size_t volume; size_t status; int sectorSize; TYPE_2__ toc; } ;
struct TYPE_7__ {scalar_t__ datasource; } ;
struct TYPE_5__ {int start; int offset; scalar_t__ fd; TYPE_3__ vf; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (size_t*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;

int FUNC_3(uint8 *VAR_2)
{
  int VAR_3;
  int VAR_4 = 0;

  FUNC_1(&VAR_1.cycles, sizeof(VAR_1.cycles));
  FUNC_1(&VAR_1.latency, sizeof(VAR_1.latency));
  FUNC_1(&VAR_1.index, sizeof(VAR_1.index));
  FUNC_1(&VAR_1.lba, sizeof(VAR_1.lba));
  FUNC_1(&VAR_1.scanOffset, sizeof(VAR_1.scanOffset));
  FUNC_1(&VAR_1.volume, sizeof(VAR_1.volume));
  FUNC_1(&VAR_1.status, sizeof(VAR_1.status));


  VAR_3 = VAR_1.lba;
  if (VAR_3 < VAR_1.toc.tracks[VAR_1.index].start)
  {
    VAR_3 = VAR_1.toc.tracks[VAR_1.index].start;
  }


  if (!VAR_1.index)
  {

    if (VAR_1.toc.tracks[0].fd)
    {
      FUNC_0(VAR_1.toc.tracks[0].fd, VAR_3 * VAR_1.sectorSize, VAR_0);
    }
  }






  else if (VAR_1.toc.tracks[VAR_1.index].fd)
  {

    FUNC_0(VAR_1.toc.tracks[VAR_1.index].fd, (VAR_3 * 2352) - VAR_1.toc.tracks[VAR_1.index].offset, VAR_0);
  }

  return VAR_4;
}
