
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
typedef int s16 ;
struct TYPE_6__ {int (* GetAudioSpace ) () ;int (* UpdateAudio ) (int*,int*,int) ;} ;
struct TYPE_5__ {int scsptiming2; int scsptiming1; } ;
struct TYPE_4__ {int* data32; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*,long) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (size_t*,size_t*,int *,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (size_t*,int ,int) ;
 int FUNC_4 (size_t*,size_t*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 () ;
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int*,int*,int) ;

void
FUNC_11 ()
{
  u32 VAR_10;

  VAR_1->scsptiming2 +=
    ((VAR_7 << 16) + VAR_4 / 2) / VAR_4;
  FUNC_6 (VAR_1->scsptiming2 >> 16);
  VAR_1->scsptiming2 &= 0xFFFF;
  VAR_1->scsptiming1++;

  if (VAR_1->scsptiming1 >= VAR_4)
    {
      s32 *VAR_11, *VAR_12;

      VAR_1->scsptiming1 -= VAR_4;
      VAR_1->scsptiming2 = 0;

      if (VAR_3)
        {

          if (VAR_6 + VAR_7 > VAR_5)
            VAR_6 = 0;

          if (VAR_8 + VAR_7 > VAR_5)
            {
              u32 VAR_13 = (VAR_8 + VAR_7) -
                            VAR_5;
              FUNC_1 ("WARNING: Sound buffer overrun, %lu samples\n",
                       (long)VAR_13);
              VAR_8 -= VAR_13;
            }

          VAR_11 = (s32 *)&VAR_2[0].data32[VAR_6];
          VAR_12 = (s32 *)&VAR_2[1].data32[VAR_6];
          FUNC_3 (VAR_11, 0, sizeof(u32) * VAR_7);
          FUNC_3 (VAR_12, 0, sizeof(u32) * VAR_7);
          FUNC_4 (VAR_11, VAR_12, VAR_7);
          VAR_6 += VAR_7;
          VAR_8 += VAR_7;
        }
    }

  if (VAR_3)
    {
      while (VAR_8 > 0 &&
             (VAR_10 = VAR_0->GetAudioSpace ()) > 0)
        {
          s32 VAR_14 = (s32)VAR_6 - (s32)VAR_8;

          if (VAR_14 < 0)
            VAR_14 += VAR_5;
          if (VAR_10 > VAR_8)
            VAR_10 = VAR_8;
          if (VAR_10 > VAR_5 - VAR_14)
            VAR_10 = VAR_5 - VAR_14;

          VAR_0->UpdateAudio (&VAR_2[0].data32[VAR_14],
                                &VAR_2[1].data32[VAR_14], VAR_10);
          VAR_8 -= VAR_10;







        }
    }
  else
    {
      if ((VAR_10 = VAR_0->GetAudioSpace ()))
        {
          if (VAR_10 > VAR_7)
            VAR_10 = VAR_7;
          FUNC_3(VAR_2[0].data32, 0, sizeof(u32) * VAR_10);
          FUNC_3(VAR_2[1].data32, 0, sizeof(u32) * VAR_10);

          FUNC_4 ((s32 *)VAR_2[0].data32,
                       (s32 *)VAR_2[1].data32, VAR_10);
          VAR_0->UpdateAudio (VAR_2[0].data32,
                                (u32 *)VAR_2[1].data32, VAR_10);







        }
    }

  FUNC_5 ();
}
