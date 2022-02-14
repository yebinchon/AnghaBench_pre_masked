
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_user {scalar_t__ event_head; scalar_t__ event_tail; } ;



__attribute__((used)) static int FUNC_0(struct apm_user *VAR_0)
{
 return VAR_0->event_head == VAR_0->event_tail;
}
