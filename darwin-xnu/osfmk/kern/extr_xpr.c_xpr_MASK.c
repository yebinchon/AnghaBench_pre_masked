
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xprbuf {char const* msg; long arg1; long arg2; long arg3; long arg4; long arg5; int cpuinfo; int timestamp; } ;
typedef int spl_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 struct xprbuf* VAR_1 ;
 int VAR_2 ;
 struct xprbuf* VAR_3 ;
 int VAR_4 ;
 struct xprbuf* VAR_5 ;

void
FUNC_7(
 const char *VAR_6,
 long VAR_7,
 long VAR_8,
 long VAR_9,
 long VAR_10,
 long VAR_11)
{
 spl_t VAR_12;
 struct xprbuf *VAR_13;


 if (!VAR_2 || (VAR_5 == 0))
  return;


 VAR_12 = FUNC_5();
 FUNC_3(&VAR_4);
 VAR_13 = VAR_5++;
 if (VAR_5 >= VAR_3) {

  VAR_5 = VAR_1;
 }

 *(struct xprbuf **)VAR_3 = VAR_5;
 FUNC_4(&VAR_4);
 VAR_13->timestamp = VAR_0;
 FUNC_6(VAR_12);
 VAR_13->msg = VAR_6;
 VAR_13->arg1 = VAR_7;
 VAR_13->arg2 = VAR_8;
 VAR_13->arg3 = VAR_9;
 VAR_13->arg4 = VAR_10;
 VAR_13->arg5 = VAR_11;
 FUNC_1();
 VAR_13->cpuinfo = FUNC_0();
 FUNC_2();
}
