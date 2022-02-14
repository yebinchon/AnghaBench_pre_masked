
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc_std {size_t len; size_t bounce_offset; struct scatterlist* bounce_sg; void* bounce_buf; } ;
struct whc {int dummy; } ;
struct scatterlist {size_t length; } ;


 int FUNC_0 (scalar_t__,void*,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(struct whc *VAR_0, struct whc_std *VAR_1)
{
 struct scatterlist *VAR_2;
 void *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_3 = VAR_1->bounce_buf;
 VAR_4 = VAR_1->len;

 VAR_2 = VAR_1->bounce_sg;
 VAR_5 = VAR_1->bounce_offset;

 while (VAR_4) {
  size_t VAR_6;

  VAR_6 = FUNC_1(VAR_2->length - VAR_5, VAR_4);
  FUNC_0(FUNC_3(VAR_2) + VAR_5, VAR_3, VAR_6);

  VAR_3 += VAR_6;
  VAR_4 -= VAR_6;

  VAR_5 += VAR_6;
  if (VAR_5 >= VAR_2->length) {
   VAR_2 = FUNC_2(VAR_2);
   VAR_5 = 0;
  }
 }

}
