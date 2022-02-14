
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct em28xx_ir_poll_result {int toggle_bit; int read_count; int rc_address; int* rc_data; } ;
struct em28xx_IR {struct em28xx* dev; } ;
struct em28xx {int (* em28xx_read_reg_req_len ) (struct em28xx*,int ,int ,int*,int) ;} ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct em28xx_IR *VAR_1,
     struct em28xx_ir_poll_result *VAR_2)
{
 struct em28xx *VAR_3 = VAR_1->dev;
 int VAR_4;
 u8 VAR_5[5] = { 0, 0, 0, 0, 0 };




 VAR_4 = VAR_3->em28xx_read_reg_req_len(VAR_3, 0, VAR_0,
       VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0)
  return VAR_4;


 VAR_2->toggle_bit = (VAR_5[0] >> 7);


 VAR_2->read_count = (VAR_5[0] & 0x7f);


 VAR_2->rc_address = VAR_5[1];


 VAR_2->rc_data[0] = VAR_5[2];
 VAR_2->rc_data[1] = VAR_5[3];
 VAR_2->rc_data[2] = VAR_5[4];

 return 0;
}
