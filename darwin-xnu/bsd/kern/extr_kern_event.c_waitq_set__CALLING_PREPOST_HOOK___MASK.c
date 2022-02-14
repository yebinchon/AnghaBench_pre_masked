
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkq {int dummy; } ;
struct kqworkloop {int dummy; } ;
struct kqueue {int kq_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kqworkloop*,int ) ;
 int FUNC_1 (struct kqworkq*,int ) ;

void
FUNC_2(void *VAR_4, void *VAR_5, int VAR_6)
{
#pragma unused(knote_hook, qos)

 struct kqueue *VAR_7 = (struct kqueue *)VAR_4;

 if (VAR_7->kq_state & VAR_3) {
  struct kqworkq *VAR_8 = (struct kqworkq *)VAR_7;

  FUNC_1(VAR_8, VAR_1);
 } else if (VAR_7->kq_state & VAR_2) {
  struct kqworkloop *VAR_9 = (struct kqworkloop *)VAR_7;

  FUNC_0(VAR_9, VAR_0);
 }
}
