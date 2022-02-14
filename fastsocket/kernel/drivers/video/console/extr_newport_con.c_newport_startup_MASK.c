
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ word; } ;
struct TYPE_5__ {TYPE_3__ _xstart; int xstarti; } ;
struct TYPE_4__ {int config; } ;
struct newport_regs {TYPE_2__ set; TYPE_1__ cset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct newport_regs*) ;
 struct newport_regs* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static const char *FUNC_6(void)
{
 int VAR_8;

 if (!VAR_7)
  return ((void*)0);

 if (!VAR_6)
  VAR_6 = (struct newport_regs *)
   FUNC_1(VAR_7, sizeof(struct newport_regs));
 VAR_6->cset.config = VAR_2;

 if (FUNC_5(VAR_6))
  goto out_unmap;

 VAR_6->set.xstarti = VAR_3;
 if (VAR_6->set._xstart.word != FUNC_0(VAR_3))
  goto out_unmap;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_4[VAR_8] = VAR_0;

 FUNC_4();
 FUNC_2();
 FUNC_3();
 VAR_5 = 1;

 return "SGI Newport";

out_unmap:
 return ((void*)0);
}
