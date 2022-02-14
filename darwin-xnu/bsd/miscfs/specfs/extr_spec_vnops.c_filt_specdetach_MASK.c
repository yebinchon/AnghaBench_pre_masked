
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {scalar_t__ kn_hook_data; } ;
struct TYPE_2__ {int kq_wqs; } ;


 int FUNC_0 (struct knote*) ;
 TYPE_1__* FUNC_1 (struct knote*) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_0)
{
 FUNC_0(VAR_0);
 if (VAR_0->kn_hook_data) {
  FUNC_2(VAR_0->kn_hook_data, &(FUNC_1(VAR_0)->kq_wqs));
  VAR_0->kn_hook_data = 0;
 }
}
