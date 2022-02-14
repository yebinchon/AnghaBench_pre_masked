
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dmabuf {int direction; scalar_t__ sglen; scalar_t__ nr_pages; int * sglist; } ;
struct videobuf_buffer {size_t bsize; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct page* FUNC_1 (int,unsigned int) ;
 unsigned int FUNC_2 (size_t) ;
 int * FUNC_3 (int,int,int) ;
 int FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (struct videobuf_buffer*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *,struct page*,unsigned int,int ) ;
 struct videobuf_dmabuf* FUNC_8 (struct videobuf_buffer*) ;

__attribute__((used)) static int FUNC_9(struct videobuf_buffer *VAR_6)
{
 unsigned int VAR_7;
 size_t VAR_8, VAR_9 = VAR_6->bsize;
 struct page *VAR_10;
 int VAR_11, VAR_12 = 0, VAR_13 = 0;
 struct videobuf_dmabuf *VAR_14 = FUNC_8(VAR_6);





 VAR_11 = VAR_6->bsize >> VAR_3;
 VAR_14->sglist = FUNC_3(VAR_11, sizeof(*VAR_14->sglist), VAR_2);
 if (VAR_14->sglist == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto out;
 }

 while (VAR_9) {
  VAR_7 = FUNC_2(VAR_9);




  if ((VAR_4 << VAR_7) > VAR_9)
   VAR_7--;


  VAR_10 = FUNC_1(VAR_2 | VAR_1, VAR_7);

  while (VAR_10 == ((void*)0)) {
   VAR_7--;
   VAR_10 = FUNC_1(VAR_2 | VAR_1, VAR_7);
   if (VAR_10 == ((void*)0) && !VAR_7) {
    VAR_12 = -VAR_0;
    goto out;
   }
  }
  VAR_9 -= (VAR_4 << VAR_7);


  FUNC_7(&VAR_14->sglist[VAR_13], VAR_10, VAR_4 << VAR_7, 0);
  VAR_14->sglen++;
  VAR_13++;

  VAR_8 = (VAR_4 << VAR_7);


  FUNC_4(FUNC_6(VAR_10), 0, VAR_8);


  do {
   FUNC_0(VAR_10++);
  } while (VAR_8 -= VAR_4);
 }




 VAR_14->nr_pages = VAR_14->sglen;
 VAR_14->direction = VAR_5;

 return 0;

out:
 FUNC_5(VAR_6);
 return VAR_12;
}
