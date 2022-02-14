
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sky2_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sky2_hw*,scalar_t__,int) ;
 int FUNC_1 (struct sky2_hw*,int,int) ;

__attribute__((used)) static int FUNC_2(struct sky2_hw *VAR_3, int VAR_4, const void *VAR_5,
     u16 VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 += sizeof(u32)) {
  u32 VAR_10 = *(u32 *)(VAR_5 + VAR_8);

  FUNC_0(VAR_3, VAR_4 + VAR_2, VAR_10);
  FUNC_0(VAR_3, VAR_4 + VAR_0, VAR_6 | VAR_1);

  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_1);
  if (VAR_9)
   break;
 }
 return VAR_9;
}
