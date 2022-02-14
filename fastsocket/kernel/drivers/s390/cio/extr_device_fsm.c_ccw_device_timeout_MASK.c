
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device {int ccwlock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_2)
{
 struct ccw_device *VAR_3;

 VAR_3 = (struct ccw_device *) VAR_2;
 FUNC_2(VAR_3->ccwlock);
 if (VAR_1)
  FUNC_0(VAR_3);
 FUNC_1(VAR_3, VAR_0);
 FUNC_3(VAR_3->ccwlock);
}
