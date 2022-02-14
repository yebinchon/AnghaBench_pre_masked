
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct storvsc_device {int destroy; } ;
struct hv_device {TYPE_1__* channel; } ;
struct TYPE_2__ {int inbound_lock; } ;


 struct storvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct hv_device*,int *) ;
 int FUNC_2 (struct storvsc_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct storvsc_device*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct hv_device *VAR_0)
{
 struct storvsc_device *VAR_1;
 unsigned long VAR_2;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_3(&VAR_0->channel->inbound_lock, VAR_2);
 VAR_1->destroy = 1;
 FUNC_4(&VAR_0->channel->inbound_lock, VAR_2);







 FUNC_5(VAR_1);
 FUNC_3(&VAR_0->channel->inbound_lock, VAR_2);
 FUNC_1(VAR_0, ((void*)0));
 FUNC_4(&VAR_0->channel->inbound_lock, VAR_2);


 FUNC_6(VAR_0->channel);

 FUNC_2(VAR_1);
 return 0;
}
