
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct proc_exitreasoninfo {scalar_t__ eri_reason_buf_size; int eri_kcd_buf; int eri_flags; int eri_code; int eri_namespace; } ;
struct proc_exitreasonbasicinfo {scalar_t__ beri_reason_buf_size; int beri_flags; int beri_code; int beri_namespace; } ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_7__ {int osr_flags; int osr_code; int osr_namespace; int * osr_kcd_buf; int osr_kcd_descriptor; } ;
struct TYPE_6__ {scalar_t__ p_ppid; int p_lflag; scalar_t__ p_oppid; TYPE_5__* p_exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(proc_t VAR_5, struct proc_exitreasoninfo *VAR_6, struct proc_exitreasonbasicinfo *VAR_7)
{
 uint32_t VAR_8 = 0;
 int VAR_9 = 0;
 pid_t VAR_10 = FUNC_4();

 FUNC_3(VAR_5);




 FUNC_0((VAR_6 != ((void*)0)) || (VAR_7 != ((void*)0)));
 FUNC_0((VAR_6 == ((void*)0)) || (VAR_7 == ((void*)0)));





 do {
  if (VAR_5->p_ppid == VAR_10)
   break;

  if ((VAR_5->p_lflag & VAR_4) != 0 &&
      (VAR_5->p_oppid == VAR_10))
   break;

  FUNC_5(VAR_5);
  return VAR_0;
 } while (0);

 if (VAR_5->p_exit_reason == VAR_3) {
  FUNC_5(VAR_5);
  return VAR_1;
 }

 if (VAR_5->p_exit_reason->osr_kcd_buf != ((void*)0)) {
  VAR_8 = FUNC_2(&VAR_5->p_exit_reason->osr_kcd_descriptor);
 }

 if (VAR_6 != ((void*)0)) {
  VAR_6->eri_namespace = VAR_5->p_exit_reason->osr_namespace;
  VAR_6->eri_code = VAR_5->p_exit_reason->osr_code;
  VAR_6->eri_flags = VAR_5->p_exit_reason->osr_flags;

  if ((VAR_6->eri_kcd_buf == 0) || (VAR_6->eri_reason_buf_size < VAR_8)) {
   FUNC_5(VAR_5);
   return VAR_2;
  }

  VAR_6->eri_reason_buf_size = VAR_8;
  if (VAR_8 != 0) {
   VAR_9 = FUNC_1(VAR_5->p_exit_reason->osr_kcd_buf, VAR_6->eri_kcd_buf, VAR_8);
  }
 } else {
  VAR_7->beri_namespace = VAR_5->p_exit_reason->osr_namespace;
  VAR_7->beri_code = VAR_5->p_exit_reason->osr_code;
  VAR_7->beri_flags = VAR_5->p_exit_reason->osr_flags;
  VAR_7->beri_reason_buf_size = VAR_8;
 }

 FUNC_5(VAR_5);

 return VAR_9;
}
