
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ib_sge {scalar_t__ length; scalar_t__ lkey; int addr; } ;
struct c2_data_addr {void* length; scalar_t__ to; void* stag; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct c2_data_addr * VAR_1, struct ib_sge *VAR_2, int VAR_3, u32 * VAR_4,
  u8 * VAR_5)
{
 u32 VAR_6 = 0;
 u8 VAR_7 = 0;

 while (VAR_3 > 0) {
  if ((VAR_6 + VAR_2->length) < VAR_6) {
   return -VAR_0;
  }




  if (VAR_2->length) {
   VAR_6 += VAR_2->length;
   VAR_1->stag = FUNC_0(VAR_2->lkey);
   VAR_1->to = FUNC_1(VAR_2->addr);
   VAR_1->length = FUNC_0(VAR_2->length);
   VAR_1++;
   VAR_7++;
  }
  VAR_2++;
  VAR_3--;
 }

 if (VAR_7 == 0) {






  VAR_1->stag = 0;
  VAR_1->to = 0;
  VAR_1->length = 0;
 }

 *VAR_4 = VAR_6;
 *VAR_5 = VAR_7;
 return 0;
}
