
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int memsize ;
typedef int memorystatus_level ;
typedef int int64_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int,int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,int,int,int) ;
 int VAR_1 ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_8(int VAR_2)
{
 int64_t VAR_3;
 int VAR_4;
 size_t VAR_5;
 int64_t VAR_6;
 int VAR_7;
 int VAR_8;




 VAR_5 = sizeof(VAR_3);
 VAR_7 = FUNC_7("hw.memsize", &VAR_3, &VAR_5, ((void*)0), 0);
 VAR_1; FUNC_3(VAR_7, "sysctlbyname(hw.memsize...) failed");




 VAR_8 = 1;
 for (;;) {





  VAR_5 = sizeof(VAR_4);
  if (FUNC_7("kern.memorystatus_level", &VAR_4, &VAR_5, ((void*)0), 0) != 0)
   return;
  VAR_1; FUNC_2(VAR_4, 100, "memorystatus_level too high");
  VAR_1; FUNC_1(VAR_4, 0, "memorystatus_level negative");




  VAR_6 = FUNC_0(0, (VAR_3 * (VAR_4 - 15)) / 100);




  if ((int64_t)VAR_2 * VAR_0 < VAR_6)
   return;




  if (VAR_8-- == 0)
   break;
  FUNC_4("Need %d MB, only %d MB available. sleeping 5 seconds for more to free. memorystatus_level %d",
      VAR_2, (int)(VAR_6 / VAR_0), VAR_4);
  FUNC_6(5);
 }
 FUNC_5("Needed %d MB, but only %d MB available. Skipping test to avoid jetsam issues.",
     VAR_2, (int)(VAR_6 / VAR_0));
}
