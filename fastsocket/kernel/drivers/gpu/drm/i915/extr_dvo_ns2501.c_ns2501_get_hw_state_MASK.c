
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dvo_device {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_dvo_device*,int ,unsigned char*) ;

__attribute__((used)) static bool FUNC_1(struct intel_dvo_device *VAR_2)
{
 unsigned char VAR_3;

 if (!FUNC_0(VAR_2, VAR_1, &VAR_3))
  return 0;

 if (VAR_3 & VAR_0)
  return 1;
 else
  return 0;
}
