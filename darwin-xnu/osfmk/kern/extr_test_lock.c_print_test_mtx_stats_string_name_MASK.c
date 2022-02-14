
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_1(
 int VAR_0,
 char* VAR_1,
 int VAR_2)
{
 char* VAR_3 = "";
 switch (VAR_0) {
 case 133:
  VAR_3 = "TEST_MTX_LOCK_STATS";
  break;
 case 130:
  VAR_3 = "TEST_MTX_TRY_LOCK_STATS";
  break;
 case 134:
  VAR_3 = "TEST_MTX_LOCK_SPIN_STATS";
  break;
 case 135:
  VAR_3 = "TEST_MTX_LOCK_SPIN_ALWAYS_STATS";
  break;
 case 131:
  VAR_3 = "TEST_MTX_TRY_LOCK_SPIN_STATS";
  break;
 case 132:
  VAR_3 = "TEST_MTX_TRY_LOCK_SPIN_ALWAYS_STATS";
  break;
 case 129:
  VAR_3 = "TEST_MTX_UNLOCK_MTX_STATS";
  break;
 case 128:
  VAR_3 = "TEST_MTX_UNLOCK_SPIN_STATS";
  break;
 default:
  break;
 }

 return FUNC_0(VAR_1, VAR_2, "%s ", VAR_3);
}
