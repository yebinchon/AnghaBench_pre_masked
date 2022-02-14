
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_gather_list {int dummy; } ;
struct cxgbi_ddp_info {int map_lock; struct cxgbi_gather_list** gl_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,unsigned int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct cxgbi_ddp_info *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4,
     unsigned int VAR_5,
     struct cxgbi_gather_list *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;


 if ((VAR_4 - VAR_3) < VAR_5) {
  FUNC_0(1 << VAR_0,
   "NOT enough entries %u+%u < %u.\n", VAR_3, VAR_5, VAR_4);
  return -VAR_1;
 }

 VAR_4 -= VAR_5;
 FUNC_1(&VAR_2->map_lock);
 for (VAR_7 = VAR_3; VAR_7 < VAR_4;) {
  for (VAR_8 = 0, VAR_9 = VAR_7; VAR_8 < VAR_5; VAR_8++, VAR_9++) {
   if (VAR_2->gl_map[VAR_9])
    break;
  }
  if (VAR_8 == VAR_5) {
   for (VAR_8 = 0, VAR_9 = VAR_7; VAR_8 < VAR_5; VAR_8++, VAR_9++)
    VAR_2->gl_map[VAR_9] = VAR_6;
   FUNC_2(&VAR_2->map_lock);
   return VAR_7;
  }
  VAR_7 += VAR_8 + 1;
 }
 FUNC_2(&VAR_2->map_lock);
 FUNC_0(1 << VAR_0,
  "NO suitable entries %u available.\n", VAR_5);
 return -VAR_1;
}
