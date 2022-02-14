
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {scalar_t__ status; int wait; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int) ;

void FUNC_1(struct command *VAR_3, int VAR_4)
{
 FUNC_0(VAR_3->wait,
    VAR_3->status == VAR_1 ||
    VAR_3->status == VAR_2,
    VAR_4 * VAR_0);
}
