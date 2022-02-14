
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct riva_regs {int * seq; int * gra; int * attr; int * crtc; int misc_output; int ext; } ;
struct TYPE_3__ {int (* UnloadStateExt ) (TYPE_1__*,int *) ;int (* LockUnlock ) (TYPE_1__*,int ) ;} ;
struct riva_par {TYPE_1__ riva; } ;


 int FUNC_0 (struct riva_par*,int) ;
 int FUNC_1 (struct riva_par*,int) ;
 int FUNC_2 (struct riva_par*,int) ;
 int FUNC_3 (struct riva_par*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct riva_par*,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_9(struct riva_par *VAR_4, struct riva_regs *VAR_5)
{
 int VAR_6;

 FUNC_4();
 VAR_4->riva.LockUnlock(&VAR_4->riva, 0);

 VAR_4->riva.UnloadStateExt(&VAR_4->riva, &VAR_5->ext);

 VAR_5->misc_output = FUNC_3(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5->crtc[VAR_6] = FUNC_1(VAR_4, VAR_6);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_5->attr[VAR_6] = FUNC_0(VAR_4, VAR_6);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_5->gra[VAR_6] = FUNC_2(VAR_4, VAR_6);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_5->seq[VAR_6] = FUNC_6(VAR_4, VAR_6);
 FUNC_5();
}
