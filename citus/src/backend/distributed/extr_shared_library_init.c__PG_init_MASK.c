
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*,int ,int ) ;
 int FUNC_13 () ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void
FUNC_17(void)
{
 if (!VAR_17)
 {
  FUNC_14(VAR_2, (FUNC_16("Citus can only be loaded via shared_preload_libraries"),
      FUNC_15("Add citus to shared_preload_libraries configuration "
        "variable in postgresql.conf in master and workers. Note "
        "that citus should be at the beginning of "
        "shared_preload_libraries.")));
 }
 if (VAR_16 != ((void*)0) || VAR_9 != ((void*)0) ||
  VAR_4 != ((void*)0) || VAR_3 != ((void*)0))
 {
  FUNC_14(VAR_2, (FUNC_16("Citus has to be loaded first"),
      FUNC_15("Place citus at the beginning of "
        "shared_preload_libraries.")));
 }

 FUNC_11();







 if (!VAR_6)
 {
  FUNC_0();
 }

 FUNC_1();






 FUNC_8();


 FUNC_10();


 FUNC_9();


 VAR_16 = VAR_10;


 VAR_9 = VAR_12;


 VAR_19 = VAR_15;
 VAR_18 = VAR_13;
 VAR_4 = VAR_1;
 VAR_3 = VAR_0;


 VAR_11 = VAR_14;

 FUNC_6();


 FUNC_13();


 FUNC_7();
 FUNC_3();
 FUNC_5();
 FUNC_2();
 FUNC_4();


 if (VAR_5)
 {
  FUNC_12("allow_system_table_mods", "true", VAR_7,
      VAR_8);
 }
}
