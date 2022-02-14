
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; struct TYPE_4__* hashNext; } ;
typedef TYPE_1__ cvar_t ;


 int FUNC_0 (char const*,int ) ;
 long FUNC_1 (char const*) ;
 TYPE_1__** VAR_0 ;

__attribute__((used)) static cvar_t *FUNC_2( const char *VAR_1 ) {
 cvar_t *VAR_2;
 long VAR_3;

 VAR_3 = FUNC_1(VAR_1);

 for (VAR_2=VAR_0[VAR_3] ; VAR_2 ; VAR_2=VAR_2->hashNext) {
  if (!FUNC_0(VAR_1, VAR_2->name)) {
   return VAR_2;
  }
 }

 return ((void*)0);
}
