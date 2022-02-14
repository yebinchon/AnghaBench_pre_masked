
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {TYPE_1__* csrows; } ;
struct i3000_error_info {int errsts; int errsts2; int derrsyn; int deap; int edeap; } ;
struct TYPE_2__ {int nr_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mem_ctl_info*,unsigned long) ;
 int FUNC_4 (struct mem_ctl_info*,unsigned long,unsigned long,int ,int,int,char*) ;
 int FUNC_5 (struct mem_ctl_info*,char*) ;
 int FUNC_6 (struct mem_ctl_info*,unsigned long,unsigned long,int,char*) ;

__attribute__((used)) static int FUNC_7(struct mem_ctl_info *VAR_2,
    struct i3000_error_info *VAR_3,
    int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9;

 VAR_6 = VAR_2->csrows[0].nr_channels - 1;

 if (!(VAR_3->errsts & VAR_0))
  return 0;

 if (!VAR_4)
  return 1;

 if ((VAR_3->errsts ^ VAR_3->errsts2) & VAR_0) {
  FUNC_5(VAR_2, "UE overwrote CE");
  VAR_3->errsts = VAR_3->errsts2;
 }

 VAR_8 = FUNC_2(VAR_3->edeap, VAR_3->deap);
 VAR_9 = FUNC_1(VAR_3->deap);
 VAR_7 = FUNC_0(VAR_3->deap);

 VAR_5 = FUNC_3(VAR_2, VAR_8);

 if (VAR_3->errsts & VAR_1)
  FUNC_6(VAR_2, VAR_8, VAR_9, VAR_5, "i3000 UE");
 else
  FUNC_4(VAR_2, VAR_8, VAR_9, VAR_3->derrsyn, VAR_5,
    VAR_6 ? VAR_7 : 0, "i3000 CE");

 return 1;
}
