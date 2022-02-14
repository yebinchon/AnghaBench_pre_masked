
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kpcdata {int configc; unsigned long long* configv; int counterc; unsigned long long* counterv; } ;


 int FUNC_0 (int ,unsigned long long,int,unsigned long long,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_2, uint32_t VAR_3, const struct kpcdata *VAR_4)
{
 unsigned VAR_5;


 (void)VAR_3;

 for (VAR_5 = 0; VAR_5 < ((VAR_4->configc + 3) / 4); VAR_5++) {
  FUNC_0(VAR_0,
           VAR_4->configv[0 + VAR_5 * 4],
           VAR_4->configv[1 + VAR_5 * 4],
           VAR_4->configv[2 + VAR_5 * 4],
           VAR_4->configv[3 + VAR_5 * 4]);
 }


 for (VAR_5 = 0; VAR_5 < ((VAR_4->counterc + 3) / 4); VAR_5++) {
  FUNC_0(VAR_2,
           VAR_4->counterv[0 + VAR_5 * 4],
           VAR_4->counterv[1 + VAR_5 * 4],
           VAR_4->counterv[2 + VAR_5 * 4],
           VAR_4->counterv[3 + VAR_5 * 4]);
 }
}
