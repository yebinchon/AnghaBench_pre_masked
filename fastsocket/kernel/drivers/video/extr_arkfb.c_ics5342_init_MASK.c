
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ics5342_info {int dummy; } ;
struct dac_info {void* data; int dac_write_regs; int dac_read_regs; int * dacops; } ;
typedef int dac_write_regs_t ;
typedef int dac_read_regs_t ;
struct TYPE_2__ {int mode; } ;


 TYPE_1__* FUNC_0 (struct dac_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dac_info* FUNC_1 (int,int ) ;

__attribute__((used)) static struct dac_info * FUNC_2(dac_read_regs_t VAR_3, dac_write_regs_t VAR_4, void *VAR_5)
{
 struct dac_info *VAR_6 = FUNC_1(sizeof(struct ics5342_info), VAR_1);

 if (! VAR_6)
  return ((void*)0);

 VAR_6->dacops = &VAR_2;
 VAR_6->dac_read_regs = VAR_3;
 VAR_6->dac_write_regs = VAR_4;
 VAR_6->data = VAR_5;
 FUNC_0(VAR_6)->mode = VAR_0;
 return VAR_6;
}
