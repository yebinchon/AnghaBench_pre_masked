
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t mode; int delay; int port; int device; } ;
typedef TYPE_1__ PIA ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,size_t,char*,int ) ;

__attribute__((used)) static void FUNC_1( PIA *VAR_1, char * VAR_2, int VAR_3 )

{ char *VAR_4[3] = {"4-bit","8-bit","EPP"};

 FUNC_0("%s: fit3 %s, FIT 3000 adapter at 0x%x, "
        "mode %d (%s), delay %d\n",
                VAR_1->device,VAR_0,VAR_1->port,
  VAR_1->mode,VAR_4[VAR_1->mode],VAR_1->delay);

}
