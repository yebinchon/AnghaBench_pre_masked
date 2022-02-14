
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ocrdma_dev {int * sgid_tbl; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocrdma_dev* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (union ib_gid*,int *,int) ;
 int FUNC_2 (union ib_gid*,int ,int) ;

int FUNC_3(struct ib_device *VAR_2, u8 VAR_3,
       int VAR_4, union ib_gid *VAR_5)
{
 struct ocrdma_dev *VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 if (VAR_4 >= VAR_1)
  return -VAR_0;

 FUNC_1(VAR_5, &VAR_6->sgid_tbl[VAR_4], sizeof(*VAR_5));

 return 0;
}
