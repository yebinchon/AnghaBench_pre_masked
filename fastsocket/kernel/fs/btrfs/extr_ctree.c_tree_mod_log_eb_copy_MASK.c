
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 scalar_t__ FUNC_2 (struct btrfs_fs_info*,int *) ;
 int FUNC_3 (struct btrfs_fs_info*,struct extent_buffer*,int,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct btrfs_fs_info *VAR_2, struct extent_buffer *VAR_3,
       struct extent_buffer *VAR_4, unsigned long VAR_5,
       unsigned long VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_2, ((void*)0)))
  return;

 if (FUNC_1(VAR_3) == 0 && FUNC_1(VAR_4) == 0)
  return;


 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_9 + VAR_6,
           VAR_1);
  FUNC_0(VAR_8 < 0);
  VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_9 + VAR_5,
           VAR_0);
  FUNC_0(VAR_8 < 0);
 }
}
