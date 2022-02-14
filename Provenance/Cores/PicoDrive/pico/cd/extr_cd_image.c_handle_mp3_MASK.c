
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ offset; int * fd; } ;
typedef TYPE_2__ track_t ;
struct TYPE_4__ {TYPE_2__* tracks; } ;
struct TYPE_6__ {TYPE_1__ toc; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_4, int VAR_5)
{
  track_t *VAR_6 = &VAR_3.toc.tracks[VAR_5];
  FILE *VAR_7;
  int VAR_8;
  int VAR_9, VAR_10;

  VAR_7 = FUNC_2(VAR_4, "rb");
  if (VAR_7 == ((void*)0))
    return -1;

  VAR_10 = FUNC_4(VAR_7, 0, VAR_1);
  VAR_9 = FUNC_5(VAR_7);
  FUNC_4(VAR_7, 0, VAR_2);
  VAR_8 = FUNC_6(VAR_7, VAR_9) / 8;
  if (VAR_10 != 0 || VAR_8 <= 0)
  {
    FUNC_0(VAR_0, "track %2i: mp3 bitrate %i", VAR_5+1, VAR_8);



    FUNC_1(VAR_7);

    return -1;
  }

  VAR_6->fd = VAR_7;
  VAR_6->offset = 0;

  VAR_9 *= 75;
  VAR_9 /= VAR_8 * 1000;
  return VAR_9;
}
