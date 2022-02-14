
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt1_config {int va1j5jf8007t_config; int va1j5jf8007s_config; } ;
struct i2c_adapter {int dummy; } ;
struct pt1 {int * adaps; TYPE_1__* pdev; struct i2c_adapter i2c_adap; } ;
struct TYPE_4__ {int (* release ) (struct dvb_frontend*) ;} ;
struct dvb_frontend {TYPE_2__ ops; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*) ;
 struct pt1_config* VAR_1 ;
 int FUNC_1 (int ,struct dvb_frontend*) ;
 struct pt1_config* VAR_2 ;
 int FUNC_2 (struct dvb_frontend*) ;
 struct dvb_frontend* FUNC_3 (int *,struct i2c_adapter*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 struct dvb_frontend* FUNC_5 (int *,struct i2c_adapter*) ;
 int FUNC_6 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_7(struct pt1 *VAR_3)
{
 int VAR_4, VAR_5;
 struct i2c_adapter *VAR_6;
 const struct pt1_config *VAR_7, *VAR_8;
 struct dvb_frontend *VAR_9[4];
 int VAR_10;

 VAR_4 = 0;
 VAR_5 = 0;

 VAR_6 = &VAR_3->i2c_adap;
 VAR_7 = VAR_3->pdev->device == 0x211a ? VAR_1 : VAR_2;
 do {
  VAR_8 = &VAR_7[VAR_4 / 2];

  VAR_9[VAR_4] = FUNC_3(&VAR_8->va1j5jf8007s_config,
         VAR_6);
  if (!VAR_9[VAR_4]) {
   VAR_10 = -VAR_0;
   goto err;
  }
  VAR_4++;

  VAR_9[VAR_4] = FUNC_5(&VAR_8->va1j5jf8007t_config,
         VAR_6);
  if (!VAR_9[VAR_4]) {
   VAR_10 = -VAR_0;
   goto err;
  }
  VAR_4++;

  VAR_10 = FUNC_4(VAR_9[VAR_4 - 2]);
  if (VAR_10 < 0)
   goto err;

  VAR_10 = FUNC_6(VAR_9[VAR_4 - 1]);
  if (VAR_10 < 0)
   goto err;

 } while (VAR_4 < 4);

 do {
  VAR_10 = FUNC_1(VAR_3->adaps[VAR_5], VAR_9[VAR_5]);
  if (VAR_10 < 0)
   goto err;
 } while (++VAR_5 < 4);

 return 0;

err:
 while (VAR_4-- > VAR_5)
  VAR_9[VAR_4]->ops.release(VAR_9[VAR_4]);

 while (VAR_5--)
  FUNC_0(VAR_9[VAR_5]);

 return VAR_10;
}
