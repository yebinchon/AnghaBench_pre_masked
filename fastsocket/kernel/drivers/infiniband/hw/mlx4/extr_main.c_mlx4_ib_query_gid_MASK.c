
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,int,union ib_gid*,int ) ;
 int FUNC_1 (struct ib_device*,int ,int,union ib_gid*) ;
 scalar_t__ FUNC_2 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_1, u8 VAR_2, int VAR_3,
        union ib_gid *VAR_4)
{
 if (FUNC_2(VAR_1, VAR_2) == VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 0);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
