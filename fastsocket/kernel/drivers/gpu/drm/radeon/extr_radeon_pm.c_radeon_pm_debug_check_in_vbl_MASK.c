
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static bool FUNC_2(struct radeon_device *VAR_0, bool VAR_1)
{
 u32 VAR_2 = 0;
 bool VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 == 0)
  FUNC_0("not in vbl for pm change %08x at %s\n", VAR_2,
    VAR_1 ? "exit" : "entry");
 return VAR_3;
}
