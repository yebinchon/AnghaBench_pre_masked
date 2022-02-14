
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int,char*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,void*,int*) ;
 int VAR_12 ;
 int FUNC_16 () ;
 int FUNC_17 () ;

int
FUNC_18(int VAR_13, char *VAR_14)
{
 int VAR_15=0;
 uint64_t VAR_16;

 if ((VAR_13 & (VAR_5 | VAR_7)) == (VAR_5 | VAR_7)) {
  FUNC_12(VAR_13, VAR_14);
 }

 if (!FUNC_1(0, 1, &VAR_12)) {
  if ( (VAR_13&VAR_7) == VAR_7)
   goto force_reboot;
  return (VAR_0);
 }



 FUNC_0(VAR_9);

 if ((VAR_13&VAR_7)==VAR_7) {
  FUNC_13("Quick reboot...\n");
  if ((VAR_13&VAR_4)==0) {
   FUNC_15((proc_t)((void*)0), (void *)((void*)0), (int *)((void*)0));
  }
 }
 else if ((VAR_13&VAR_4)==0) {
  int VAR_17, VAR_18;

  FUNC_13("syncing disks... ");







  VAR_16 = FUNC_11();
  FUNC_14();
  FUNC_5("proc_shutdown", 0, FUNC_11() - VAR_16);







  if (&FUNC_16 != ((void*)0))
   FUNC_16();

  VAR_16 = FUNC_11();
  FUNC_15((proc_t)((void*)0), (void *)((void*)0), (int *)((void*)0));

  if (VAR_11) {
   VAR_16 = FUNC_11();
   FUNC_9("/var/log/shutdown/shutdown.trace");
   FUNC_5("shutdown.trace", 0, FUNC_11() - VAR_16);
  }

  FUNC_0(VAR_10);
  {
   VAR_16 = FUNC_11();
   FUNC_17();
   FUNC_5("vfs_unmountall", 0, FUNC_11() - VAR_16);
  }


  VAR_16 = FUNC_11();
  for (VAR_17 = 0; VAR_17 < 100; VAR_17++) {
   VAR_18 = FUNC_3();
   if (VAR_18 == 0)
    break;
   FUNC_13("%d ", VAR_18);
   FUNC_4( 1 * VAR_18, 1000 * 1000);
  }
  if (VAR_18)
   FUNC_13("giving up\n");
  else
   FUNC_13("done\n");
  FUNC_5("bufferclean", 0, FUNC_11() - VAR_16);
 }
force_reboot:

 if (VAR_13 & VAR_5) {
  FUNC_12(VAR_13, VAR_14);
 }

 if (VAR_13 & VAR_6)
  VAR_15 = VAR_1;
 if (VAR_13 & VAR_3)
  VAR_15 = VAR_1;

 if (VAR_13 & VAR_8) {
  VAR_15 = VAR_2;
 }

 FUNC_7(FUNC_6(), VAR_15);



 return (0);
}
