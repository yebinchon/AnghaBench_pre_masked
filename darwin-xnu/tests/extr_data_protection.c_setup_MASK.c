
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int,int,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (char*) ;
 int VAR_9 ;
 int FUNC_7 (int ,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int ,scalar_t__) ;
 int FUNC_14 () ;

void
FUNC_15(void) {
 int VAR_16 = 0;
 int VAR_17 = -1;

 VAR_7;

 FUNC_4(VAR_10);

 VAR_9;
 FUNC_3(
  FUNC_9(VAR_15),
  "Create temporary directory for test"
 );
 FUNC_5("Test temp dir: %s", VAR_15);

 FUNC_2(
  VAR_17 = FUNC_14(),
  -1,
  "Get content protection support status"
 );

 if(VAR_17 == 0) {
  FUNC_6("Data protection not supported on this system");
 }

 FUNC_0(
  FUNC_8(),
  0,
  "Device should not have existing passcode"
 );

 FUNC_0(
  FUNC_11(VAR_5, ((void*)0)),
  0,
  "Set test passcode"
 );

 FUNC_7(VAR_13, VAR_4);
 FUNC_7(VAR_11, VAR_4);
 FUNC_7(VAR_14, VAR_4);

 VAR_16 |= (FUNC_12(VAR_13, VAR_15, VAR_4) == VAR_4);
 VAR_16 |= (FUNC_12(VAR_13, "/", VAR_4) == VAR_4);
 VAR_16 |= (FUNC_13(VAR_11, VAR_13, VAR_4) == VAR_4);
 VAR_16 |= (FUNC_12(VAR_13, "test_file", VAR_4) == VAR_4);
 VAR_16 |= (FUNC_12(VAR_11, "test_dir/", VAR_4) == VAR_4);
 VAR_16 |= (FUNC_13(VAR_14, VAR_11, VAR_4) == VAR_4);
 VAR_16 |= (FUNC_12(VAR_14, "test_subdir/", VAR_4) == VAR_4);

 VAR_6;
 FUNC_0(VAR_16, 0, "Initialize test path strings");

 VAR_9;
 FUNC_1(
  VAR_12 = FUNC_10(VAR_13, VAR_1|VAR_2|VAR_3|VAR_0, 0777),
  0,
  "Create test file"
 );

 VAR_8;
}
