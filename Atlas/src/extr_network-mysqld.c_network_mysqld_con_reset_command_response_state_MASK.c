
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int command; int (* data_free ) (int *) ;int * data; } ;
struct TYPE_5__ {TYPE_1__ parse; } ;
typedef TYPE_2__ network_mysqld_con ;


 int FUNC_0 (int *) ;

void FUNC_1(network_mysqld_con *VAR_0) {
 VAR_0->parse.command = -1;
 if (VAR_0->parse.data && VAR_0->parse.data_free) {
  VAR_0->parse.data_free(VAR_0->parse.data);

  VAR_0->parse.data = ((void*)0);
  VAR_0->parse.data_free = ((void*)0);
 }
}
