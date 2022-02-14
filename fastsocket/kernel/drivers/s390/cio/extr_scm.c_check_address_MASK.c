
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_device {scalar_t__ address; } ;
struct sale {scalar_t__ sa; } ;
struct device {int dummy; } ;


 struct scm_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct scm_device *VAR_2 = FUNC_0(VAR_0);
 struct sale *VAR_3 = VAR_1;

 return VAR_2->address == VAR_3->sa;
}
