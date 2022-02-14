
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {void* dfsentry; } ;
typedef void b43_dfs_file ;
struct b43_debugfs_fops {int file_struct_offset; } ;



__attribute__((used)) static inline
struct b43_dfs_file *FUNC_0(struct b43_wldev *VAR_0,
          const struct b43_debugfs_fops *VAR_1)
{
 void *VAR_2;

 VAR_2 = VAR_0->dfsentry;
 VAR_2 += VAR_1->file_struct_offset;

 return VAR_2;
}
