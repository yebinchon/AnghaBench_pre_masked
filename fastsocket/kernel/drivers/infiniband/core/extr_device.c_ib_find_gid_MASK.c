
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef int u16 ;
struct ib_device {int* gid_tbl_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*) ;
 int FUNC_1 (struct ib_device*,int,int,union ib_gid*) ;
 int FUNC_2 (union ib_gid*,union ib_gid*,int) ;
 int FUNC_3 (struct ib_device*) ;

int FUNC_4(struct ib_device *VAR_1, union ib_gid *VAR_2,
  u8 *VAR_3, u16 *VAR_4)
{
 union ib_gid VAR_5;
 int VAR_6, VAR_7, VAR_8;

 for (VAR_7 = FUNC_3(VAR_1); VAR_7 <= FUNC_0(VAR_1); ++VAR_7) {
  for (VAR_8 = 0; VAR_8 < VAR_1->gid_tbl_len[VAR_7 - FUNC_3(VAR_1)]; ++VAR_8) {
   VAR_6 = FUNC_1(VAR_1, VAR_7, VAR_8, &VAR_5);
   if (VAR_6)
    return VAR_6;
   if (!FUNC_2(&VAR_5, VAR_2, sizeof *VAR_2)) {
    *VAR_3 = VAR_7;
    if (VAR_4)
     *VAR_4 = VAR_8;
    return 0;
   }
  }
 }

 return -VAR_0;
}
