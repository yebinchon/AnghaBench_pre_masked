
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxf_desc {int len; int pa_hi; int pa_lo; int va_lo; int info; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rxf_desc *VAR_0)
{
 FUNC_0("=== RxF desc CHIP ORDER/ENDIANESS =============\n"
     "info 0x%x va_lo %u pa_lo 0x%x pa_hi 0x%x len 0x%x\n",
     VAR_0->info, VAR_0->va_lo, VAR_0->pa_lo, VAR_0->pa_hi, VAR_0->len);
}
