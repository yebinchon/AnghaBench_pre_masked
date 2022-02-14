
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (void*,size_t) ;
 scalar_t__ VAR_2 ;

void
FUNC_6(void *VAR_3, size_t VAR_4)
{




 if (FUNC_5(VAR_3, VAR_4) == -1)

 {
  char VAR_5[VAR_0];

  FUNC_2(FUNC_3(), VAR_5, sizeof(VAR_5));
  FUNC_4("<jemalloc>: Error in "



                "munmap"

                "(): %s\n", VAR_5);
  if (VAR_2)
   FUNC_1();
 }
}
