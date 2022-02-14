
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ata_taskfile {int dummy; } ;
struct ata_device {int dummy; } ;
typedef int model_num ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct ata_device*,struct ata_taskfile*,int*) ;
 int FUNC_1 (int*,unsigned char*,int ,int) ;
 int FUNC_2 (int*,int,int ) ;
 scalar_t__ FUNC_3 (unsigned char*,char*) ;

__attribute__((used)) static unsigned int FUNC_4(struct ata_device *VAR_5,
     struct ata_taskfile *VAR_6, u16 *VAR_7)
{
 unsigned int VAR_8;
 unsigned char VAR_9[VAR_2 + 1];

 VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;
 FUNC_1(VAR_7, VAR_9, VAR_1, sizeof(VAR_9));

 VAR_7[83] &= ~(1 << 12);
 VAR_7[83] &= ~(1 << 13);
 VAR_7[84] &= ~(1 << 6);
 VAR_7[85] &= ~(1 << 10);
 VAR_7[76] = 0;

 if (FUNC_3(VAR_9, "Integrated Technology Express")) {

  VAR_7[49] |= 0x0300;
  VAR_7[83] &= 0x7FFF;
  VAR_7[83] |= 0x4400;
  VAR_7[86] |= 0x0400;
  VAR_7[VAR_0] |= 0x1F;


  FUNC_2(&VAR_7[VAR_3], 0x20, VAR_4);
 }
 return VAR_8;
}
