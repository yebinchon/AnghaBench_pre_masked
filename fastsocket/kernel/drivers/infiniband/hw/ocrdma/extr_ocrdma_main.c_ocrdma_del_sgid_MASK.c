
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct ocrdma_dev {int sgid_lock; int * sgid_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,union ib_gid*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (union ib_gid*,unsigned char*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_5(struct ocrdma_dev *VAR_1, unsigned char *VAR_2,
       bool VAR_3, u16 VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 union ib_gid VAR_7;
 unsigned long VAR_8;

 FUNC_2(&VAR_7, VAR_2, VAR_3, VAR_4);

 FUNC_3(&VAR_1->sgid_lock, VAR_8);

 for (VAR_6 = 1; VAR_6 < VAR_0; VAR_6++) {
  if (!FUNC_0(&VAR_1->sgid_tbl[VAR_6], &VAR_7, sizeof(union ib_gid))) {

   FUNC_1(&VAR_1->sgid_tbl[VAR_6], 0, sizeof(union ib_gid));
   VAR_5 = 1;
   break;
  }
 }
 FUNC_4(&VAR_1->sgid_lock, VAR_8);
 return VAR_5;
}
