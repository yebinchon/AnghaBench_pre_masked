
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dmabuf {int sglen; int * sglist; } ;
struct videobuf_buffer {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 struct page* FUNC_5 (int *) ;
 struct videobuf_dmabuf* FUNC_6 (struct videobuf_buffer*) ;

__attribute__((used)) static void FUNC_7(struct videobuf_buffer *VAR_1)
{
 struct videobuf_dmabuf *VAR_2 = FUNC_6(VAR_1);
 size_t VAR_3;
 struct page *VAR_4;
 int VAR_5;

 if (VAR_2->sglist == ((void*)0))
  return;

 VAR_5 = VAR_2->sglen;
 while (VAR_5) {
  VAR_5--;
  VAR_3 = FUNC_4(&VAR_2->sglist[VAR_5]);
  VAR_4 = FUNC_5(&VAR_2->sglist[VAR_5]);
  do {
   FUNC_0(VAR_4++);
  } while (VAR_3 -= VAR_0);
  FUNC_1(FUNC_5(&VAR_2->sglist[VAR_5]),
        FUNC_2(FUNC_4(&VAR_2->sglist[VAR_5])));
 }

 FUNC_3(VAR_2->sglist);
 VAR_2->sglist = ((void*)0);
}
