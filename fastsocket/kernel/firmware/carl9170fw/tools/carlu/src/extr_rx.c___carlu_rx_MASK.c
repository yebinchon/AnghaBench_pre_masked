
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct carlu {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct carl9170_rsp {TYPE_1__ hdr; } ;


 int FUNC_0 (struct carlu*,struct carl9170_rsp*,scalar_t__) ;
 int FUNC_1 (struct carlu*,int*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct carlu *VAR_0, uint8_t *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = 0;


 while (VAR_2 > 2 && VAR_3 < 12 && VAR_1[0] == 0xff && VAR_1[1] == 0xff) {
  VAR_3 += 2;
  VAR_2 -= 2;
  VAR_1 += 2;
 }

 if (VAR_3 == 12) {
  struct carl9170_rsp *VAR_4;
  VAR_3 = 0;

  while (VAR_3 < VAR_2) {
   VAR_4 = (void *) &VAR_1[VAR_3];

   FUNC_0(VAR_0, VAR_4, VAR_4->hdr.len + 4);
   VAR_3 += VAR_4->hdr.len + 4;
  }
 } else {
  FUNC_1(VAR_0, VAR_1, VAR_2);
 }
}
