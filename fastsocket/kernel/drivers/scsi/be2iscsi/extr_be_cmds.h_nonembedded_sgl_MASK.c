
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_sge {int dummy; } ;
struct TYPE_2__ {struct be_sge* sgl; } ;
struct be_mcc_wrb {TYPE_1__ payload; } ;



__attribute__((used)) static inline struct be_sge *FUNC_0(struct be_mcc_wrb *VAR_0)
{
 return &VAR_0->payload.sgl[0];
}
