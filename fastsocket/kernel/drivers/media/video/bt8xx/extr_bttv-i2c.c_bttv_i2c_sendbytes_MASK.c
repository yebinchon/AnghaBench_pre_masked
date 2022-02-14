
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
 int FUNC_0 (struct bttv*) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct bttv *VAR_7, const struct i2c_msg *VAR_8, int VAR_9)
{
 u32 VAR_10;
 int VAR_11,VAR_12;


 if (0 == VAR_8->len)
  return -VAR_3;


 VAR_10 = (VAR_8->addr << 25) | (VAR_8->buf[0] << 16) | VAR_5;
 if (VAR_8->len > 1 || !VAR_9)
  VAR_10 |= VAR_2;
 FUNC_1(VAR_10, VAR_0);
 VAR_11 = FUNC_0(VAR_7);
 if (VAR_11 < 0)
  goto err;
 if (VAR_11 == 0)
  goto eio;
 if (VAR_6) {
  FUNC_2(" <W %02x %02x", VAR_8->addr << 1, VAR_8->buf[0]);
  if (!(VAR_10 & VAR_2))
   FUNC_2(" >\n");
 }

 for (VAR_12 = 1; VAR_12 < VAR_8->len; VAR_12++ ) {

  VAR_10 = (VAR_8->buf[VAR_12] << 24) | VAR_5 | VAR_1;
  if (VAR_12 < VAR_8->len-1 || !VAR_9)
   VAR_10 |= VAR_2;
  FUNC_1(VAR_10, VAR_0);
  VAR_11 = FUNC_0(VAR_7);
  if (VAR_11 < 0)
   goto err;
  if (VAR_11 == 0)
   goto eio;
  if (VAR_6) {
   FUNC_2(" %02x", VAR_8->buf[VAR_12]);
   if (!(VAR_10 & VAR_2))
    FUNC_2(" >\n");
  }
 }
 return VAR_8->len;

 eio:
 VAR_11 = -VAR_4;
 err:
 if (VAR_6)
  FUNC_2(" ERR: %d\n",VAR_11);
 return VAR_11;
}
