
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_device {int dummy; } ;


 int FUNC_0 (struct ap_device*,unsigned long*) ;
 int FUNC_1 (struct ap_device*,unsigned long*) ;

__attribute__((used)) static inline int FUNC_2(struct ap_device *VAR_0, unsigned long *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 return FUNC_1(VAR_0, VAR_1);
}
