
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct metapage {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct page *VAR_0, struct metapage *VAR_1)
{
 if (VAR_1) {
  FUNC_2(VAR_0, (unsigned long)VAR_1);
  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
 }
 return 0;
}
