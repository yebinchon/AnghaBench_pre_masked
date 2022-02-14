
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ dev_sectors; } ;
typedef scalar_t__ sector_t ;



__attribute__((used)) static sector_t FUNC_0(struct mddev *VAR_0, sector_t VAR_1, int VAR_2)
{
 if (VAR_1)
  return VAR_1;

 return VAR_0->dev_sectors;
}
