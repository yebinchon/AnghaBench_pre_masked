
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cpu_addr; } ;
struct saa7146_dev {scalar_t__ revision; int i2c_lock; TYPE_2__* ext; TYPE_1__ d_i2c; } ;
struct i2c_msg {int dummy; } ;
typedef int __le32 ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct i2c_msg const*,int,int *) ;
 int FUNC_6 (struct i2c_msg const*,int,int *) ;
 int FUNC_7 (struct saa7146_dev*) ;
 scalar_t__ FUNC_8 (struct saa7146_dev*,int *,int) ;

__attribute__((used)) static int FUNC_9(struct saa7146_dev *VAR_4, const struct i2c_msg *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 __le32 *VAR_10 = VAR_4->d_i2c.cpu_addr;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (FUNC_3(&VAR_4->i2c_lock))
  return -VAR_1;

 for(VAR_8=0;VAR_8<VAR_6;VAR_8++) {
  FUNC_0(("msg:%d/%d\n",VAR_8+1,VAR_6));
 }


 VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_10);
 if ( 0 > VAR_9 ) {
  VAR_11 = -1;
  goto out;
 }

 if ( VAR_9 > 3 || 0 != (VAR_2 & VAR_4->ext->flags) )
  VAR_12 = 1;

 do {

  VAR_11 = FUNC_7(VAR_4);
  if ( 0 > VAR_11 ) {
   FUNC_0(("could not reset i2c-device.\n"));
   goto out;
  }


  for(VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   VAR_11 = FUNC_8(VAR_4, &VAR_10[VAR_8], VAR_12);
   if ( 0 != VAR_11) {
    if (-VAR_0 == VAR_11 && 0 != (VAR_3 & VAR_4->ext->flags))
     goto out;
    FUNC_0(("error while sending message(s). starting again.\n"));
    break;
   }
  }
  if( 0 == VAR_11 ) {
   VAR_11 = VAR_6;
   break;
  }


  FUNC_2(10);

 } while (VAR_11 != VAR_6 && VAR_7--);


 if (VAR_11 != VAR_6)
  goto out;


 if ( 0 != FUNC_5(VAR_5, VAR_6, VAR_10)) {
  FUNC_0(("could not cleanup i2c-message.\n"));
  VAR_11 = -1;
  goto out;
 }


 FUNC_0(("transmission successful. (msg:%d).\n",VAR_11));
out:


 if( 0 == VAR_4->revision ) {
  __le32 VAR_13 = 0;
  FUNC_7(VAR_4);
  if( 0 != FUNC_8(VAR_4, &VAR_13, VAR_12)) {
   FUNC_1(("revision 0 error. this should never happen.\n"));
  }
 }

 FUNC_4(&VAR_4->i2c_lock);
 return VAR_11;
}
