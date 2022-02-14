
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int type; } ;
struct v4l2_dbg_chip_ident {scalar_t__ ident; TYPE_1__ match; } ;
struct cafe_camera {scalar_t__ state; scalar_t__ sensor_type; int s_mutex; int sensor_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct cafe_camera*) ;
 int FUNC_1 (struct cafe_camera*) ;
 int FUNC_2 (struct cafe_camera*,char*,scalar_t__) ;
 int FUNC_3 (struct cafe_camera*,char*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cafe_camera*,int ,int ,struct v4l2_dbg_chip_ident*) ;

__attribute__((used)) static int FUNC_7(struct cafe_camera *VAR_8)
{
 struct v4l2_dbg_chip_ident VAR_9;
 int VAR_10;

 FUNC_4(&VAR_8->s_mutex);
 if (VAR_8->state != VAR_2)
  FUNC_3(VAR_8, "Cam init with device in funky state %d",
    VAR_8->state);
 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10)
  goto out;
 VAR_9.ident = VAR_4;
 VAR_9.match.type = VAR_3;
 VAR_9.match.addr = VAR_8->sensor_addr;
 VAR_10 = FUNC_6(VAR_8, VAR_6, VAR_7, &VAR_9);
 if (VAR_10)
  goto out;
 VAR_8->sensor_type = VAR_9.ident;
 if (VAR_8->sensor_type != VAR_5) {
  FUNC_2(VAR_8, "Unsupported sensor type 0x%x", VAR_8->sensor_type);
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = 0;
 VAR_8->state = VAR_1;
  out:
 FUNC_1(VAR_8);
 FUNC_5(&VAR_8->s_mutex);
 return VAR_10;
}
