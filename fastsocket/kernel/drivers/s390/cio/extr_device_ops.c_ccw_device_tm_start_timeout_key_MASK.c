
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcw {int dummy; } ;
struct ccw_device {int dummy; } ;


 int FUNC_0 (struct ccw_device*,int) ;
 int FUNC_1 (struct ccw_device*,struct tcw*,unsigned long,int ,int ) ;

int FUNC_2(struct ccw_device *VAR_0, struct tcw *VAR_1,
        unsigned long VAR_2, u8 VAR_3, u8 VAR_4,
        int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_0, VAR_5);
 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6 != 0)
  FUNC_0(VAR_0, 0);
 return VAR_6;
}
