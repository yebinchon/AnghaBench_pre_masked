
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct myri10ge_rx_buf {int watchdog_needed; int fill_cnt; int cnt; int mask; int page_offset; TYPE_2__* shadow; int * lanai; int bus; TYPE_1__* info; struct page* page; } ;
struct myri10ge_priv {int pdev; } ;
struct TYPE_4__ {void* addr_high; void* addr_low; } ;
struct TYPE_3__ {int page_offset; struct page* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 struct page* FUNC_3 (int,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct page*) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int ,struct page*,int ,int,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(struct myri10ge_priv *VAR_6, struct myri10ge_rx_buf *VAR_7,
   int VAR_8, int VAR_9)
{
 struct page *VAR_10;
 int VAR_11;

 if (FUNC_9(VAR_7->watchdog_needed && !VAR_9))
  return;


 while (VAR_7->fill_cnt != (VAR_7->cnt + VAR_7->mask + 1)) {
  VAR_11 = VAR_7->fill_cnt & VAR_7->mask;
  if (VAR_7->page_offset + VAR_8 <= VAR_2) {

   FUNC_4(VAR_7->page);
  } else {

   VAR_10 =
       FUNC_3(VAR_0 | VAR_4,
     VAR_1);
   if (FUNC_9(VAR_10 == ((void*)0))) {
    if (VAR_7->fill_cnt - VAR_7->cnt < 16)
     VAR_7->watchdog_needed = 1;
    return;
   }
   VAR_7->page = VAR_10;
   VAR_7->page_offset = 0;
   VAR_7->bus = FUNC_7(VAR_6->pdev, VAR_10, 0,
            VAR_2,
            VAR_3);
  }
  VAR_7->info[VAR_11].page = VAR_7->page;
  VAR_7->info[VAR_11].page_offset = VAR_7->page_offset;


  FUNC_8(&VAR_7->info[VAR_11], VAR_5, VAR_7->bus);
  VAR_7->shadow[VAR_11].addr_low =
      FUNC_5(FUNC_1(VAR_7->bus) + VAR_7->page_offset);
  VAR_7->shadow[VAR_11].addr_high =
      FUNC_5(FUNC_0(VAR_7->bus));


  VAR_7->page_offset += FUNC_2(VAR_8);







  VAR_7->fill_cnt++;


  if ((VAR_11 & 7) == 7) {
   FUNC_6(&VAR_7->lanai[VAR_11 - 7],
         &VAR_7->shadow[VAR_11 - 7]);
  }
 }
}
