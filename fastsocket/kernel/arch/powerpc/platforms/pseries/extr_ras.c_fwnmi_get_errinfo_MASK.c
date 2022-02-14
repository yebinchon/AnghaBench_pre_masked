
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtas_error_log {int dummy; } ;
struct pt_regs {unsigned long* gpr; } ;
struct TYPE_2__ {unsigned long base; int size; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (unsigned long) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,char*,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static struct rtas_error_log *FUNC_4(struct pt_regs *VAR_3)
{
 unsigned long VAR_4 = VAR_3->gpr[3];
 struct rtas_error_log *VAR_5 = ((void*)0);
 unsigned long *VAR_6;

 if ((VAR_4 >= 0x7000 && VAR_4 < 0x7fff0) ||
     (VAR_4 >= VAR_2.base && VAR_4 < VAR_2.base + VAR_2.size - 16)) {
  VAR_6 = FUNC_0(VAR_4);
  VAR_3->gpr[3] = VAR_6[0];
  FUNC_2(VAR_1, 0, VAR_0);
  FUNC_1(VAR_1, (char *)(VAR_6 + 1), VAR_0);
  VAR_5 = (struct rtas_error_log *)VAR_1;
 } else {
  FUNC_3("FWNMI: corrupt r3\n");
 }
 return VAR_5;
}
