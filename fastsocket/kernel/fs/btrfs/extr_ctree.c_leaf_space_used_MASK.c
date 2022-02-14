
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_item {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*,int) ;
 int FUNC_3 (struct extent_buffer*,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct extent_buffer *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_1(VAR_0);
 int VAR_5 = FUNC_4(VAR_4, VAR_1 + VAR_2) - 1;

 if (!VAR_2)
  return 0;
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 VAR_3 = VAR_3 - FUNC_3(VAR_0, VAR_5);
 VAR_3 += sizeof(struct btrfs_item) * VAR_2;
 FUNC_0(VAR_3 < 0);
 return VAR_3;
}
