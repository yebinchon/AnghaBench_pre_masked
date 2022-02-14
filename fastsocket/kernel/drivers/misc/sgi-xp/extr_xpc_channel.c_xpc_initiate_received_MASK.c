
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition {int nchannels; struct xpc_channel* channels; } ;
struct xpc_channel {int dummy; } ;
struct TYPE_2__ {int (* received_payload ) (struct xpc_channel*,void*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xpc_channel*,void*) ;
 short VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct xpc_channel*) ;
 struct xpc_partition* VAR_2 ;

void
FUNC_3(short VAR_3, int VAR_4, void *VAR_5)
{
 struct xpc_partition *VAR_6 = &VAR_2[VAR_3];
 struct xpc_channel *VAR_7;

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0);
 FUNC_0(VAR_4 < 0 || VAR_4 >= VAR_6->nchannels);

 VAR_7 = &VAR_6->channels[VAR_4];
 VAR_1.received_payload(VAR_7, VAR_5);


 FUNC_2(VAR_7);
}
