
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct secpolicy {int refcnt; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct secpolicy*) ;
 int FUNC_3 (struct secpolicy*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int ) ;
 int VAR_2 ;

void
FUNC_8(
     struct secpolicy *VAR_3,
     int VAR_4)
{


 if (VAR_3 == ((void*)0))
  FUNC_6("key_freesp: NULL pointer is passed.\n");

 if (!VAR_4)
  FUNC_4(VAR_2);
 else
  FUNC_1(VAR_2, VAR_1);
 VAR_3->refcnt--;
 FUNC_0(VAR_0,
     FUNC_7("DP freesp cause refcnt--:%d SP:0x%llx\n",
     VAR_3->refcnt, (uint64_t)FUNC_2(VAR_3)));

 if (VAR_3->refcnt == 0)
  FUNC_3(VAR_3);
 if (!VAR_4)
  FUNC_5(VAR_2);
 return;
}
