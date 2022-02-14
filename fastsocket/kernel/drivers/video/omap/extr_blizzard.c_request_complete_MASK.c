
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blizzard_request {void (* complete ) (void*) ;void* complete_data; } ;


 int FUNC_0 (struct blizzard_request*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct blizzard_request *VAR_1 = (struct blizzard_request *)VAR_0;
 void (*VAR_2)(void *);
 void *VAR_3;

 VAR_2 = VAR_1->complete;
 VAR_3 = VAR_1->complete_data;

 FUNC_0(VAR_1);

 if (VAR_2)
  VAR_2(VAR_3);

 FUNC_1();
}
