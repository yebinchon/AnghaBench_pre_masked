
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int * ulp_iscsi; } ;
struct cxgbi_device {scalar_t__ lldev; } ;


 scalar_t__ FUNC_0 (struct cxgbi_device*) ;
 int FUNC_1 (char*,struct t3cdev*) ;

__attribute__((used)) static void FUNC_2(struct cxgbi_device *VAR_0)
{
 struct t3cdev *VAR_1 = (struct t3cdev *)VAR_0->lldev;

 if (FUNC_0(VAR_0)) {
  FUNC_1("t3dev 0x%p, ulp_iscsi no more user.\n", VAR_1);
  VAR_1->ulp_iscsi = ((void*)0);
 }
}
