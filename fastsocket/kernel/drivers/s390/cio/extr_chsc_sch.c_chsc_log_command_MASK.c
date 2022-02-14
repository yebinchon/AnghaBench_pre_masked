
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct chsc_async_area {TYPE_1__ header; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct chsc_async_area*,int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct chsc_async_area *VAR_0)
{
 char VAR_1[10];

 FUNC_2(VAR_1, "CHSC:%x", VAR_0->header.code);
 FUNC_0(0, VAR_1);
 FUNC_1(0, VAR_0, 32);
}
