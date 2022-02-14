
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ipz_queue {struct ipz_page** queue_pages; } ;
struct ipz_page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ipz_queue *VAR_3, const u32 VAR_4)
{
 int VAR_5, VAR_6 = 0;
 u8 *VAR_7;

 while (VAR_6 < VAR_4) {
  VAR_7 = (u8 *)FUNC_1(VAR_1);
  if (!VAR_7)
   goto out;

  for (VAR_5 = 0; VAR_5 < VAR_2 && VAR_6 < VAR_4; VAR_5++) {
   VAR_3->queue_pages[VAR_6] = (struct ipz_page *)VAR_7;
   VAR_7 += VAR_0;
   VAR_6++;
  }
 }
 return 1;

out:
 for (VAR_6 = 0; VAR_6 < VAR_4 && VAR_3->queue_pages[VAR_6];
      VAR_6 += VAR_2)
  FUNC_0((unsigned long)(VAR_3->queue_pages)[VAR_6]);
 return 0;
}
