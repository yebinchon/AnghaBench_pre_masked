
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct c4iw_pd {int dummy; } ;
struct TYPE_2__ {int pbl_addr; int pbl_size; int stag; int len; int va_fbo; int zbva; int mw_bind_enable; int perms; int pdid; } ;
struct c4iw_mr {TYPE_1__ attr; } ;
struct c4iw_dev {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct c4iw_mr*,int ) ;
 int FUNC_2 (int *,int ,int *,int,int ,int ,int ,int ,int ,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct c4iw_dev *VAR_2, struct c4iw_pd *VAR_3,
        struct c4iw_mr *VAR_4, int VAR_5)
{
 u32 VAR_6 = VAR_1;
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_2->rdev, 0, &VAR_6, 1, VAR_4->attr.pdid,
         VAR_0, VAR_4->attr.perms,
         VAR_4->attr.mw_bind_enable, VAR_4->attr.zbva,
         VAR_4->attr.va_fbo, VAR_4->attr.len, VAR_5 - 12,
         VAR_4->attr.pbl_size, VAR_4->attr.pbl_addr);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_6);
 if (VAR_7)
  FUNC_0(&VAR_2->rdev, VAR_4->attr.stag, VAR_4->attr.pbl_size,
         VAR_4->attr.pbl_addr);
 return VAR_7;
}
