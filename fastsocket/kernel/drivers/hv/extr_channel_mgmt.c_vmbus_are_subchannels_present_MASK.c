
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int sc_list; } ;


 int FUNC_0 (struct vmbus_channel*) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct vmbus_channel *VAR_0)
{
 bool VAR_1;

 VAR_1 = !FUNC_1(&VAR_0->sc_list);

 if (VAR_1) {





  FUNC_0(VAR_0);
 }

 return VAR_1;
}
