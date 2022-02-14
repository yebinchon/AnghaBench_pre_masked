
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct in_addr {void* s_addr; } ;
struct TYPE_7__ {void* s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int,int,int) ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 () ;
 void* FUNC_6 (int) ;
 int FUNC_7 (char*,TYPE_1__*,struct in_addr*,TYPE_1__*) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void
FUNC_9(void)
{
 FUNC_0(VAR_6 = FUNC_4(1, 0, 1), 0, ((void*)0));
 FUNC_1(VAR_2);

 char VAR_7[VAR_0];
 FUNC_8(VAR_6, VAR_7);

 FUNC_2("Created interface %s", VAR_7);

 uint32_t VAR_8 = (10 << 24) | ((unsigned)FUNC_5()&0xffff) << 8 | 160;
 struct in_addr VAR_9;
 VAR_3 = FUNC_6(VAR_8);
 VAR_4 = FUNC_6(VAR_8+1);
 VAR_9.s_addr = FUNC_6(0xffffffff);

 FUNC_7(VAR_7, &VAR_3, &VAR_9, &VAR_4);

 if (VAR_5) {
  FUNC_3(VAR_7, VAR_1, 12345, &VAR_3, &VAR_4);
  FUNC_3(VAR_7, VAR_1, 12346, &VAR_4, &VAR_3);
 }
}
