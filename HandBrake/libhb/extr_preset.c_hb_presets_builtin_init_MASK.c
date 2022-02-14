
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 void* FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;

void FUNC_7(void)
{
    hb_value_t * VAR_7 = FUNC_6(VAR_0);
    hb_value_t * VAR_8 = FUNC_0(VAR_7, "PresetTemplate");
    VAR_2 = FUNC_5(
                              FUNC_0(VAR_8, "VersionMajor"));
    VAR_4 = FUNC_5(
                              FUNC_0(VAR_8, "VersionMinor"));
    VAR_3 = FUNC_5(
                              FUNC_0(VAR_8, "VersionMicro"));
    VAR_1 = FUNC_3(FUNC_0(VAR_8, "Preset"));

    VAR_6 = FUNC_3(FUNC_0(VAR_7, "PresetBuiltin"));
    FUNC_1(VAR_6);

    VAR_5 = FUNC_2();
    FUNC_4(&VAR_7);
}
