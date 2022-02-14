
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_buffer {unsigned int sgpages; int * sg; struct port_buffer* buf; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct port_buffer*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct port_buffer *VAR_0)
{
 unsigned int VAR_1;

 FUNC_0(VAR_0->buf);
 for (VAR_1 = 0; VAR_1 < VAR_0->sgpages; VAR_1++) {
  struct page *VAR_2 = FUNC_2(&VAR_0->sg[VAR_1]);
  if (!VAR_2)
   break;
  FUNC_1(VAR_2);
 }

 FUNC_0(VAR_0);
}
