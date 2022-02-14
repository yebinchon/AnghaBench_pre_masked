
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int L; } ;
typedef TYPE_1__ LoadState ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_3 (LoadState *VAR_0, size_t VAR_1, const char *VAR_2) {
  if (FUNC_0(VAR_0) != VAR_1)
    FUNC_1(VAR_0, FUNC_2(VAR_0->L, "%s size mismatch in", VAR_2));
}
