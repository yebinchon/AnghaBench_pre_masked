
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xpc_notify_func ;
typedef int u32 ;
typedef int u16 ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* send_notify ) (short,int,int ,void*,int ,int ,void*) ;} ;


 int FUNC_0 (short,int,int ,void*,int ,int ,void*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline enum xp_retval
FUNC_1(short VAR_1, int VAR_2, u32 VAR_3, void *VAR_4,
  u16 VAR_5, xpc_notify_func VAR_6, void *VAR_7)
{
 return VAR_0.send_notify(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7);
}
