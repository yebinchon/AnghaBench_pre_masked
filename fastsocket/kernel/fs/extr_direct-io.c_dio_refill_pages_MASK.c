
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dio_submit {int curr_user_address; int tail; scalar_t__ head; scalar_t__ curr_page; scalar_t__ blocks_available; scalar_t__ total_pages; } ;
struct dio {int rw; int page_errors; struct page** pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,struct page**) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static inline int FUNC_4(struct dio *VAR_4, struct dio_submit *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->total_pages - VAR_5->curr_page, VAR_0);
 VAR_6 = FUNC_1(
  VAR_5->curr_user_address,
  VAR_7,
  VAR_4->rw == VAR_2,
  &VAR_4->pages[0]);

 if (VAR_6 < 0 && VAR_5->blocks_available && (VAR_4->rw & VAR_3)) {
  struct page *VAR_8 = FUNC_0(0);





  if (VAR_4->page_errors == 0)
   VAR_4->page_errors = VAR_6;
  FUNC_3(VAR_8);
  VAR_4->pages[0] = VAR_8;
  VAR_5->head = 0;
  VAR_5->tail = 1;
  VAR_6 = 0;
  goto out;
 }

 if (VAR_6 >= 0) {
  VAR_5->curr_user_address += VAR_6 * VAR_1;
  VAR_5->curr_page += VAR_6;
  VAR_5->head = 0;
  VAR_5->tail = VAR_6;
  VAR_6 = 0;
 }
out:
 return VAR_6;
}
