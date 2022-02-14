
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* func ) (void*) ;int wait; int waitmask; int pending; void* info; } ;
struct ipi_message {TYPE_1__ call_struct; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct ipi_message*) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_0, struct ipi_message *VAR_1)
{
 int VAR_2;
 void (*VAR_3)(void *VAR_4);
 void *VAR_5;
 VAR_3 = VAR_1->call_struct.func;
 VAR_5 = VAR_1->call_struct.info;
 VAR_2 = VAR_1->call_struct.wait;
 FUNC_0(VAR_0, VAR_1->call_struct.pending);
 VAR_3(VAR_5);
 if (VAR_2)
  FUNC_0(VAR_0, VAR_1->call_struct.waitmask);
 else
  FUNC_1(VAR_1);
}
