
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * cdda_stream; } ;
struct TYPE_6__ {TYPE_1__* tracks; } ;
struct TYPE_7__ {TYPE_2__ toc; } ;
struct TYPE_5__ {int offset; int start; int end; int * fd; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,char*,int,int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_3, int VAR_4)
{
  int VAR_5, VAR_6, VAR_7, VAR_8;

  for (VAR_5 = VAR_3; VAR_5 > 0; VAR_5--)
    if (VAR_2.toc.tracks[VAR_5].fd != ((void*)0))
      break;

  VAR_1->cdda_stream = VAR_2.toc.tracks[VAR_5].fd;
  VAR_6 = VAR_2.toc.tracks[VAR_3].offset;
  VAR_7 = VAR_4 - VAR_2.toc.tracks[VAR_3].start;
  VAR_8 = VAR_2.toc.tracks[VAR_3].end - VAR_2.toc.tracks[VAR_3].start;

  FUNC_1(VAR_0, "play #%d lba %d base %d", VAR_3, VAR_4, VAR_6);

  FUNC_0(VAR_6, VAR_7, VAR_8);
}
