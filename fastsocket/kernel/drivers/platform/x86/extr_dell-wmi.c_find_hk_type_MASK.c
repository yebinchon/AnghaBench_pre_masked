
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_header {int type; int length; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmi_header const*) ;

__attribute__((used)) static void FUNC_1(const struct dmi_header *VAR_1, void *VAR_2)
{

 if ((VAR_1->type == 0xb2) && (VAR_1->length > 6)) {
  VAR_0 = 1;
  FUNC_0(VAR_1);
 }

}
