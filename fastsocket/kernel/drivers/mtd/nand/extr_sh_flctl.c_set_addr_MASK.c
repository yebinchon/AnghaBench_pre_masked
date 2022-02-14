
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sh_flctl {scalar_t__ rw_ADRCNT; scalar_t__ page_size; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sh_flctl*) ;
 int FUNC_1 (struct sh_flctl*) ;
 struct sh_flctl* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_1, int VAR_2, int VAR_3)
{
 struct sh_flctl *VAR_4 = FUNC_2(VAR_1);
 uint32_t VAR_5 = 0;

 if (VAR_2 == -1) {
  VAR_5 = VAR_3;
 } else if (VAR_3 != -1) {

  if (VAR_4->page_size) {
   VAR_5 = VAR_2 & 0x0FFF;
   VAR_5 |= (VAR_3 & 0xff) << 16;
   VAR_5 |= ((VAR_3 >> 8) & 0xff) << 24;

   if (VAR_4->rw_ADRCNT == VAR_0) {
    uint32_t VAR_6;
    VAR_6 = (VAR_3 >> 16) & 0xff;
    FUNC_3(VAR_6, FUNC_1(VAR_4));
   }
  } else {
   VAR_5 = VAR_2;
   VAR_5 |= (VAR_3 & 0xff) << 8;
   VAR_5 |= ((VAR_3 >> 8) & 0xff) << 16;
   VAR_5 |= ((VAR_3 >> 16) & 0xff) << 24;
  }
 }
 FUNC_3(VAR_5, FUNC_0(VAR_4));
}
