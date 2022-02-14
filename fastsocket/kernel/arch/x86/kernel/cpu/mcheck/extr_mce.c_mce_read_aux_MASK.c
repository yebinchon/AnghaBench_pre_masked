
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mce {int status; int addr; void* misc; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_4(struct mce *VAR_3, int VAR_4)
{
 if (VAR_3->status & VAR_1)
  VAR_3->misc = FUNC_3(FUNC_2(VAR_4));
 if (VAR_3->status & VAR_0) {
  VAR_3->addr = FUNC_3(FUNC_1(VAR_4));




  if (VAR_2 && (VAR_3->status & VAR_1)) {
   u8 VAR_5 = FUNC_0(VAR_3->misc);
   VAR_3->addr >>= VAR_5;
   VAR_3->addr <<= VAR_5;
  }
 }
}
