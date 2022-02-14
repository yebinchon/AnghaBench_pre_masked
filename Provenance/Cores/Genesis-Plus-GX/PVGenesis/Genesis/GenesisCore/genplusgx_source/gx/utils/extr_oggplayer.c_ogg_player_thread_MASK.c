
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t pcm_indx; size_t pcmout_pos; int eof; int flag; int seek_time; int mode; int fd; int vf; int volume; int ** pcmout; TYPE_2__* vi; scalar_t__ current_section; } ;
typedef TYPE_1__ private_data_ogg ;
struct TYPE_5__ {int channels; int rate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,void*,int,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 long VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *,int) ;
 long FUNC_8 (int *,void*,int ,scalar_t__*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void * FUNC_11(private_data_ogg * VAR_9)
{
  int VAR_10 = 1;
  long VAR_11;


  FUNC_4(&VAR_8);

  VAR_9[0].vi = FUNC_7(&VAR_9[0].vf, -1);

  FUNC_0(0);

  VAR_9[0].pcm_indx = 0;
  VAR_9[0].pcmout_pos = 0;
  VAR_9[0].eof = 0;
  VAR_9[0].flag = 0;
  VAR_9[0].current_section = 0;

  VAR_7 = 1;

  while (!VAR_9[0].eof && VAR_7)
  {
    if (VAR_9[0].flag)
      FUNC_5(VAR_8);

    if (VAR_9[0].flag == 0)
    {
      if (FUNC_3(0, VAR_9[0].pcmout[VAR_9[0].pcmout_pos])
          && FUNC_2(0) != VAR_3)
      {
        VAR_9[0].flag |= 64;
        continue;
      }
      if (VAR_9[0].pcm_indx < VAR_2)
      {
        VAR_9[0].flag = 3;

        if (VAR_9[0].seek_time >= 0)
        {
          FUNC_9(&VAR_9[0].vf, VAR_9[0].seek_time);
          VAR_9[0].seek_time = -1;
        }

        VAR_11
            = FUNC_8(
                &VAR_9[0].vf,
                (void *) &VAR_9[0].pcmout[VAR_9[0].pcmout_pos][VAR_9[0].pcm_indx],
                VAR_0, &VAR_9[0].current_section);
        VAR_9[0].flag &= 192;
        if (VAR_11 == 0)
        {

          if (VAR_9[0].mode & 1)
            FUNC_9(&VAR_9[0].vf, 0);
          else
            VAR_9[0].eof = 1;
        }
        else if (VAR_11 < 0)
        {


          if (VAR_11 != VAR_1)
          {
            if (VAR_9[0].mode & 1)
              FUNC_9(&VAR_9[0].vf, 0);
            else
              VAR_9[0].eof = 1;
          }
        }
        else
        {


          VAR_9[0].pcm_indx += VAR_11 >> 1;
        }
      }
      else
        VAR_9[0].flag = 1;
    }

    if (VAR_9[0].flag == 1)
    {
      if (FUNC_2(0) == VAR_3 || VAR_10)
      {
        VAR_10 = 0;
        if (VAR_9[0].vi->channels == 2)
        {
          FUNC_1(0, VAR_5, VAR_9[0].vi->rate, 0,
              (void *) VAR_9[0].pcmout[VAR_9[0].pcmout_pos],
              VAR_9[0].pcm_indx << 1, VAR_9[0].volume,
              VAR_9[0].volume, VAR_6);
          VAR_9[0].pcmout_pos ^= 1;
          VAR_9[0].pcm_indx = 0;
          VAR_9[0].flag = 0;
        }
        else
        {
          FUNC_1(0, VAR_4, VAR_9[0].vi->rate, 0,
              (void *) VAR_9[0].pcmout[VAR_9[0].pcmout_pos],
              VAR_9[0].pcm_indx << 1, VAR_9[0].volume,
              VAR_9[0].volume, VAR_6);
          VAR_9[0].pcmout_pos ^= 1;
          VAR_9[0].pcm_indx = 0;
          VAR_9[0].flag = 0;
        }
      }
    }
    FUNC_10(10);
  }
  FUNC_6(&VAR_9[0].vf);
  VAR_9[0].fd = -1;
  VAR_9[0].pcm_indx = 0;

  return 0;
}
