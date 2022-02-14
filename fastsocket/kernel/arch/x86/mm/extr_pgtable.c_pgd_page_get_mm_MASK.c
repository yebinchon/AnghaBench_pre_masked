
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct mm_struct {int dummy; } ;



struct mm_struct *FUNC_0(struct page *VAR_0)
{
 return (struct mm_struct *)VAR_0->index;
}
