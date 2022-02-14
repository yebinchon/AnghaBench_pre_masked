
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
struct no_paging_space {int npcs_proc_count; int npcs_max_size; int pcs_proc_count; int pcs_max_size; int apcs_proc_count; scalar_t__ npcs_uniqueid; scalar_t__ pcs_uniqueid; int pcs_pid; int npcs_pid; int apcs_total_size; int pcs_total_size; int npcs_total_size; } ;
typedef TYPE_1__* proc_t ;
typedef int nps ;
struct TYPE_7__ {scalar_t__ p_uniqueid; int p_pid; char* p_comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct no_paging_space*,int) ;
 struct timeval VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct timeval*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,void*,int ,void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 () ;

int
FUNC_11()
{
 proc_t VAR_9;
 struct no_paging_space VAR_10;
 struct timeval VAR_11;




 FUNC_3(&VAR_11);

 if (VAR_11.tv_sec <= VAR_5.tv_sec + 5)
  return (0);
 FUNC_0(&VAR_10, sizeof(VAR_10));

 FUNC_7(VAR_1, VAR_8, (void *)((void*)0), VAR_7, (void *)&VAR_10);
 if (VAR_10.npcs_max_size > (FUNC_10() * 50) / 100) {




  if ((VAR_9 = FUNC_6(VAR_10.npcs_pid)) != VAR_2) {

   if (VAR_10.npcs_uniqueid == VAR_9->p_uniqueid) {





    VAR_5 = VAR_11;

    FUNC_4("low swap: killing largest compressed process with pid %d (%s) and size %llu MB\n", VAR_9->p_pid, VAR_9->p_comm, (VAR_10.pcs_max_size/VAR_0));
    FUNC_9(VAR_9, VAR_3);

    FUNC_8(VAR_9);

    return (0);
   }

   FUNC_8(VAR_9);
  }
 }





 if (FUNC_1(VAR_6) > 0) {

  VAR_5 = VAR_11;
  FUNC_2(VAR_4 );
  return (1);
 }






 if (VAR_10.pcs_max_size > 0) {
  if ((VAR_9 = FUNC_6(VAR_10.pcs_pid)) != VAR_2) {

   if (VAR_10.pcs_uniqueid == VAR_9->p_uniqueid) {





    VAR_5 = VAR_11;

    FUNC_5(VAR_9);

    FUNC_8(VAR_9);

    return (1);
   }

   FUNC_8(VAR_9);
  }
 }
 VAR_5 = VAR_11;

 FUNC_4("low swap: unable to find any eligible processes to take action on\n");

 return (0);
}
