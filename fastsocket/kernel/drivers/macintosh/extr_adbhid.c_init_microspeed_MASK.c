
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct adb_request*,int *,int ,int,int ,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_1)
{
 struct adb_request VAR_2;

        FUNC_3(" (Microspeed/MacPoint or compatible)");

 FUNC_2(&VAR_2, ((void*)0), VAR_0, 1, FUNC_0(VAR_1));
 FUNC_2(&VAR_2, ((void*)0), VAR_0, 5,
 FUNC_1(VAR_1,1),
     0x20,
     0x00,
     0x10,
     0x07);


 FUNC_2(&VAR_2, ((void*)0), VAR_0, 1, FUNC_0(VAR_1));
}
