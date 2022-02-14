
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
struct ib_mad {int dummy; } ;
struct ib_device {int dummy; } ;
struct cm_req_msg {union ib_gid primary_path_sgid; } ;



__attribute__((used)) static union ib_gid FUNC_0(struct ib_device *VAR_0, struct ib_mad *VAR_1)
{
 struct cm_req_msg *VAR_2 = (struct cm_req_msg *)VAR_1;

 return VAR_2->primary_path_sgid;
}
