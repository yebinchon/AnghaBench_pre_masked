
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {int* mp_list; struct buffer_head** mp_bh; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __be64 ;



__attribute__((used)) static inline __be64 *FUNC_0(unsigned int VAR_0, const struct metapath *VAR_1)
{
 struct buffer_head *VAR_2 = VAR_1->mp_bh[VAR_0];
 unsigned int VAR_3 = (VAR_0 > 0) ?
  sizeof(struct gfs2_meta_header) : sizeof(struct gfs2_dinode);
 return ((__be64 *)(VAR_2->b_data + VAR_3)) + VAR_1->mp_list[VAR_0];
}
