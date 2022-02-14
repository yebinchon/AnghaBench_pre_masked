
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct socket {int so_flags; int * so_cfil_db; } ;
struct proc {int dummy; } ;
struct cfil_info {int cfi_flags; struct cfil_entry* cfi_entries; } ;
struct cfil_entry {int cfe_flags; int * cfe_filter; } ;
typedef scalar_t__ errno_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*,struct cfil_info*) ;
 int FUNC_4 (int ,struct cfil_info*,char*) ;
 struct proc* FUNC_5 () ;
 int FUNC_6 (struct socket*) ;
 scalar_t__ FUNC_7 (struct proc*,struct socket*,int) ;
 scalar_t__ FUNC_8 (struct proc*,struct socket*,int,int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10(struct socket *VAR_9, struct cfil_info *VAR_10, uint32_t VAR_11)
{
 errno_t VAR_12 = 0;
 struct cfil_entry *VAR_13;
 struct proc *VAR_14;

 if ((VAR_9->so_flags & VAR_8) == 0 || VAR_10 == ((void*)0))
  goto done;

 FUNC_6(VAR_9);

 VAR_13 = &VAR_10->cfi_entries[VAR_11 - 1];


 if (VAR_13->cfe_filter == ((void*)0))
  goto done;

 VAR_10->cfi_flags |= VAR_2;

 VAR_14 = FUNC_5();





 if (VAR_9->so_cfil_db == ((void*)0)) {
  VAR_12 = FUNC_8(VAR_14, VAR_9,
        VAR_6 | VAR_7,
        VAR_3);


  if (VAR_12 == 0)
   VAR_12 = FUNC_7(VAR_14, VAR_9,
         VAR_6 | VAR_7);
 }


 VAR_13->cfe_flags |= VAR_0;



 FUNC_0(VAR_5, "so %llx detached %u",
  (uint64_t)FUNC_1(VAR_9), VAR_11);


 FUNC_3(VAR_9, VAR_10);

 if (VAR_10 && (VAR_10->cfi_flags & VAR_1)) {
  if (FUNC_2(VAR_9) == 0) {
   FUNC_0(VAR_5, "so %llx waking",
    (uint64_t)FUNC_1(VAR_9));
   FUNC_9((caddr_t)VAR_10);
  }
 }
done:
 return (VAR_12);
}
