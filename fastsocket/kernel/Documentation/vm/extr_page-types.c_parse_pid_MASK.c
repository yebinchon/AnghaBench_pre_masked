
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*) ;
 unsigned long* VAR_7 ;
 unsigned long* VAR_8 ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char*,unsigned long*,unsigned long*,char*,char*,char*,char*,unsigned long long*,int*,int*,unsigned long*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_10(const char *VAR_10)
{
 FILE *VAR_11;
 char VAR_12[5000];

 VAR_4 = FUNC_6(VAR_10);

 FUNC_8(VAR_12, "/proc/%d/pagemap", VAR_4);
 VAR_6 = FUNC_0(VAR_12, VAR_2);

 FUNC_8(VAR_12, "/proc/%d/maps", VAR_4);
 VAR_11 = FUNC_4(VAR_12, "r");
 if (!VAR_11) {
  FUNC_7(VAR_12);
  FUNC_1(VAR_0);
 }

 while (FUNC_3(VAR_12, sizeof(VAR_12), VAR_11) != ((void*)0)) {
  unsigned long VAR_13;
  unsigned long VAR_14;
  unsigned long long VAR_15;
  int VAR_16, VAR_17;
  char VAR_18, VAR_19, VAR_20, VAR_21;
  unsigned long VAR_22;
  int VAR_23;

  VAR_23 = FUNC_9(VAR_12, "%lx-%lx %c%c%c%c %llx %x:%x %lu",
      &VAR_13,
      &VAR_14,
      &VAR_18, &VAR_19, &VAR_20, &VAR_21,
      &VAR_15,
      &VAR_16, &VAR_17,
      &VAR_22);
  if (VAR_23 < 10) {
   FUNC_5(VAR_9, "unexpected line: %s\n", VAR_12);
   continue;
  }
  VAR_8[VAR_3] = VAR_13 / VAR_5;
  VAR_7[VAR_3] = VAR_14 / VAR_5;
  if (++VAR_3 >= VAR_1) {
   FUNC_5(VAR_9, "too many VMAs\n");
   break;
  }
 }
 FUNC_2(VAR_11);
}
