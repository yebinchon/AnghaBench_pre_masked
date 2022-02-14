
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int used; } ;
struct audio {int out_needed; int out_tail; int dsp_lock; struct buffer* out; int write_wait; int running; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct audio*,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct audio *VAR_0, unsigned VAR_1)
{
 struct buffer *VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->dsp_lock, VAR_3);
 if (!VAR_0->running)
  goto done;

 if (VAR_1) {






  VAR_0->out_needed = 1;
  VAR_2 = VAR_0->out + VAR_0->out_tail;
  if (VAR_2->used == 0xffffffff) {
   VAR_2->used = 0;
   VAR_0->out_tail ^= 1;
   FUNC_4(&VAR_0->write_wait);
  }
 }

 if (VAR_0->out_needed) {







  VAR_2 = VAR_0->out + VAR_0->out_tail;
  if (VAR_2->used) {
   FUNC_0(VAR_2->used == 0xffffffff);

   FUNC_1(VAR_0, VAR_0->out_tail,
          VAR_2->used);
   VAR_2->used = 0xffffffff;
   VAR_0->out_needed = 0;
  }
 }
 done:
 FUNC_3(&VAR_0->dsp_lock, VAR_3);
}
