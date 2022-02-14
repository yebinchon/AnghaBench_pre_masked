
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ decoder; scalar_t__ tuner_type; size_t tuner_i2c_master; } ;
struct cx231xx {size_t model; int tuner_addr; int * sd_tuner; TYPE_2__ board; TYPE_1__* i2c_bus; int v4l2_dev; int * sd_cx25840; int tuner_type; } ;
struct TYPE_6__ {int tuner_addr; int tuner_type; } ;
struct TYPE_4__ {int i2c_adap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct cx231xx*) ;
 int FUNC_3 (struct cx231xx*,int ,int ) ;
 int VAR_4 ;
 void* FUNC_4 (int *,int *,char*,int,int *) ;

void FUNC_5(struct cx231xx *VAR_5)
{

 FUNC_2(VAR_5);

 VAR_5->tuner_type = VAR_3[VAR_5->model].tuner_type;
 if (VAR_3[VAR_5->model].tuner_addr)
  VAR_5->tuner_addr = VAR_3[VAR_5->model].tuner_addr;


 if (VAR_5->board.decoder == VAR_0) {
  VAR_5->sd_cx25840 = FUNC_4(&VAR_5->v4l2_dev,
     &VAR_5->i2c_bus[0].i2c_adap,
     "cx25840", 0x88 >> 1, ((void*)0));
  if (VAR_5->sd_cx25840 == ((void*)0))
   FUNC_1("cx25840 subdev registration failure\n");
  FUNC_3(VAR_5, VAR_2, VAR_4);

 }


 if (VAR_5->board.tuner_type != VAR_1) {
  VAR_5->sd_tuner = FUNC_4(&VAR_5->v4l2_dev,
          &VAR_5->i2c_bus[VAR_5->board.tuner_i2c_master].i2c_adap,
          "tuner",
          VAR_5->tuner_addr, ((void*)0));
  if (VAR_5->sd_tuner == ((void*)0))
   FUNC_1("tuner subdev registration failure\n");
  else
   FUNC_0(VAR_5);
 }
}
