
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct audio_in {size_t in_head; int in_tail; int wait; int dsp_lock; int dsp_cnt; int in_count; TYPE_1__* in; } ;
struct audio_frame {int bytes; } ;
struct TYPE_2__ {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct audio_in*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct audio_in *VAR_1)
{
 struct audio_frame *VAR_2;
 uint32_t VAR_3;
 unsigned long VAR_4;

 VAR_3 = VAR_1->in_head;



 VAR_2 = (void *) (((char *)VAR_1->in[VAR_3].data) - sizeof(*VAR_2));

 FUNC_1(&VAR_1->dsp_lock, VAR_4);
 VAR_1->in[VAR_3].size = VAR_2->bytes;

 VAR_1->in_head = (VAR_1->in_head + 1) & (VAR_0 - 1);


 if (VAR_1->in_head == VAR_1->in_tail)
  VAR_1->in_tail = (VAR_1->in_tail + 1) & (VAR_0 - 1);
 else
  VAR_1->in_count++;

 FUNC_0(VAR_1, VAR_1->dsp_cnt++);
 FUNC_2(&VAR_1->dsp_lock, VAR_4);

 FUNC_3(&VAR_1->wait);
}
