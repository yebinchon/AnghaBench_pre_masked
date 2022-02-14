
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppgrp_nice_args {int* errorp; int* foundp; int prio; int curp; } ;
typedef int proc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(proc_t VAR_1, void * VAR_2)
{
 int VAR_3;
 struct ppgrp_nice_args * VAR_4 = (struct ppgrp_nice_args *)VAR_2;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_4->curp, VAR_1, VAR_4->prio);
 if (VAR_4->errorp != ((void*)0))
  *VAR_4->errorp = VAR_3;
 if (VAR_4->foundp!= ((void*)0)) {
  VAR_5 = *VAR_4->foundp;
  *VAR_4->foundp = VAR_5+1;
 }

 return(VAR_0);
}
