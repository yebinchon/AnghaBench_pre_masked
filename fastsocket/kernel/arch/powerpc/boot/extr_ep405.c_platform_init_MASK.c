
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fixups; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int,int,int) ;
 char* VAR_6 ;

void FUNC_6(unsigned long VAR_7, unsigned long VAR_8, unsigned long VAR_9,
     unsigned long VAR_10, unsigned long VAR_11)
{
 VAR_6 = (char *)VAR_7;
 FUNC_2(VAR_6);

 if (!FUNC_1(VAR_6, VAR_0, &VAR_3))
  return;

 VAR_3 *= 1024 * 1024;
 FUNC_5(VAR_2, VAR_3 - (unsigned long)VAR_2, 32, 64);

 FUNC_0(VAR_1);

 FUNC_3(VAR_6);

 FUNC_4();
 VAR_5.fixups = VAR_4;
}
