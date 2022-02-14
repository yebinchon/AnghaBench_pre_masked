
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_cmd {scalar_t__ execute_cmd; TYPE_2__* se_dev; } ;
struct sbc_ops {scalar_t__ execute_write_same; scalar_t__ execute_write_same_unmap; } ;
typedef int sense_reason_t ;
struct TYPE_3__ {unsigned int max_write_same_len; } ;
struct TYPE_4__ {TYPE_1__ dev_attrib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct se_cmd*) ;

__attribute__((used)) static sense_reason_t
FUNC_3(struct se_cmd *VAR_2, unsigned char *VAR_3, struct sbc_ops *VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_2);

 if ((VAR_3[0] & 0x04) || (VAR_3[0] & 0x02)) {
  FUNC_0("WRITE_SAME PBDATA and LBDATA"
   " bits not supported for Block Discard"
   " Emulation\n");
  return VAR_1;
 }
 if (VAR_5 > VAR_2->se_dev->dev_attrib.max_write_same_len) {
  FUNC_1("WRITE_SAME sectors: %u exceeds max_write_same_len: %u\n",
   VAR_5, VAR_2->se_dev->dev_attrib.max_write_same_len);
  return VAR_0;
 }




 if (VAR_3[0] & 0x08) {
  if (!VAR_4->execute_write_same_unmap)
   return VAR_1;

  VAR_2->execute_cmd = VAR_4->execute_write_same_unmap;
  return 0;
 }
 if (!VAR_4->execute_write_same)
  return VAR_1;

 VAR_2->execute_cmd = VAR_4->execute_write_same;
 return 0;
}
