
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct flexcop_device {int init_state; TYPE_5__* fe; int dvb_adapter; int dev_type; TYPE_1__* fc_i2c_adap; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_10__ {TYPE_2__ info; } ;
struct TYPE_12__ {TYPE_3__ ops; } ;
struct TYPE_11__ {scalar_t__ (* attach ) (struct flexcop_device*,int *) ;int type; } ;
struct TYPE_8__ {int i2c_adap; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (char*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (struct flexcop_device*,int *) ;

int FUNC_6(struct flexcop_device *VAR_5)
{
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  if (!VAR_4[VAR_6].attach)
   continue;


  VAR_5->dev_type = VAR_4[VAR_6].type;
  if (VAR_4[VAR_6].attach(VAR_5, &VAR_5->fc_i2c_adap[0].i2c_adap))
   goto fe_found;

  if (VAR_5->fe) {
   FUNC_1(VAR_5->fe);
   VAR_5->fe = ((void*)0);
  }
 }
 VAR_5->dev_type = VAR_3;
 FUNC_3("no frontend driver found for this B2C2/FlexCop adapter");
 return -VAR_1;

fe_found:
 FUNC_4("found '%s' .", VAR_5->fe->ops.info.name);
 if (FUNC_2(&VAR_5->dvb_adapter, VAR_5->fe)) {
  FUNC_3("frontend registration failed!");
  FUNC_1(VAR_5->fe);
  VAR_5->fe = ((void*)0);
  return -VAR_0;
 }
 VAR_5->init_state |= VAR_2;
 return 0;
}
