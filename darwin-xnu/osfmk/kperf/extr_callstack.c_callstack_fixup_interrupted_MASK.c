
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callstack {scalar_t__ nframes; int flags; uintptr_t* frames; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (uintptr_t*) ;
 int FUNC_2 (uintptr_t*) ;

__attribute__((used)) static void
FUNC_3(struct callstack *VAR_2)
{
 uintptr_t VAR_3 = 0;
 FUNC_0(VAR_2->nframes < VAR_1);
 FUNC_0(VAR_2->flags & VAR_0);
 VAR_2->frames[VAR_2->nframes++] = VAR_3;
}
