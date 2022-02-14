
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {int q_free; int q_predma; int q_dma; int q_full; int q_io; } ;


 int FUNC_0 (struct ivtv_stream*,int *,int *,int *,int ) ;

void FUNC_1(struct ivtv_stream *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->q_io, ((void*)0), &VAR_0->q_free, 0);
 FUNC_0(VAR_0, &VAR_0->q_full, ((void*)0), &VAR_0->q_free, 0);
 FUNC_0(VAR_0, &VAR_0->q_dma, ((void*)0), &VAR_0->q_free, 0);
 FUNC_0(VAR_0, &VAR_0->q_predma, ((void*)0), &VAR_0->q_free, 0);
}
