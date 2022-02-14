
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv64xxx_i2c_data {int cntl_bits; int addr1; int addr2; scalar_t__ rc; scalar_t__ aborting; int bytes_left; scalar_t__ byte_posn; struct i2c_msg* msg; } ;
struct i2c_msg {int flags; scalar_t__ addr; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(struct mv64xxx_i2c_data *VAR_6,
 struct i2c_msg *VAR_7)
{
 u32 VAR_8 = 0;

 VAR_6->msg = VAR_7;
 VAR_6->byte_posn = 0;
 VAR_6->bytes_left = VAR_7->len;
 VAR_6->aborting = 0;
 VAR_6->rc = 0;
 VAR_6->cntl_bits = VAR_3 |
  VAR_4 | VAR_5;

 if (VAR_7->flags & VAR_0)
  VAR_8 = 1;

 if (VAR_7->flags & VAR_1)
  VAR_8 ^= 1;

 if (VAR_7->flags & VAR_2) {
  VAR_6->addr1 = 0xf0 | (((u32)VAR_7->addr & 0x300) >> 7) | VAR_8;
  VAR_6->addr2 = (u32)VAR_7->addr & 0xff;
 } else {
  VAR_6->addr1 = ((u32)VAR_7->addr & 0x7f) << 1 | VAR_8;
  VAR_6->addr2 = 0;
 }
}
