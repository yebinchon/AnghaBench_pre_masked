
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ata_taskfile {int dummy; } ;
struct ata_device {int dummy; } ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (struct ata_device*,struct ata_taskfile*,int*) ;

__attribute__((used)) static unsigned int FUNC_1(struct ata_device *VAR_1,
     struct ata_taskfile *VAR_2, u16 *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_4 == 0)
  VAR_3[VAR_0] |= 0x4000;
 return VAR_4;
}
