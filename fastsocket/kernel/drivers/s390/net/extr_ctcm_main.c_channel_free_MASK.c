
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {int fsm; int flags; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct channel *VAR_5)
{
 FUNC_0(VAR_4, VAR_2, "%s(%s)", VAR_1, VAR_5->id);
 VAR_5->flags &= ~VAR_0;
 FUNC_1(VAR_5->fsm, VAR_3);
}
