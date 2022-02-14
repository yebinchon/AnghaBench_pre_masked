
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct metapage {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;

__attribute__((used)) static inline struct metapage *FUNC_2(struct page *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0) ? (struct metapage *)FUNC_1(VAR_0) : ((void*)0);
}
