
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long mode; } ;
typedef TYPE_1__ imm_struct ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (char*,int *,int ) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static inline int FUNC_3(imm_struct *VAR_1, char *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 if ((VAR_3 > 5) && (FUNC_2(VAR_2, "mode=", 5) == 0)) {
  VAR_4 = FUNC_1(VAR_2 + 5, ((void*)0), 0);
  VAR_1->mode = VAR_4;
  return VAR_3;
 }
 FUNC_0("imm /proc: invalid variable\n");
 return (-VAR_0);
}
