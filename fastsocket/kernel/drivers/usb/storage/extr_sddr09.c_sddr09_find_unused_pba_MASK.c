
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sddr09_card_info {int capacity; int blockshift; int pageshift; scalar_t__* pba_to_lba; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned int
FUNC_0(struct sddr09_card_info *VAR_1, unsigned int VAR_2) {
 static unsigned int VAR_3 = 1;
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = (VAR_2/1000) << 10;
 VAR_5 = VAR_1->capacity >> (VAR_1->blockshift + VAR_1->pageshift);
 VAR_5 -= VAR_4;
 if (VAR_5 > 1024)
  VAR_5 = 1024;

 for (VAR_6 = VAR_3+1; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_1->pba_to_lba[VAR_4+VAR_6] == VAR_0) {
   VAR_3 = VAR_6;
   return VAR_4+VAR_6;
  }
 }
 for (VAR_6 = 0; VAR_6 <= VAR_3; VAR_6++) {
  if (VAR_1->pba_to_lba[VAR_4+VAR_6] == VAR_0) {
   VAR_3 = VAR_6;
   return VAR_4+VAR_6;
  }
 }
 return 0;
}
