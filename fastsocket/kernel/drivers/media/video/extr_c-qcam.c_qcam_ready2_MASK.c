
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int pport; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct qcam_device *VAR_0)
{
 return (FUNC_0(VAR_0->pport) & 0x1)?1:0;
}
