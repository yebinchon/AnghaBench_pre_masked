
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {struct xpc_channel* channels; } ;
struct xpc_channel {int flags; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xpc_channel*,int ,unsigned long*) ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_3 ;
 short VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct xpc_channel*) ;
 int FUNC_6 (struct xpc_channel*) ;
 int FUNC_7 (struct xpc_partition*) ;
 scalar_t__ FUNC_8 (struct xpc_partition*) ;
 struct xpc_partition* VAR_5 ;

void
FUNC_9(int VAR_6)
{
 unsigned long VAR_7;
 short VAR_8;
 struct xpc_partition *VAR_9;
 struct xpc_channel *VAR_10;

 FUNC_0(VAR_6 < 0 || VAR_6 >= VAR_2);


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_9 = &VAR_5[VAR_8];

  if (FUNC_8(VAR_9)) {
   VAR_10 = &VAR_9->channels[VAR_6];
   FUNC_6(VAR_10);

   FUNC_2(&VAR_10->lock, VAR_7);

   if (!(VAR_10->flags & VAR_0)) {
    VAR_10->flags |= VAR_1;

    FUNC_1(VAR_10, VAR_3,
             &VAR_7);
   }

   FUNC_3(&VAR_10->lock, VAR_7);

   FUNC_5(VAR_10);
   FUNC_7(VAR_9);
  }
 }

 FUNC_4(VAR_6);
}
