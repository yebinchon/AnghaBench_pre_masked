
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct bitmap_storage {scalar_t__ file_pages; struct page** filemap; } ;


 size_t FUNC_0 (struct bitmap_storage*,unsigned long) ;

__attribute__((used)) static inline struct page *FUNC_1(struct bitmap_storage *VAR_0,
         unsigned long VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1) >= VAR_0->file_pages)
  return ((void*)0);
 return VAR_0->filemap[FUNC_0(VAR_0, VAR_1)
         - FUNC_0(VAR_0, 0)];
}
