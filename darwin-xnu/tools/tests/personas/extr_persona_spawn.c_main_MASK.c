
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* persona_id; void* persona_gid; } ;
struct persona_args {int flags; void* override_uid; TYPE_1__ kinfo; } ;
typedef int sigset_t ;
typedef int pid_t ;
typedef int pa ;
struct TYPE_4__ {int verbose; int wait_for_children; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char**) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int) ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_8 () ;
 char FUNC_9 (int,char**,char*) ;
 void* FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int VAR_13 ;
 int FUNC_13 (struct persona_args*,int ,int) ;
 int VAR_14 ;
 size_t VAR_15 ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int *,int *) ;
 int FUNC_21 (int,char**,struct persona_args*) ;
 scalar_t__ FUNC_22 (char*,char*) ;
 int FUNC_23 (char*,int) ;
 int FUNC_24 (int ,int*,int ) ;

int FUNC_25(int VAR_16, char **VAR_17)
{
 char VAR_18;
 int VAR_19;

 FUNC_16(&VAR_12, ((void*)0));




 VAR_11.verbose = 0;
 VAR_11.wait_for_children = 1;

 if (VAR_16 > 1 && FUNC_22(VAR_17[1], "child") == 0) {
  VAR_15 = 2;
  VAR_19 = FUNC_4(VAR_16, VAR_17);
  if (VAR_19 != 1)
   FUNC_7(VAR_19);
  if (FUNC_22(VAR_17[VAR_15], "spawn") != 0) {
   FUNC_15("child exiting (%s).\n", VAR_17[VAR_15]);
   FUNC_7(0);
  }
  VAR_15++;







 }

 if (FUNC_8() != 0)
  FUNC_5("%s must be run as root", VAR_17[0] ? FUNC_3(VAR_17[0]) : VAR_8);

 struct persona_args VAR_20;
 FUNC_13(&VAR_20, 0, sizeof(VAR_20));

 VAR_20.flags = VAR_5;
 VAR_20.kinfo.persona_id = FUNC_10();




 while ((VAR_18 = FUNC_9(VAR_16, VAR_17, "Vg:G:I:u:vwh")) != -1) {
  switch (VAR_18) {
  case 'V':
   VAR_20.flags |= VAR_7;
   break;
  case 'g':
   VAR_20.kinfo.persona_gid = FUNC_2(VAR_14);
   VAR_20.flags |= VAR_1;
   VAR_20.flags |= VAR_6;
   break;
  case 'G':
   VAR_19 = FUNC_14(&VAR_20.kinfo, VAR_14);
   if (VAR_19 < 0)
    FUNC_5("Invalid groupspec: \"%s\"", VAR_14);
   VAR_20.flags |= VAR_2;
   VAR_20.flags |= VAR_6;
   break;
  case 'I':
   VAR_20.kinfo.persona_id = FUNC_2(VAR_14);
   if (VAR_20.kinfo.persona_id == 0)
    FUNC_5("Invalid Persona ID: %s", VAR_14);
   VAR_20.flags |= VAR_3;
   break;
  case 'u':
   VAR_20.override_uid = FUNC_2(VAR_14);
   VAR_20.flags |= VAR_4;
   VAR_20.flags |= VAR_6;
   break;
  case 'v':
   VAR_11.verbose = 1;
   break;
  case 'w':
   VAR_11.wait_for_children = 0;
   break;
  case 'h':
  case '?':
   FUNC_23(VAR_17[0], 1);
  case ':':
  default:
   FUNC_15("Invalid option: '%c'\n", VAR_18);
   FUNC_23(VAR_17[0], 0);
  }
 }

 if (VAR_20.flags & VAR_7)
  VAR_20.flags = ~VAR_6;

 if (VAR_15 >= VAR_16) {
  FUNC_15("No program given!\n");
  FUNC_23(VAR_17[0], 0);
 }

 VAR_16 -= VAR_15;
 for (int VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {
  VAR_17[VAR_21] = VAR_17[VAR_21 + VAR_15];
 }

 VAR_17[VAR_16] = ((void*)0);

 VAR_19 = FUNC_21(VAR_16, VAR_17, &VAR_20);
 if (VAR_19 < 0)
  return VAR_19;

 pid_t VAR_22 = (pid_t)VAR_19;
 int VAR_23 = 0;
 sigset_t VAR_24;
 FUNC_18(&VAR_24);
 FUNC_17(&VAR_24, VAR_9);
 FUNC_20(VAR_10, &VAR_24, ((void*)0));
 FUNC_19(VAR_9, VAR_13);

 if (VAR_11.wait_for_children) {
  FUNC_12("Waiting for child...");
  FUNC_24(VAR_22, &VAR_23, 0);
  if (FUNC_1(VAR_23)) {
   VAR_23 = FUNC_0(VAR_23);
   if (VAR_23 != 0)
    FUNC_6(VAR_0,
         "Child exited with status: %d", VAR_23);
  }
 }

 FUNC_11("Done.");
 return 0;
}
