
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char*,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_14(void)
{
 int VAR_4;

 VAR_4 = FUNC_10();
 if (VAR_4) {
  FUNC_6("Cannot create PD SLAB cache.");
  return VAR_4;
 }

 VAR_4 = FUNC_8();
 if (VAR_4) {
  FUNC_6("Cannot create CQ SLAB cache.");
  goto create_slab_caches2;
 }

 VAR_4 = FUNC_11();
 if (VAR_4) {
  FUNC_6("Cannot create QP SLAB cache.");
  goto create_slab_caches3;
 }

 VAR_4 = FUNC_7();
 if (VAR_4) {
  FUNC_6("Cannot create AV SLAB cache.");
  goto create_slab_caches4;
 }

 VAR_4 = FUNC_9();
 if (VAR_4) {
  FUNC_6("Cannot create MR&MW SLAB cache.");
  goto create_slab_caches5;
 }

 VAR_4 = FUNC_12();
 if (VAR_4) {
  FUNC_6("Cannot create small queue SLAB cache.");
  goto create_slab_caches6;
 }
 return 0;

create_slab_caches6:
 FUNC_2();

create_slab_caches5:
 FUNC_0();

create_slab_caches4:
 FUNC_4();

create_slab_caches3:
 FUNC_1();

create_slab_caches2:
 FUNC_3();

 return VAR_4;
}
