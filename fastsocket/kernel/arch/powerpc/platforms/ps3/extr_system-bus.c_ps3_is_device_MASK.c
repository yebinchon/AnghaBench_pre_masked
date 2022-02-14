
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ps3_system_bus_device {scalar_t__ bus_id; scalar_t__ dev_id; } ;



__attribute__((used)) static int FUNC_0(struct ps3_system_bus_device *VAR_0, u64 VAR_1,
    u64 VAR_2)
{
 return VAR_0->bus_id == VAR_1 && VAR_0->dev_id == VAR_2;
}
