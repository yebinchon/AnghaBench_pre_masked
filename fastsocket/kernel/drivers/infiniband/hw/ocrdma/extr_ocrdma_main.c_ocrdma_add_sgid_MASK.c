
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct ocrdma_dev {int sgid_lock; int * sgid_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,union ib_gid*,int) ;
 int FUNC_1 (int *,union ib_gid*,int) ;
 int FUNC_2 (union ib_gid*,int ,int) ;
 int FUNC_3 (union ib_gid*,unsigned char*,int,int ) ;
 union ib_gid VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_6(struct ocrdma_dev *VAR_2, unsigned char *VAR_3,
       bool VAR_4, u16 VAR_5)
{
 int VAR_6;
 union ib_gid VAR_7;
 unsigned long VAR_8;

 FUNC_2(&VAR_1, 0, sizeof(union ib_gid));

 FUNC_3(&VAR_7, VAR_3, VAR_4, VAR_5);

 FUNC_4(&VAR_2->sgid_lock, VAR_8);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!FUNC_0(&VAR_2->sgid_tbl[VAR_6], &VAR_1,
       sizeof(union ib_gid))) {

   FUNC_1(&VAR_2->sgid_tbl[VAR_6], &VAR_7,
          sizeof(union ib_gid));
   FUNC_5(&VAR_2->sgid_lock, VAR_8);
   return 1;
  } else if (!FUNC_0(&VAR_2->sgid_tbl[VAR_6], &VAR_7,
       sizeof(union ib_gid))) {

   FUNC_5(&VAR_2->sgid_lock, VAR_8);
   return 0;
  }
 }
 FUNC_5(&VAR_2->sgid_lock, VAR_8);
 return 0;
}
