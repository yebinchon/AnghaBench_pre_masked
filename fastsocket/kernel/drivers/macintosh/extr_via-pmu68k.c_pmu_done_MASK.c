
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int complete; int (* done ) (struct adb_request*) ;} ;


 int FUNC_0 (struct adb_request*) ;

__attribute__((used)) static void
FUNC_1(struct adb_request *VAR_0)
{
 VAR_0->complete = 1;
 if (VAR_0->done)
  (*VAR_0->done)(VAR_0);
}
