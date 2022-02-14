
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct block_device*) ;

__attribute__((used)) static sector_t FUNC_1(struct block_device *VAR_1)
{
 sector_t VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 return VAR_2;
}
