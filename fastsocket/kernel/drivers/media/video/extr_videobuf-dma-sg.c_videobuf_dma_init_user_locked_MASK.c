
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_dmabuf {int direction; unsigned long offset; unsigned long size; unsigned long nr_pages; int * pages; } ;
struct page {int dummy; } ;
struct TYPE_3__ {int mm; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int,char*,int,int,...) ;
 int FUNC_2 (TYPE_1__*,int ,unsigned long,int,int,int,int *,int *) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct videobuf_dmabuf *VAR_8,
   int VAR_9, unsigned long VAR_10, unsigned long VAR_11)
{
 unsigned long VAR_12, VAR_13;
 int VAR_14, VAR_15 = 0;

 VAR_8->direction = VAR_9;
 switch (VAR_8->direction) {
 case 129:
  VAR_15 = VAR_5;
  break;
 case 128:
  VAR_15 = VAR_6;
  break;
 default:
  FUNC_0();
 }

 VAR_12 = (VAR_10 & VAR_3) >> VAR_4;
 VAR_13 = ((VAR_10+VAR_11-1) & VAR_3) >> VAR_4;
 VAR_8->offset = VAR_10 & ~VAR_3;
 VAR_8->size = VAR_11;
 VAR_8->nr_pages = VAR_13-VAR_12+1;
 VAR_8->pages = FUNC_3(VAR_8->nr_pages * sizeof(struct page *), VAR_2);
 if (((void*)0) == VAR_8->pages)
  return -VAR_1;

 FUNC_1(1, "init user [0x%lx+0x%lx => %d pages]\n",
  VAR_10, VAR_11, VAR_8->nr_pages);

 VAR_14 = FUNC_2(VAR_7, VAR_7->mm,
        VAR_10 & VAR_3, VAR_8->nr_pages,
        VAR_15 == VAR_5, 1,
        VAR_8->pages, ((void*)0));

 if (VAR_14 != VAR_8->nr_pages) {
  VAR_8->nr_pages = (VAR_14 >= 0) ? VAR_14 : 0;
  FUNC_1(1, "get_user_pages: err=%d [%d]\n", VAR_14, VAR_8->nr_pages);
  return VAR_14 < 0 ? VAR_14 : -VAR_0;
 }
 return 0;
}
