
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_buffer {scalar_t__ state; int page_count; int * pages; int stream; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct go7007_buffer *VAR_1)
{
 int VAR_2;

 if (VAR_1->state != VAR_0) {
  FUNC_0(&VAR_1->stream);
  VAR_1->state = VAR_0;
 }
 if (VAR_1->page_count > 0) {
  for (VAR_2 = 0; VAR_2 < VAR_1->page_count; ++VAR_2)
   FUNC_1(VAR_1->pages[VAR_2]);
  VAR_1->page_count = 0;
 }
}
