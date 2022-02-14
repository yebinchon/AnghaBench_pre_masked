
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ctl {int cur; int index; } ;
struct btrfs_free_space {int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct io_ctl*,int ) ;
 int FUNC_1 (struct io_ctl*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct io_ctl *VAR_1,
         struct btrfs_free_space *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_1->index);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2->bitmap, VAR_1->cur, VAR_0);
 FUNC_1(VAR_1);

 return 0;
}
