
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;



__attribute__((used)) static inline u64 *FUNC_0(struct qlcnic_cmd_args *VAR_0,
       u64 *VAR_1, int VAR_2)
{
 u32 VAR_3, VAR_4;
 u64 VAR_5;

 VAR_3 = VAR_0->rsp.arg[VAR_2];
 VAR_4 = VAR_0->rsp.arg[VAR_2 + 1];
 VAR_5 = (((u64) VAR_3) | (((u64) VAR_4) << 32));
 *VAR_1++ = VAR_5;
 return VAR_1;
}
