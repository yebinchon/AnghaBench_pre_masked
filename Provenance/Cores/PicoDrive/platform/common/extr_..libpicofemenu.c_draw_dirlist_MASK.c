
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int buff ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 char* FUNC_1 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (void*,void*,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (char*,int,char*,char*,...) ;

__attribute__((used)) static void FUNC_7(char *VAR_13, struct dirent **VAR_14,
 int VAR_15, int VAR_16, int VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 void *VAR_23;
 char VAR_24[64];

 VAR_18 = VAR_7 / VAR_11;
 VAR_19 = VAR_18 / 2 - VAR_16;
 VAR_15--;

 FUNC_3(1, 1);




 VAR_23 = (short *)VAR_8 + VAR_9 * VAR_18/2 * VAR_11;
 FUNC_2(VAR_23, VAR_23, VAR_9 * VAR_11 * 8 / 10, 0);

 VAR_21 = 5 + VAR_10 + 1;
 if (VAR_19 - 2 >= 0)
  FUNC_5(14, (VAR_19 - 2) * VAR_11, VAR_13, 0xffff);
 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  VAR_22 = VAR_19 + VAR_20;
  if (VAR_22 < 0) continue;
  if (VAR_22 >= VAR_18) break;
  if (VAR_14[VAR_20+1]->d_type == VAR_0) {
   FUNC_5(VAR_21, VAR_22 * VAR_11, "/", 0xfff6);
   FUNC_5(VAR_21 + VAR_12, VAR_22 * VAR_11, VAR_14[VAR_20+1]->d_name, 0xfff6);
  } else {
   unsigned short VAR_25 = FUNC_0(VAR_14[VAR_20+1]->d_name);
   FUNC_5(VAR_21, VAR_22 * VAR_11, VAR_14[VAR_20+1]->d_name, VAR_25);
  }
 }
 FUNC_5(5, VAR_18/2 * VAR_11, ">", 0xffff);

 if (VAR_17) {
  VAR_23 = (short *)VAR_8
   + VAR_9 * (VAR_7 - VAR_11 * 5 / 2);
  FUNC_2(VAR_23, VAR_23,
   VAR_9 * (VAR_11 * 5 / 2), 1);

  FUNC_6(VAR_24, sizeof(VAR_24), "%s - select, %s - back",
   FUNC_1(-1, -VAR_4), FUNC_1(-1, -VAR_3));
  FUNC_5(VAR_21, VAR_7 - VAR_11 * 3 - 2, VAR_24, 0xe78c);

  FUNC_6(VAR_24, sizeof(VAR_24), VAR_6 ?
    "%s - hide unknown files" : "%s - show all files",
   FUNC_1(-1, -VAR_2));
  FUNC_5(VAR_21, VAR_7 - VAR_11 * 2 - 2, VAR_24, 0xe78c);

  FUNC_6(VAR_24, sizeof(VAR_24), VAR_5 ?
    "%s - autoload save is ON" : "%s - autoload save is OFF",
   FUNC_1(-1, -VAR_1));
  FUNC_5(VAR_21, VAR_7 - VAR_11 * 1 - 2, VAR_24, 0xe78c);
 }

 FUNC_4();
}
