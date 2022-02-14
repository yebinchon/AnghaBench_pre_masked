
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tuner_setup {scalar_t__ type; int addr; scalar_t__ mode_mask; int config; int tuner_callback; } ;
struct tuner {scalar_t__ type; int mode_mask; } ;
struct i2c_client {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i2c_client*,scalar_t__,int,int,int ) ;
 struct tuner* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (char*,scalar_t__,int,scalar_t__,int) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
        struct tuner_setup *VAR_3)
{
 struct tuner *VAR_4 = FUNC_1(VAR_2);
 struct i2c_client *VAR_5 = FUNC_3(VAR_2);

 FUNC_2("Calling set_type_addr for type=%d, addr=0x%02x, mode=0x%02x, config=0x%02x\n",
   VAR_3->type,
   VAR_3->addr,
   VAR_3->mode_mask,
   VAR_3->config);

 if ((VAR_4->type == VAR_1 && ((VAR_3->addr == VAR_0) &&
     (VAR_4->mode_mask & VAR_3->mode_mask))) ||
     (VAR_3->addr == VAR_5->addr)) {
  FUNC_0(VAR_5, VAR_3->type, VAR_3->mode_mask,
    VAR_3->config, VAR_3->tuner_callback);
 } else
  FUNC_2("set addr discarded for type %i, mask %x. "
     "Asked to change tuner at addr 0x%02x, with mask %x\n",
     VAR_4->type, VAR_4->mode_mask,
     VAR_3->addr, VAR_3->mode_mask);

 return 0;
}
