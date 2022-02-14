
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; TYPE_1__* mapping; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline
unsigned int FUNC_1(struct page *VAR_3)
{
 loff_t VAR_4 = FUNC_0(VAR_3->mapping->host);

 if (VAR_4 > 0) {
  pgoff_t VAR_5 = (VAR_4 - 1) >> VAR_1;
  if (VAR_3->index < VAR_5)
   return VAR_2;
  if (VAR_3->index == VAR_5)
   return ((VAR_4 - 1) & ~VAR_0) + 1;
 }
 return 0;
}
