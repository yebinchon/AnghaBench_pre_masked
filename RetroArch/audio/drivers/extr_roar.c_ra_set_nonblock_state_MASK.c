
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nonblocking; int vss; } ;
typedef TYPE_1__ roar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void *VAR_3, bool VAR_4)
{
   roar_t *VAR_5 = (roar_t*)VAR_3;
   if (FUNC_1(VAR_5->vss, (VAR_4) ? VAR_0 : VAR_1, ((void*)0)) < 0)
      FUNC_0(VAR_2, "RetroArch [ERROR]: Can't set nonblocking. Will not be able to fast-forward.\n");
   VAR_5->nonblocking = VAR_4;
}
