
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int last; TYPE_1__* tracks; } ;
struct TYPE_8__ {scalar_t__ sectorSize; TYPE_3__ toc; scalar_t__ loaded; } ;
struct TYPE_6__ {scalar_t__ datasource; } ;
struct TYPE_5__ {scalar_t__ fd; TYPE_2__ vf; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(void)
{
  if (VAR_0.loaded)
  {
    int VAR_1;


    for (VAR_1=0; VAR_1<VAR_0.toc.last; VAR_1++)
    {
      {
        if (VAR_0.toc.tracks[VAR_1].fd)
        {

          FUNC_0(VAR_0.toc.tracks[VAR_1].fd);


          if (VAR_0.toc.tracks[VAR_1+1].fd == VAR_0.toc.tracks[VAR_1].fd)
          {

            VAR_1 = VAR_0.toc.last;
          }
        }
      }
    }


    VAR_0.loaded = 0;
  }


  FUNC_1(&VAR_0.toc, 0x00, sizeof(VAR_0.toc));


  VAR_0.sectorSize = 0;
}
