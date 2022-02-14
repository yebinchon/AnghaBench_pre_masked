
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device {int dummy; } ;
struct ccw1 {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*,int) ;
 int FUNC_1 (struct ccw_device*,struct ccw1*,unsigned long,int ,int ,unsigned long) ;

int FUNC_2(struct ccw_device *VAR_1, struct ccw1 *VAR_2,
     unsigned long VAR_3, __u8 VAR_4, __u8 VAR_5,
     unsigned long VAR_6, int VAR_7)
{
 int VAR_8;

 if (!VAR_1)
  return -VAR_0;
 FUNC_0(VAR_1, VAR_7);
 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 != 0)
  FUNC_0(VAR_1, 0);
 return VAR_8;
}
