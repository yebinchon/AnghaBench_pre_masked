
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int block_size; scalar_t__ emulate_tpws; scalar_t__ emulate_tpu; } ;
struct se_device {TYPE_2__ dev_attrib; TYPE_1__* transport; } ;
struct se_cmd {int data_length; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
typedef int buf ;
struct TYPE_3__ {unsigned long long (* get_blocks ) (struct se_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int ) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int ,int,int ) ;
 unsigned long long FUNC_3 (struct se_device*) ;
 int FUNC_4 (struct se_cmd*,int ) ;
 unsigned char* FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;
 int VAR_1 ;

__attribute__((used)) static sense_reason_t
FUNC_7(struct se_cmd *VAR_2)
{
 struct se_device *VAR_3 = VAR_2->se_dev;
 unsigned char *VAR_4;
 unsigned char VAR_5[32];
 unsigned long long VAR_6 = VAR_3->transport->get_blocks(VAR_3);

 FUNC_1(VAR_5, 0, sizeof(VAR_5));
 VAR_5[0] = (VAR_6 >> 56) & 0xff;
 VAR_5[1] = (VAR_6 >> 48) & 0xff;
 VAR_5[2] = (VAR_6 >> 40) & 0xff;
 VAR_5[3] = (VAR_6 >> 32) & 0xff;
 VAR_5[4] = (VAR_6 >> 24) & 0xff;
 VAR_5[5] = (VAR_6 >> 16) & 0xff;
 VAR_5[6] = (VAR_6 >> 8) & 0xff;
 VAR_5[7] = VAR_6 & 0xff;
 VAR_5[8] = (VAR_3->dev_attrib.block_size >> 24) & 0xff;
 VAR_5[9] = (VAR_3->dev_attrib.block_size >> 16) & 0xff;
 VAR_5[10] = (VAR_3->dev_attrib.block_size >> 8) & 0xff;
 VAR_5[11] = VAR_3->dev_attrib.block_size & 0xff;




 if (VAR_3->dev_attrib.emulate_tpu || VAR_3->dev_attrib.emulate_tpws)
  VAR_5[14] = 0x80;

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_4, VAR_5, FUNC_2(VAR_1, sizeof(VAR_5), VAR_2->data_length));
  FUNC_6(VAR_2);
 }

 FUNC_4(VAR_2, VAR_0);
 return 0;
}
