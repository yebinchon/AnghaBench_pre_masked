
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (struct page*,int ,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct writeback_control*,struct page*) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static int
FUNC_12(struct page *VAR_3, struct writeback_control *VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1();

 FUNC_8(VAR_3);
 if (!FUNC_2(VAR_3))
  FUNC_5(1, "ppw - page not up to date");
 FUNC_11(VAR_3);
retry_write:
 VAR_5 = FUNC_6(VAR_3, 0, VAR_1);
 if (VAR_5 == -VAR_0 && VAR_4->sync_mode == VAR_2)
  goto retry_write;
 else if (VAR_5 == -VAR_0)
  FUNC_10(VAR_4, VAR_3);
 else if (VAR_5 != 0)
  FUNC_3(VAR_3);
 else
  FUNC_4(VAR_3);
 FUNC_7(VAR_3);
 FUNC_9(VAR_3);
 FUNC_0(VAR_6);
 return VAR_5;
}
