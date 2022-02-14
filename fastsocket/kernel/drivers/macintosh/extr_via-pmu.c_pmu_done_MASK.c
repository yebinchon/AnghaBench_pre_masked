
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {void (* done ) (struct adb_request*) ;int complete; } ;


 int FUNC_0 () ;
 void FUNC_1 (struct adb_request*) ;

__attribute__((used)) static inline void
FUNC_2(struct adb_request *VAR_0)
{
 void (*VAR_1)(struct adb_request *) = VAR_0->done;
 FUNC_0();
 VAR_0->complete = 1;



 if (VAR_1)
  (*VAR_1)(VAR_0);
}
