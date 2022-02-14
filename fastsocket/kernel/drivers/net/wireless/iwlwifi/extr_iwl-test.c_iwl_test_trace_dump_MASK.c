
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netlink_callback {int* args; } ;
struct TYPE_2__ {int nchunks; int size; scalar_t__ trace_addr; int enabled; } ;
struct iwl_test {TYPE_1__ trace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct iwl_test *VAR_5, struct sk_buff *VAR_6,
          struct netlink_callback *VAR_7)
{
 int VAR_8, VAR_9;

 if (!VAR_5->trace.enabled || !VAR_5->trace.trace_addr)
  return -VAR_1;

 VAR_8 = VAR_7->args[4];
 if (VAR_8 >= VAR_5->trace.nchunks)
  return -VAR_3;

 VAR_9 = VAR_0;
 if (((VAR_8 + 1) == VAR_5->trace.nchunks) &&
     (VAR_5->trace.size % VAR_0))
  VAR_9 = VAR_5->trace.size %
   VAR_0;

 if (FUNC_0(VAR_6, VAR_4, VAR_9,
      VAR_5->trace.trace_addr + (VAR_0 * VAR_8)))
  goto nla_put_failure;

 VAR_7->args[4] = ++VAR_8;
 return 0;

 nla_put_failure:
 return -VAR_2;
}
