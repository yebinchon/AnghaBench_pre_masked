
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
typedef int ide_drive_t ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct block_device*,unsigned int,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct block_device*,unsigned int,unsigned long,int ) ;

int FUNC_2(ide_drive_t *VAR_2, struct block_device *VAR_3, fmode_t VAR_4,
     unsigned int VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6, VAR_1);
 if (VAR_7 != -VAR_0)
  return VAR_7;

 return FUNC_0(VAR_2, VAR_3, VAR_5, VAR_6);
}
