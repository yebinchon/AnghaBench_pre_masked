
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int len; int addr; int* buf; } ;
struct bttv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bttv*) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(struct bttv *VAR_7, const struct i2c_msg *VAR_8, int VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;

 for(VAR_11 = 0; VAR_11 < VAR_8->len; VAR_11++) {
  VAR_10 = (VAR_8->addr << 25) | (1 << 24) | VAR_5;
  if (VAR_11 < VAR_8->len-1)
   VAR_10 |= VAR_1;
  if (VAR_11 < VAR_8->len-1 || !VAR_9)
   VAR_10 |= VAR_3;
  if (VAR_11)
   VAR_10 |= VAR_2;
  FUNC_2(VAR_10, VAR_0);
  VAR_12 = FUNC_1(VAR_7);
  if (VAR_12 < 0)
   goto err;
  if (VAR_12 == 0)
   goto eio;
  VAR_8->buf[VAR_11] = ((u32)FUNC_0(VAR_0) >> 8) & 0xff;
  if (VAR_6) {
   if (!(VAR_10 & VAR_2))
    FUNC_3(" <R %02x", (VAR_8->addr << 1) +1);
   FUNC_3(" =%02x", VAR_8->buf[VAR_11]);
   if (!(VAR_10 & VAR_3))
    FUNC_3(" >\n");
  }
 }
 return VAR_8->len;

 eio:
 VAR_12 = -VAR_4;
 err:
 if (VAR_6)
  FUNC_3(" ERR: %d\n",VAR_12);
 return VAR_12;
}
