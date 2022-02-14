
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t mode; int delay; int port; int device; } ;
typedef TYPE_1__ PIA ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,size_t,char*,int,...) ;

__attribute__((used)) static void FUNC_5( PIA *VAR_1, char * VAR_2, int VAR_3 )

{ int VAR_4;
        char *VAR_5[6] =
     {"4-bit","5/3","8-bit","EPP-8","EPP-16","EPP-32"};

 FUNC_2(VAR_1);
 FUNC_1(0xa,0x38);
        VAR_4 = FUNC_0(0xb);
        FUNC_3(VAR_1);

 FUNC_4("%s: epat %s, Shuttle EPAT chip %x at 0x%x, ",
  VAR_1->device,VAR_0,VAR_4,VAR_1->port);
 FUNC_4("mode %d (%s), delay %d\n",VAR_1->mode,
  VAR_5[VAR_1->mode],VAR_1->delay);

}
