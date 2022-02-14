
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct audio {size_t fill_next; scalar_t__ pcm_buf_count; int buf_refresh; int read_wait; int dsp_lock; TYPE_1__* in; } ;
struct TYPE_2__ {int addr; int used; } ;


 int FUNC_0 (struct audio*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct audio *VAR_0,
  uint32_t *VAR_1)
{
 uint8_t VAR_2;
 unsigned long VAR_3;

 FUNC_3(&VAR_0->dsp_lock, VAR_3);
 for (VAR_2 = 0; VAR_2 < VAR_1[1]; VAR_2++) {
  if (VAR_0->in[VAR_0->fill_next].addr ==
      VAR_1[2 + VAR_2 * 2]) {
   FUNC_1("audamrnb_update_pcm_buf_entry: in[%d] ready\n",
    VAR_0->fill_next);
   VAR_0->in[VAR_0->fill_next].used =
       VAR_1[3 + VAR_2 * 2];
   if ((++VAR_0->fill_next) == VAR_0->pcm_buf_count)
    VAR_0->fill_next = 0;

  } else {
   FUNC_2
     ("audamrnb_update_pcm_buf_entry: expected=%x ret=%x\n"
      , VAR_0->in[VAR_0->fill_next].addr,
      VAR_1[1 + VAR_2 * 2]);
   break;
  }
 }
 if (VAR_0->in[VAR_0->fill_next].used == 0) {
  FUNC_0(VAR_0);
 } else {
  FUNC_1("audamrnb_update_pcm_buf_entry: read cannot keep up\n");
  VAR_0->buf_refresh = 1;
 }

 FUNC_4(&VAR_0->dsp_lock, VAR_3);
 FUNC_5(&VAR_0->read_wait);
}
