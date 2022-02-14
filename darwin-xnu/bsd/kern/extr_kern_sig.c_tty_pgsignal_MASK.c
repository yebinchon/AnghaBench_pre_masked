
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct pgrp {int dummy; } ;


 struct pgrp* VAR_0 ;
 int FUNC_0 (struct pgrp*) ;
 int FUNC_1 (struct pgrp*,int ,int ,int*,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct pgrp* FUNC_2 (struct tty*) ;

void
FUNC_3(struct tty *VAR_3, int VAR_4, int VAR_5)
{
 struct pgrp * VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 != VAR_0) {
  FUNC_1(VAR_6, 0, VAR_1, &VAR_4, VAR_2, &VAR_5);
  FUNC_0(VAR_6);
 }
}
