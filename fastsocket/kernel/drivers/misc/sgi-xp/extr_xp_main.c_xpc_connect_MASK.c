
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xpc_channel_func ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct xpc_registration {int mutex; int * func; void* key; scalar_t__ idle_limit; scalar_t__ assigned_limit; scalar_t__ nentries; scalar_t__ entry_size; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* connect ) (int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 struct xpc_registration* VAR_7 ;

enum xp_retval
FUNC_5(int VAR_8, xpc_channel_func VAR_9, void *VAR_10, u16 VAR_11,
     u16 VAR_12, u32 VAR_13, u32 VAR_14)
{
 struct xpc_registration *VAR_15;

 FUNC_0(VAR_8 < 0 || VAR_8 >= VAR_0);
 FUNC_0(VAR_11 == 0 || VAR_12 == 0);
 FUNC_0(VAR_9 == ((void*)0));
 FUNC_0(VAR_13 == 0 || VAR_14 > VAR_13);

 if (FUNC_1(VAR_11) > VAR_1)
  return VAR_4;

 VAR_15 = &VAR_7[VAR_8];

 if (FUNC_2(&VAR_15->mutex) != 0)
  return VAR_3;


 if (VAR_15->func != ((void*)0)) {
  FUNC_3(&VAR_15->mutex);
  return VAR_2;
 }


 VAR_15->entry_size = FUNC_1(VAR_11);
 VAR_15->nentries = VAR_12;
 VAR_15->assigned_limit = VAR_13;
 VAR_15->idle_limit = VAR_14;
 VAR_15->key = VAR_10;
 VAR_15->func = VAR_9;

 FUNC_3(&VAR_15->mutex);

 VAR_6.connect(VAR_8);

 return VAR_5;
}
