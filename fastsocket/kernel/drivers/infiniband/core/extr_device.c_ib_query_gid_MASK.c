
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ib_device {int (* query_gid ) (struct ib_device*,int ,int,union ib_gid*) ;} ;


 int FUNC_0 (struct ib_device*,int ,int,union ib_gid*) ;

int FUNC_1(struct ib_device *VAR_0,
   u8 VAR_1, int VAR_2, union ib_gid *VAR_3)
{
 return VAR_0->query_gid(VAR_0, VAR_1, VAR_2, VAR_3);
}
