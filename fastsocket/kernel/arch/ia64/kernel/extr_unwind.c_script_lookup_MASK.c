
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct unw_script {int hint; scalar_t__ coll_chain; } ;
struct unw_frame_info {int hint; unsigned long ip; unsigned long pr; size_t prev_script; } ;
struct TYPE_4__ {int collision_chain_traversals; int normal_hits; int hinted_hits; int lookups; } ;
struct TYPE_5__ {TYPE_1__ cache; } ;
struct TYPE_6__ {unsigned short* hash; TYPE_2__ stat; struct unw_script* cache; } ;


 int FUNC_0 (int ) ;
 unsigned short VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct unw_script*,unsigned long,unsigned long) ;
 size_t FUNC_3 (unsigned long) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static inline struct unw_script *
FUNC_4 (struct unw_frame_info *VAR_3)
{
 struct unw_script *VAR_4 = VAR_2.cache + VAR_3->hint;
 unsigned short VAR_5;
 unsigned long VAR_6, VAR_7;

 if (FUNC_1(0))
  return ((void*)0);

 FUNC_0(++VAR_2.stat.cache.lookups);

 VAR_6 = VAR_3->ip;
 VAR_7 = VAR_3->pr;

 if (FUNC_2(VAR_4, VAR_6, VAR_7)) {
  FUNC_0(++VAR_2.stat.cache.hinted_hits);
  return VAR_4;
 }

 VAR_5 = VAR_2.hash[FUNC_3(VAR_6)];
 if (VAR_5 >= VAR_0)
  return ((void*)0);

 VAR_4 = VAR_2.cache + VAR_5;
 while (1) {
  if (FUNC_2(VAR_4, VAR_6, VAR_7)) {

   FUNC_0(++VAR_2.stat.cache.normal_hits);
   VAR_2.cache[VAR_3->prev_script].hint = VAR_4 - VAR_2.cache;
   return VAR_4;
  }
  if (VAR_4->coll_chain >= VAR_1)
   return ((void*)0);
  VAR_4 = VAR_2.cache + VAR_4->coll_chain;
  FUNC_0(++VAR_2.stat.cache.collision_chain_traversals);
 }
}
