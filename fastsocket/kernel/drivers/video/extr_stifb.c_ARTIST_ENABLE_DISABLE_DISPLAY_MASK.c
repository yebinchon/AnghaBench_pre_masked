
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stifb_info {int dummy; } ;


 int FUNC_0 (struct stifb_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct stifb_info*) ;
 int FUNC_2 (int,struct stifb_info*,int ) ;

__attribute__((used)) static void
FUNC_3(struct stifb_info *VAR_2, int VAR_3)
{
 u32 VAR_4 = VAR_0;
 u32 VAR_5 = VAR_1;

 FUNC_1(VAR_2);
 if (VAR_3) {
   FUNC_2(FUNC_0(VAR_2, VAR_4) | 0x0A000000, VAR_2, VAR_4);
   FUNC_2(FUNC_0(VAR_2, VAR_5) | 0x00800000, VAR_2, VAR_5);
 } else {
   FUNC_2(FUNC_0(VAR_2, VAR_4) & ~0x0A000000, VAR_2, VAR_4);
   FUNC_2(FUNC_0(VAR_2, VAR_5) & ~0x00800000, VAR_2, VAR_5);
 }
}
