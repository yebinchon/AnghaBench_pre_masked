
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbginterface {int write; int read; int wait; int close; int open; int fhndl; } ;
typedef int s32 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct dbginterface VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

struct dbginterface* FUNC_2(s32 VAR_6)
{
 VAR_0.fhndl = VAR_6;
 if(FUNC_1(VAR_6))
  FUNC_0(VAR_6);

 VAR_0.open = VAR_2;
 VAR_0.close = VAR_1;
 VAR_0.wait = VAR_4;
 VAR_0.read = VAR_3;
 VAR_0.write = VAR_5;

 return &VAR_0;
}
