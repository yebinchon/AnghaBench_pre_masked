
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ctl {int num_pages; scalar_t__* pages; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct io_ctl*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct io_ctl *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_pages; VAR_1++) {
  if (VAR_0->pages[VAR_1]) {
   FUNC_0(VAR_0->pages[VAR_1]);
   FUNC_3(VAR_0->pages[VAR_1]);
   FUNC_2(VAR_0->pages[VAR_1]);
  }
 }
}
