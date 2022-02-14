
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int urb_length; int data_count; int urb_count; } ;
struct uvd {int dp; TYPE_1__ stats; int streaming; } ;
struct urb {int actual_length; struct uvd* context; } ;


 int FUNC_0 (struct uvd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uvd*,struct urb*) ;
 int FUNC_3 (struct uvd*,struct urb*) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_0)
{
 int VAR_1;
 struct uvd *VAR_2 = VAR_0->context;

 if (!FUNC_0(VAR_2))
  return;

 if (!VAR_2->streaming)
  return;

 VAR_2->stats.urb_count++;

 if (!VAR_0->actual_length) {
  FUNC_3(VAR_2, VAR_0);
  return;
 }

 VAR_1 = FUNC_2(VAR_2, VAR_0);
 FUNC_3(VAR_2, VAR_0);
 VAR_2->stats.urb_length = VAR_1;
 VAR_2->stats.data_count += VAR_1;
 if (VAR_1)
  FUNC_1(&VAR_2->dp);
}
