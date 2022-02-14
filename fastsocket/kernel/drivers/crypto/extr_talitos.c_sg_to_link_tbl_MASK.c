
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {scalar_t__ j_extent; void* len; } ;
struct scatterlist {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct talitos_ptr*,int ) ;

__attribute__((used)) static int FUNC_6(struct scatterlist *VAR_1, int VAR_2,
      int VAR_3, struct talitos_ptr *VAR_4)
{
 int VAR_5 = VAR_2;

 while (VAR_5--) {
  FUNC_5(VAR_4, FUNC_3(VAR_1));
  VAR_4->len = FUNC_1(FUNC_4(VAR_1));
  VAR_4->j_extent = 0;
  VAR_4++;
  VAR_3 -= FUNC_4(VAR_1);
  VAR_1 = FUNC_2(VAR_1);
 }


 VAR_4--;
 while (FUNC_0(VAR_4->len) <= (-VAR_3)) {

  VAR_3 += FUNC_0(VAR_4->len);
  VAR_4->len = 0;
  VAR_2--;
  VAR_4--;
 }
 VAR_4->len = FUNC_1(FUNC_0(VAR_4->len)
     + VAR_3);


 VAR_4->j_extent = VAR_0;

 return VAR_2;
}
