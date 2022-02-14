
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int register_bits; } ;
typedef TYPE_1__ cs_m68k_op ;
typedef int SStream ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,unsigned int,char*) ;

__attribute__((used)) static void FUNC_2(SStream* VAR_0, const cs_m68k_op* VAR_1)
{
 char VAR_2[128];
 unsigned int VAR_3 = VAR_1->register_bits;

 VAR_2[0] = 0;

 if (!VAR_3) {
  FUNC_0(VAR_0, "%s", "#$0");
  return;
 }

 FUNC_1(VAR_2, VAR_3 & 0xff, "d");
 FUNC_1(VAR_2, (VAR_3 >> 8) & 0xff, "a");
 FUNC_1(VAR_2, (VAR_3 >> 16) & 0xff, "fp");

 FUNC_0(VAR_0, "%s", VAR_2);
}
