
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stifb_info {int dummy; } ;


 unsigned int FUNC_0 (struct stifb_info*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct stifb_info*) ;
 int FUNC_2 (unsigned int,struct stifb_info*,int ) ;

__attribute__((used)) static void
FUNC_3(struct stifb_info *VAR_1, int VAR_2)
{
 u32 VAR_3 = VAR_0;
 unsigned int VAR_4;
 FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (VAR_2)
  VAR_4 |= 0x0A000000;
 else
  VAR_4 &= ~0x0A000000;
 FUNC_2(VAR_4, VAR_1, VAR_3);
}
