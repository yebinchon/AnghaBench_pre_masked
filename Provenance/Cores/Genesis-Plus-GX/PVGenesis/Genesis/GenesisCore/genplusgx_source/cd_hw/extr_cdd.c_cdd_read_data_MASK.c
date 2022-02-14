
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {TYPE_2__* tracks; } ;
struct TYPE_6__ {int lba; int sectorSize; TYPE_1__ toc; } ;
struct TYPE_5__ {int end; int fd; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (int ,int,int ) ;

void FUNC_2(uint8 *VAR_2)
{

  if ((VAR_1.lba >= 0) && (VAR_1.lba < VAR_1.toc.tracks[0].end))
  {

    if (VAR_1.sectorSize == 2352)
    {

      FUNC_1(VAR_1.toc.tracks[0].fd, VAR_1.lba * 2352 + 16, VAR_0);
    }


    FUNC_0(VAR_2, 2048, 1, VAR_1.toc.tracks[0].fd);
  }
}
