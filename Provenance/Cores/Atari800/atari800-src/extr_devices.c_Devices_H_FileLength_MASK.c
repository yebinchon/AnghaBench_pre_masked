
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int UBYTE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*) ;
 char FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,long,int ) ;
 int FUNC_9 (int ,struct stat*) ;
 long FUNC_10 (int *) ;
 int ** VAR_12 ;
 size_t VAR_13 ;
 scalar_t__* VAR_14 ;
 char* VAR_15 ;

__attribute__((used)) static void FUNC_11(void)
{
 if (VAR_11)
  FUNC_3("Get File Length Command");
 if (!FUNC_0())
  return;

 if (VAR_12[VAR_13] == ((void*)0))
  FUNC_1(VAR_9);

 else if (FUNC_4(0x700) == 'M') {



  if (VAR_15[VAR_13] == 'r' && VAR_14[VAR_13] != VAR_6)
   FUNC_8(VAR_12[VAR_13], -1, VAR_7);

  VAR_10 = VAR_12[VAR_13];
  FUNC_2(VAR_9);

  VAR_15[VAR_13] = 'b';
 }

 else {
  int VAR_16 = VAR_5 + VAR_13 * 16;
  int VAR_17;






  FILE *VAR_18 = VAR_12[VAR_13];
  long VAR_19 = FUNC_10(VAR_18);
  VAR_17 = FUNC_6(VAR_18);
  FUNC_8(VAR_18, VAR_19, VAR_8);

  FUNC_5(VAR_16 + VAR_2, (UBYTE) VAR_17);
  FUNC_5(VAR_16 + VAR_3, (UBYTE) (VAR_17 >> 8));
  FUNC_5(VAR_16 + VAR_4, (UBYTE) (VAR_17 >> 16));
  VAR_1 = 1;
  VAR_0;
 }
}
