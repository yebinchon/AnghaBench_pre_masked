
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pids; int address; int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(u32 VAR_4, const char *VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8;

 VAR_7 = FUNC_4(&VAR_3->pids);
 VAR_7 = FUNC_1(VAR_7, VAR_2);

 VAR_8 = FUNC_4(&VAR_3->control);
 VAR_8 = FUNC_0(VAR_8, VAR_6);
 VAR_8 |= VAR_1;
 VAR_8 |= VAR_0;

 FUNC_2(VAR_5, VAR_6);
 FUNC_5(VAR_4, &VAR_3->address);
 FUNC_5(VAR_7, &VAR_3->pids);
 return FUNC_3(VAR_8);
}
