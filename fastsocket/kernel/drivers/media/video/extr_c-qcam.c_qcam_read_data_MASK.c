
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int pport; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct qcam_device*,int) ;
 int FUNC_2 (struct qcam_device*,int) ;

__attribute__((used)) static int FUNC_3(struct qcam_device *VAR_0)
{
 unsigned int VAR_1;
 FUNC_2(VAR_0, 0);
 if (FUNC_1(VAR_0, 1)) return -1;
 VAR_1 = FUNC_0(VAR_0->pport) & 0xf0;
 FUNC_2(VAR_0, 1);
 if (FUNC_1(VAR_0, 0)) return -1;
 VAR_1 |= (FUNC_0(VAR_0->pport) >> 4);
 return VAR_1;
}
