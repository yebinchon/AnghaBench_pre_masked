
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int (* Scan ) (int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

int FUNC_4(const char *VAR_1, u32 VAR_2, u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5, VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 VAR_8 = VAR_0->Scan(VAR_2);
 FUNC_1("%s Timeout in %d seconds\n", VAR_1, VAR_3);
 VAR_5 = FUNC_0();
 VAR_6 = FUNC_0();
 VAR_3 = VAR_3 * VAR_4;
 while ((VAR_7 = VAR_0->Scan(VAR_2)) == 0 && (VAR_6-VAR_5) < VAR_3)
  VAR_6 = FUNC_0();

 if (VAR_8 != 0)
 {
  FUNC_1("Data present before press. result code: %08X", VAR_8);
  return 0;
 }
 if (VAR_7 != 0)
 {
    FUNC_1("result code: %08X", VAR_7);
  return 1;
 }
 else
  return 0;
}
