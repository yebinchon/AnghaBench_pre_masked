
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ range_end; scalar_t__ range_start; int nr_to_write; int sync_mode; } ;
struct page {TYPE_1__* mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,struct page*) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*,struct writeback_control*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_2)
{
 int VAR_3 = 0;
 loff_t VAR_4 = FUNC_4(VAR_2);
 loff_t VAR_5 = VAR_4 + (loff_t)(VAR_0 - 1);
 struct writeback_control VAR_6 = {
  .sync_mode = VAR_1,
  .nr_to_write = 0,
  .range_start = VAR_4,
  .range_end = VAR_5,
 };

 FUNC_0(1, "Launder page: %p", VAR_2);

 if (FUNC_3(VAR_2))
  VAR_3 = FUNC_2(VAR_2, &VAR_6);

 FUNC_1(VAR_2, VAR_2->mapping->host);
 return VAR_3;
}
