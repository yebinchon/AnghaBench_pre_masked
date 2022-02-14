
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acm_wb {int dmah; int buf; } ;
struct acm {int writesize; int dev; struct acm_wb* wb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct acm *VAR_3)
{
 int VAR_4;
 struct acm_wb *VAR_5;

 for (VAR_5 = &VAR_3->wb[0], VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_5++) {
  VAR_5->buf = FUNC_0(VAR_3->dev, VAR_3->writesize, VAR_2,
      &VAR_5->dmah);
  if (!VAR_5->buf) {
   while (VAR_4 != 0) {
    --VAR_4;
    --VAR_5;
    FUNC_1(VAR_3->dev, VAR_3->writesize,
        VAR_5->buf, VAR_5->dmah);
   }
   return -VAR_1;
  }
 }
 return 0;
}
