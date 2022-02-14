
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct extent_map {scalar_t__ block_start; int len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*,struct extent_map*) ;
 struct extent_map* FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct extent_map*) ;
 int FUNC_3 (struct extent_map*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, u64 VAR_2, int VAR_3,
          u64 *VAR_4, u64 *VAR_5, u64 *VAR_6)
{
 struct extent_map *VAR_7;
 int VAR_8 = 1;
 bool VAR_9 = 1;





 if (VAR_2 < *VAR_6)
  return 1;

 *VAR_5 = 0;

 VAR_7 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_7)
  return 0;


 if (VAR_7->block_start >= VAR_0) {
  VAR_8 = 0;
  goto out;
 }

 VAR_9 = FUNC_0(VAR_1, VAR_7);





 if ((*VAR_4 == 0 || *VAR_4 >= VAR_3) &&
     (VAR_7->len >= VAR_3 || !VAR_9))
  VAR_8 = 0;
out:
 if (VAR_8) {
  *VAR_6 = FUNC_2(VAR_7);
 } else {
  *VAR_4 = 0;
  *VAR_5 = FUNC_2(VAR_7);
  *VAR_6 = 0;
 }

 FUNC_3(VAR_7);
 return VAR_8;
}
