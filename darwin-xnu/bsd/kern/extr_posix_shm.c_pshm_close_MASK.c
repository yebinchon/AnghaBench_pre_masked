
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pshmobj {int pshm_flags; struct pshmobj* pshmo_next; int pshmo_memobject; struct pshmobj* pshm_memobjects; int pshm_usecount; } ;
struct pshminfo {int pshm_flags; struct pshminfo* pshmo_next; int pshmo_memobject; struct pshminfo* pshm_memobjects; int pshm_usecount; } ;


 int VAR_0 ;
 int FUNC_0 (struct pshmobj*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pshmobj*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct pshminfo *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct pshmobj *VAR_7, *VAR_8;





 if ( !VAR_5 && ((VAR_4->pshm_flags & VAR_2) != VAR_2)) {
  return(VAR_0);
 }





 VAR_4->pshm_usecount--;

  if ((VAR_4->pshm_flags & VAR_3) && !VAR_4->pshm_usecount) {



  FUNC_2();




  for (VAR_7 = VAR_4->pshm_memobjects;
       VAR_7 != ((void*)0);
       VAR_7 = VAR_8) {
   FUNC_5(VAR_7->pshmo_memobject);
   VAR_8 = VAR_7->pshmo_next;
   FUNC_0(VAR_7, VAR_1);
  }
  FUNC_1();
  FUNC_0(VAR_4,VAR_1);
 }
 return (VAR_6);
}
