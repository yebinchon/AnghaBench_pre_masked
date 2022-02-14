
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct adb_request*,int *,int,int ,...) ;

__attribute__((used)) static int
FUNC_2(int VAR_6)
{
 struct adb_request VAR_7;

 if (!VAR_5) return -VAR_0;

 if (VAR_6) {
  VAR_3 = VAR_6;
  FUNC_1(&VAR_7, ((void*)0), 5, VAR_1, 0, 0x86,
       VAR_3 >> 8, VAR_3);
  VAR_4 = 2;
 } else {
  FUNC_1(&VAR_7, ((void*)0), 1, VAR_2);
  VAR_4 = 0;
 }
 while (!VAR_7.complete)
  FUNC_0();
 return 0;
}
