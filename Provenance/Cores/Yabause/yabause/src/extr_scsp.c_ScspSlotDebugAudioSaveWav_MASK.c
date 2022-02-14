
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {scalar_t__ size; int id; } ;
struct TYPE_15__ {int rifftype; TYPE_2__ riff; } ;
typedef TYPE_4__ waveheader_struct ;
typedef size_t u8 ;
typedef int u32 ;
typedef int s16 ;
struct TYPE_14__ {int size; int id; } ;
struct TYPE_16__ {int compress; int numchan; int rate; int bitspersample; int blockalign; int bytespersec; TYPE_3__ chunk; } ;
typedef TYPE_5__ fmt_struct ;
struct TYPE_17__ {scalar_t__ size; int id; } ;
typedef TYPE_6__ chunk_struct ;
struct TYPE_19__ {TYPE_1__* slot; } ;
struct TYPE_18__ {int member_1; int member_0; } ;
struct TYPE_12__ {scalar_t__ lea; } ;
struct TYPE_11__ {scalar_t__ lpctl; } ;
typedef TYPE_7__ IOCheck_struct ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int *,int) ;
 int FUNC_1 (size_t) ;
 TYPE_10__ VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,int,int ) ;
 long FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;
 TYPE_9__ VAR_2 ;
 int FUNC_7 (TYPE_7__*,void*,int,int,int *) ;

int
FUNC_8 (u8 VAR_3, const char *VAR_4)
{
  u32 VAR_5[512*2*2];
  s16 VAR_6[512*2];
  FILE *VAR_7;
  u32 VAR_8 = 0;
  waveheader_struct VAR_9;
  fmt_struct VAR_10;
  chunk_struct VAR_11;
  long VAR_12;
  IOCheck_struct VAR_13 = { 0, 0 };

  if (VAR_2.slot[VAR_3].lea == 0)
    return 0;

  if ((VAR_7 = FUNC_3 (VAR_4, "wb")) == ((void*)0))
    return -1;


  FUNC_6 (VAR_9.riff.id, "RIFF", 4);
  VAR_9.riff.size = 0;
  FUNC_6 (VAR_9.rifftype, "WAVE", 4);
  FUNC_7 (&VAR_13, (void *)&VAR_9, 1, sizeof(waveheader_struct), VAR_7);


  FUNC_6 (VAR_10.chunk.id, "fmt ", 4);
  VAR_10.chunk.size = 16;
  VAR_10.compress = 1;
  VAR_10.numchan = 2;
  VAR_10.rate = 44100;
  VAR_10.bitspersample = 16;
  VAR_10.blockalign = VAR_10.bitspersample / 8 * VAR_10.numchan;
  VAR_10.bytespersec = VAR_10.rate * VAR_10.blockalign;
  FUNC_7 (&VAR_13, (void *)&VAR_10, 1, sizeof(fmt_struct), VAR_7);


  FUNC_6 (VAR_11.id, "data", 4);
  VAR_11.size = 0;
  FUNC_7 (&VAR_13, (void *)&VAR_11, 1, sizeof(chunk_struct), VAR_7);

  FUNC_1(VAR_3);


  for (;;)
    {
      if (FUNC_0 (VAR_5, VAR_6, 512) == 0)
        break;

      VAR_8 += 512;
      FUNC_7 (&VAR_13, (void *)VAR_6, 2, 512 * 2, VAR_7);
      if (VAR_1.lpctl != 0 && VAR_8 >= (44100 * 2 * 5))
        break;
    }

  VAR_12 = FUNC_5 (VAR_7);


  FUNC_4 (VAR_7, sizeof(waveheader_struct)-0x8, VAR_0);
  VAR_12 -= 0x4;
  FUNC_7 (&VAR_13, (void *)&VAR_12, 1, 4, VAR_7);

  FUNC_4 (VAR_7, sizeof(waveheader_struct) + sizeof(fmt_struct) + 0x4, VAR_0);
  VAR_12 -= sizeof(waveheader_struct) + sizeof(fmt_struct);
  FUNC_7 (&VAR_13, (void *)&VAR_12, 1, 4, VAR_7);
  FUNC_2 (VAR_7);

  return 0;
}
