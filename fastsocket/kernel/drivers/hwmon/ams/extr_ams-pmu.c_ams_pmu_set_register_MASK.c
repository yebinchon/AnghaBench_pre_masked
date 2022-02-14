
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adb_request {int * arg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct adb_request*,int ,int,int ,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(u8 VAR_3, u8 VAR_4)
{
 static struct adb_request VAR_5;
 FUNC_0(VAR_2);

 VAR_5.arg = &VAR_2;
 if (FUNC_1(&VAR_5, VAR_1, 4, VAR_0, 0x00, VAR_3, VAR_4))
  return;

 FUNC_2(&VAR_2);
}
