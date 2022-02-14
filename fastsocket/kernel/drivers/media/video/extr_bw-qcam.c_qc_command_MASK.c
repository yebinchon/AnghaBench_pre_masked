
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int dummy; } ;


 int FUNC_0 (struct qcam_device*,int) ;
 int FUNC_1 (struct qcam_device*,int) ;
 int FUNC_2 (struct qcam_device*,int) ;

__attribute__((used)) static int FUNC_3(struct qcam_device *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4;

 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, 6);

 VAR_2 = FUNC_0(VAR_0, 1);

 FUNC_1(VAR_0, 0xe);
 VAR_3 = FUNC_0(VAR_0, 0);

 VAR_4 = (VAR_2 & 0xf0) | ((VAR_3 & 0xf0) >> 4);
 return VAR_4;
}
