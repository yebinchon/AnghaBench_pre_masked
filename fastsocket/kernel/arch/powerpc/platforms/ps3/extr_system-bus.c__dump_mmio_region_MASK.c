
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3_mmio_region {int lpar_addr; int len; int bus_addr; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_id; int bus_id; } ;


 int FUNC_0 (char*,char const*,int,int ,...) ;

__attribute__((used)) static void FUNC_1(const struct ps3_mmio_region* VAR_0,
 const char* VAR_1, int VAR_2)
{
 FUNC_0("%s:%d: dev       %llu:%llu\n", VAR_1, VAR_2, VAR_0->dev->bus_id,
  VAR_0->dev->dev_id);
 FUNC_0("%s:%d: bus_addr  %lxh\n", VAR_1, VAR_2, VAR_0->bus_addr);
 FUNC_0("%s:%d: len       %lxh\n", VAR_1, VAR_2, VAR_0->len);
 FUNC_0("%s:%d: lpar_addr %lxh\n", VAR_1, VAR_2, VAR_0->lpar_addr);
}
