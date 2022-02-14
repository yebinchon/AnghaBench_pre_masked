
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct brd_device {int brd_lock; int brd_pages; } ;
typedef int sector_t ;
typedef int pgoff_t ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int) ;
 struct page* FUNC_3 (struct brd_device*,int) ;
 scalar_t__ FUNC_4 (int *,int,struct page*) ;
 struct page* FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct page *FUNC_10(struct brd_device *VAR_4, sector_t VAR_5)
{
 pgoff_t VAR_6;
 struct page *VAR_7;
 gfp_t VAR_8;

 VAR_7 = FUNC_3(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_8 = VAR_0 | VAR_3;

 VAR_8 |= VAR_2;

 VAR_7 = FUNC_2(VAR_8);
 if (!VAR_7)
  return ((void*)0);

 if (FUNC_6(VAR_0)) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 FUNC_8(&VAR_4->brd_lock);
 VAR_6 = VAR_5 >> VAR_1;
 if (FUNC_4(&VAR_4->brd_pages, VAR_6, VAR_7)) {
  FUNC_1(VAR_7);
  VAR_7 = FUNC_5(&VAR_4->brd_pages, VAR_6);
  FUNC_0(!VAR_7);
  FUNC_0(VAR_7->index != VAR_6);
 } else
  VAR_7->index = VAR_6;
 FUNC_9(&VAR_4->brd_lock);

 FUNC_7();

 return VAR_7;
}
