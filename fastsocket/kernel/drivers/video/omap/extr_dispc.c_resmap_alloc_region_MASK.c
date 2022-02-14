
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resmap {unsigned int page_cnt; unsigned int start; } ;
struct TYPE_2__ {struct resmap** res_map; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (size_t) ;
 unsigned int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 (struct resmap*,unsigned int) ;
 int FUNC_3 (unsigned long,size_t) ;

__attribute__((used)) static unsigned long FUNC_4(int VAR_3, size_t VAR_4)
{
 unsigned VAR_5;
 unsigned VAR_6;
 unsigned VAR_7;
 unsigned long VAR_8;
 struct resmap *VAR_9 = VAR_2.res_map[VAR_3];

 FUNC_0(VAR_3 >= VAR_0 || VAR_9 == ((void*)0) || !VAR_4);

 VAR_4 = FUNC_1(VAR_4) / VAR_1;
 VAR_7 = 0;
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_9->page_cnt; VAR_5++) {
  if (FUNC_2(VAR_9, VAR_5)) {
   VAR_7 = VAR_5 + 1;
   VAR_6 = 0;
  } else if (++VAR_6 == VAR_4)
   break;
 }
 if (VAR_6 < VAR_4)
  return 0;

 VAR_8 = VAR_9->start + VAR_7 * VAR_1;
 FUNC_3(VAR_8, VAR_4 * VAR_1);

 return VAR_8;
}
