
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ns83820 {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ns83820 *VAR_1, u32 VAR_2)
{
 FUNC_0("resetting chip...\n");
 FUNC_3(VAR_2, VAR_1->base + VAR_0);
 do {
  FUNC_2();
 } while (FUNC_1(VAR_1->base + VAR_0) & VAR_2);
 FUNC_0("okay!\n");
}
