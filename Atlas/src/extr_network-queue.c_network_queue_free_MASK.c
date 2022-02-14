
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chunks; } ;
typedef TYPE_1__ network_queue ;
typedef int GString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(network_queue *VAR_1) {
 GString *VAR_2;

 if (!VAR_1) return;

 while ((VAR_2 = FUNC_2(VAR_1->chunks))) FUNC_3(VAR_2, VAR_0);

 FUNC_1(VAR_1->chunks);

 FUNC_0(VAR_1);
}
