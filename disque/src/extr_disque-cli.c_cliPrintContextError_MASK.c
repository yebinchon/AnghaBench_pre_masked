
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* errstr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(void) {
    if (VAR_0 == ((void*)0)) return;
    FUNC_0(VAR_1,"Error: %s\n",VAR_0->errstr);
}
