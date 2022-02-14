
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cdda_type; } ;
struct TYPE_8__ {int last; TYPE_1__* tracks; } ;
struct TYPE_9__ {int loaded; scalar_t__ status; scalar_t__ sectorSize; TYPE_3__ toc; } ;
struct TYPE_7__ {scalar_t__ datasource; } ;
struct TYPE_6__ {scalar_t__ fd; TYPE_2__ vf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

int FUNC_4(void)
{
  int VAR_5 = VAR_4.loaded;

  if (VAR_4.loaded)
  {
    int VAR_6;


    if (VAR_4.toc.tracks[0].fd)
    {
      FUNC_3(VAR_4.toc.tracks[0].fd);
      VAR_4.toc.tracks[0].fd = ((void*)0);
    }

    for (VAR_6 = 1; VAR_6 < VAR_4.toc.last; VAR_6++)
    {
      if (VAR_4.toc.tracks[VAR_6].fd)
      {

        if (VAR_3->cdda_type == VAR_1)
          FUNC_0(VAR_4.toc.tracks[VAR_6].fd);
        else
          FUNC_3(VAR_4.toc.tracks[0].fd);


        if (VAR_4.toc.tracks[VAR_6+1].fd == VAR_4.toc.tracks[VAR_6].fd)
        {

          VAR_6 = VAR_4.toc.last;
        }
      }
    }


    VAR_4.loaded = 0;

    if (VAR_4.status != VAR_0)
      VAR_4.status = VAR_2;
  }


  FUNC_1(&VAR_4.toc, 0x00, sizeof(VAR_4.toc));


  VAR_4.sectorSize = 0;

  return VAR_5;
}
