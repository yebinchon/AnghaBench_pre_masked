
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_ohci {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct ti_ohci*,int) ;
 int FUNC_2 (struct ti_ohci*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ti_ohci *VAR_0, int VAR_1)
{
 int VAR_2,VAR_3=0;
 u32 VAR_4;

 FUNC_2(VAR_0, VAR_1, 0xffffffff);
 VAR_4 = FUNC_1(VAR_0, VAR_1);

 FUNC_0("Iso contexts reg: %08x implemented: %08x", VAR_1, VAR_4);


 for (VAR_2=0; VAR_2<32; VAR_2++) {
      if (VAR_4 & 1) VAR_3++;
  VAR_4 >>= 1;
 }
 return VAR_3;
}
