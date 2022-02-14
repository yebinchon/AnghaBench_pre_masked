
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt1_buffer_page {int dummy; } ;
struct pt1 {TYPE_2__* tables; } ;
struct TYPE_4__ {TYPE_1__* bufs; } ;
struct TYPE_3__ {struct pt1_buffer_page* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pt1*,struct pt1_buffer_page*) ;
 int FUNC_2 (struct pt1*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(void *VAR_3)
{
 struct pt1 *VAR_4;
 int VAR_5;
 int VAR_6;
 struct pt1_buffer_page *VAR_7;

 VAR_4 = VAR_3;
 FUNC_4();

 VAR_5 = 0;
 VAR_6 = 0;

 while (!FUNC_0()) {
  FUNC_5();

  VAR_7 = VAR_4->tables[VAR_5].bufs[VAR_6].page;
  if (!FUNC_1(VAR_4, VAR_7)) {
   FUNC_3((VAR_0 + 999) / 1000);
   continue;
  }

  if (++VAR_6 >= VAR_1) {
   FUNC_2(VAR_4);
   VAR_6 = 0;
   if (++VAR_5 >= VAR_2)
    VAR_5 = 0;
  }
 }

 return 0;
}
