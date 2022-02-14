
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ipath_devdata {scalar_t__ ib_init; scalar_t__ ib_arm; scalar_t__ ib_active; } ;


 scalar_t__ FUNC_0 (struct ipath_devdata*,int ) ;

__attribute__((used)) static char *FUNC_1(struct ipath_devdata *VAR_0, u64 VAR_1)
{
 char *VAR_2;
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 == VAR_0->ib_init)
  VAR_2 = "Init";
 else if (VAR_3 == VAR_0->ib_arm)
  VAR_2 = "Arm";
 else if (VAR_3 == VAR_0->ib_active)
  VAR_2 = "Active";
 else
  VAR_2 = "Down";
 return VAR_2;
}
