
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ns83820 {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ns83820 *VAR_2, u8 *VAR_3)
{
 unsigned VAR_4;
 for (VAR_4=0; VAR_4<3; VAR_4++) {
  u32 VAR_5;




  FUNC_1(VAR_4*2, VAR_2->base + VAR_0);
  VAR_5 = FUNC_0(VAR_2->base + VAR_1);

  *VAR_3++ = VAR_5;
  *VAR_3++ = VAR_5 >> 8;
 }
}
