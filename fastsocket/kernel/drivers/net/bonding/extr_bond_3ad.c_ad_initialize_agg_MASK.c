
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aggregator {int * slave; scalar_t__ aggregator_identifier; int aggregator_mac_address; } ;


 int FUNC_0 (struct aggregator*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct aggregator *VAR_1)
{
 if (VAR_1) {
  FUNC_0(VAR_1);

  VAR_1->aggregator_mac_address = VAR_0;
  VAR_1->aggregator_identifier = 0;
  VAR_1->slave = ((void*)0);
 }
}
