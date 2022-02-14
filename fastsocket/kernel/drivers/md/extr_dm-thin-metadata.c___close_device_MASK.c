
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_thin_device {int open_count; } ;



__attribute__((used)) static void FUNC_0(struct dm_thin_device *VAR_0)
{
 --VAR_0->open_count;
}
