
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ivtv_stream {scalar_t__ dma; scalar_t__ type; struct ivtv* itv; } ;
struct TYPE_4__ {TYPE_1__* sliced_in; } ;
struct ivtv {TYPE_2__ vbi; } ;
struct TYPE_3__ {scalar_t__ service_set; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct ivtv_stream *VAR_3)
{
 struct ivtv *VAR_4 = VAR_3->itv;

 return VAR_3->dma == VAR_1 ||
     (VAR_2 && VAR_3->type == VAR_0 && VAR_4->vbi.sliced_in->service_set);
}
