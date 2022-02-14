
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_2__ cam; } ;
typedef int __u8 ;
struct TYPE_3__ {int priv; } ;


 int FUNC_0 (struct gspca_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0,
   __u8 VAR_1, __u8 VAR_2)
{
 int VAR_3;


 FUNC_0(VAR_0, 0, 0x8001, VAR_1);


 FUNC_0(VAR_0, 0, 0x8002, VAR_2);


 VAR_3 = VAR_0->cam.cam_mode[(int) VAR_0->curr_mode].priv;
 FUNC_0(VAR_0, 0, 0x8003, VAR_3 << 4);
}
