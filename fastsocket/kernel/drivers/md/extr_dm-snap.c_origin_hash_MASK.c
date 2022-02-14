
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_dev; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(struct block_device *VAR_1)
{
 return VAR_1->bd_dev & VAR_0;
}
