
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {unsigned char* buf; int len; unsigned int flags; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_adapter*,int) ;
 int FUNC_1 (int,int *,char*,int,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_4, struct i2c_msg *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 unsigned char *VAR_8 = VAR_5->buf;
 int VAR_9 = VAR_5->len;
 const unsigned VAR_10 = VAR_5->flags;

 while (VAR_9 > 0) {
  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6 >= 0) {
   *VAR_8 = VAR_6;
   VAR_7++;
  } else {
   break;
  }

  VAR_8++;
  VAR_9--;



  if (VAR_7 == 1 && (VAR_10 & VAR_2)) {
   if (VAR_6 <= 0 || VAR_6 > VAR_3) {
    if (!(VAR_10 & VAR_1))
     FUNC_0(VAR_4, 0);
    FUNC_2(&VAR_4->dev, "readbytes: invalid "
     "block length (%d)\n", VAR_6);
    return -VAR_0;
   }



   VAR_9 += VAR_6;
   VAR_5->len += VAR_6;
  }

  FUNC_1(2, &VAR_4->dev, "readbytes: 0x%02x %s\n",
   VAR_6,
   (VAR_10 & VAR_1)
    ? "(no ack/nak)"
    : (VAR_9 ? "A" : "NA"));

  if (!(VAR_10 & VAR_1)) {
   VAR_6 = FUNC_0(VAR_4, VAR_9);
   if (VAR_6 < 0)
    return VAR_6;
  }
 }
 return VAR_7;
}
