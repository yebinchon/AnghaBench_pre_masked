
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct qib_devdata*,char*,...) ;
 unsigned long long FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*) ;
 int FUNC_5 (struct qib_devdata*,int ,int ,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct qib_devdata *VAR_3,
 const char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 u64 VAR_8;

 if (!VAR_4)
  VAR_4 = "?";


 FUNC_6(2);

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 < 0)
  FUNC_2(VAR_3, "not able to re-sync IB EPB (%s)\n", VAR_4);


 VAR_5 = FUNC_5(VAR_3, VAR_0, FUNC_0(0), 0, 0);
 if (VAR_5 < 0)
  FUNC_2(VAR_3, "Failed TRIMDONE 1st read, (%s)\n", VAR_4);


 VAR_8 = FUNC_3(VAR_3, VAR_2);
 if (!(VAR_8 & (1ULL << 11)))
  FUNC_2(VAR_3, "IBCS TRIMDONE clear (%s)\n", VAR_4);




 FUNC_6(2);

 VAR_5 = FUNC_5(VAR_3, VAR_0, VAR_1, 0x80, 0x80);
 if (VAR_5 < 0)
  FUNC_2(VAR_3, "Failed Dummy RMW, (%s)\n", VAR_4);
 FUNC_6(10);

 VAR_7 = 0;

 for (VAR_6 = 3; VAR_6 >= 0; --VAR_6) {

  VAR_5 = FUNC_5(VAR_3, VAR_0,
   FUNC_0(VAR_6), 0, 0);
  if (VAR_5 < 0)
   FUNC_2(VAR_3,
    "Failed checking TRIMDONE, chn %d (%s)\n",
    VAR_6, VAR_4);

  if (!(VAR_5 & 0x10)) {
   int VAR_9;

   VAR_7 |= (1 << VAR_6);
   FUNC_2(VAR_3,
    "TRIMDONE cleared on chn %d (%02X). (%s)\n",
    VAR_6, VAR_5, VAR_4);
   VAR_9 = FUNC_5(VAR_3, VAR_0,
    FUNC_1(0), 0, 0);
   FUNC_2(VAR_3, "probe is %d (%02X)\n",
    VAR_9, VAR_9);
   VAR_9 = FUNC_5(VAR_3, VAR_0,
    FUNC_0(VAR_6), 0, 0);
   FUNC_2(VAR_3, "re-read: %d (%02X)\n",
    VAR_9, VAR_9);
   VAR_5 = FUNC_5(VAR_3, VAR_0,
    FUNC_0(VAR_6), 0x10, 0x10);
   if (VAR_5 < 0)
    FUNC_2(VAR_3,
     "Err on TRIMDONE rewrite1\n");
  }
 }
 for (VAR_6 = 3; VAR_6 >= 0; --VAR_6) {

  if (VAR_7 & (1 << VAR_6)) {
   FUNC_2(VAR_3,
    "Resetting TRIMDONE on chn %d (%s)\n",
    VAR_6, VAR_4);
   VAR_5 = FUNC_5(VAR_3, VAR_0,
    FUNC_0(VAR_6), 0x10, 0x10);
   if (VAR_5 < 0)
    FUNC_2(VAR_3,
     "Failed re-setting TRIMDONE, chn %d (%s)\n",
     VAR_6, VAR_4);
  }
 }
}
