
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18_stream {int q_free; int q_full; int q_busy; } ;


 int FUNC_0 (struct cx18_stream*,int *,int *) ;

void FUNC_1(struct cx18_stream *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->q_busy, &VAR_0->q_free);
 FUNC_0(VAR_0, &VAR_0->q_full, &VAR_0->q_free);
}
