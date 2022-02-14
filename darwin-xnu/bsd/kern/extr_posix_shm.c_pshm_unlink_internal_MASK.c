
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pshmobj {int pshm_flags; struct pshmobj* pshmo_next; int pshmo_memobject; struct pshmobj* pshm_memobjects; int pshm_usecount; } ;
struct pshminfo {int pshm_flags; struct pshminfo* pshmo_next; int pshmo_memobject; struct pshminfo* pshm_memobjects; int pshm_usecount; } ;
struct pshmcache {int pshm_flags; struct pshmcache* pshmo_next; int pshmo_memobject; struct pshmcache* pshm_memobjects; int pshm_usecount; } ;


 int VAR_0 ;
 int FUNC_0 (struct pshmobj*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (struct pshmobj*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pshmobj*) ;

__attribute__((used)) static int
FUNC_5(struct pshminfo *VAR_6, struct pshmcache *VAR_7)
{
 struct pshmobj *VAR_8, *VAR_9;

 FUNC_1();

 if (!VAR_6 || !VAR_7)
  return VAR_0;

 if ((VAR_6->pshm_flags & (VAR_3 | VAR_2)) == 0)
  return VAR_0;

 if (VAR_6->pshm_flags & VAR_4)
  return 0;

 VAR_6->pshm_flags |= VAR_4;
 VAR_6->pshm_usecount--;

 FUNC_4(VAR_7);
 VAR_6->pshm_flags |= VAR_5;


 if (!VAR_6->pshm_usecount) {
  for (VAR_8 = VAR_6->pshm_memobjects;
       VAR_8 != ((void*)0);
       VAR_8 = VAR_9) {
   FUNC_3(VAR_8->pshmo_memobject);
   VAR_9 = VAR_8->pshmo_next;
   FUNC_0(VAR_8, VAR_1);
  }
  FUNC_0(VAR_6,VAR_1);
 }

 FUNC_0(VAR_7, VAR_1);

 return 0;
}
