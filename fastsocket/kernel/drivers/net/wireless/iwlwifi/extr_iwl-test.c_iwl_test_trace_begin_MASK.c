
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int enabled; scalar_t__ size; scalar_t__ tsize; int nchunks; int dma_addr; int * trace_addr; int cpu_addr; } ;
struct iwl_test {TYPE_1__ trace; TYPE_2__* trans; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ,scalar_t__,int *,int ) ;
 struct sk_buff* FUNC_4 (struct iwl_test*,int) ;
 int FUNC_5 (struct iwl_test*,struct sk_buff*) ;
 int FUNC_6 (struct iwl_test*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_9 (struct nlattr*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int,int *) ;

__attribute__((used)) static int FUNC_11(struct iwl_test *VAR_14, struct nlattr **VAR_15)
{
 struct sk_buff *VAR_16;
 int VAR_17 = 0;

 if (VAR_14->trace.enabled)
  return -VAR_1;

 if (!VAR_15[VAR_8])
  VAR_14->trace.size = VAR_11;
 else
  VAR_14->trace.size =
   FUNC_9(VAR_15[VAR_8]);

 if (!VAR_14->trace.size)
  return -VAR_2;

 if (VAR_14->trace.size < VAR_13 ||
     VAR_14->trace.size > VAR_12)
  return -VAR_2;

 VAR_14->trace.tsize = VAR_14->trace.size + VAR_10;
 VAR_14->trace.cpu_addr = FUNC_3(VAR_14->trans->dev,
       VAR_14->trace.tsize,
       &VAR_14->trace.dma_addr,
       VAR_5);
 if (!VAR_14->trace.cpu_addr)
  return -VAR_4;

 VAR_14->trace.enabled = 1;
 VAR_14->trace.trace_addr = (u8 *)FUNC_2(VAR_14->trace.cpu_addr, 0x100);

 FUNC_8(VAR_14->trace.trace_addr, 0x03B, VAR_14->trace.size);

 VAR_16 = FUNC_4(VAR_14, sizeof(VAR_14->trace.dma_addr) + 20);
 if (!VAR_16) {
  FUNC_1(VAR_14->trans, "Memory allocation fail\n");
  FUNC_6(VAR_14);
  return -VAR_4;
 }

 if (FUNC_10(VAR_16, VAR_7,
      sizeof(VAR_14->trace.dma_addr),
      (u64 *)&VAR_14->trace.dma_addr))
  goto nla_put_failure;

 VAR_17 = FUNC_5(VAR_14, VAR_16);
 if (VAR_17 < 0)
  FUNC_1(VAR_14->trans, "Error sending msg : %d\n", VAR_17);

 VAR_14->trace.nchunks = FUNC_0(VAR_14->trace.size,
       VAR_0);

 return VAR_17;

nla_put_failure:
 FUNC_7(VAR_16);
 if (FUNC_9(VAR_15[VAR_6]) ==
     VAR_9)
  FUNC_6(VAR_14);
 return -VAR_3;
}
