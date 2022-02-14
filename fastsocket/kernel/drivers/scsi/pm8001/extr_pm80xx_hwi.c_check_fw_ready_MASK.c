
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {scalar_t__ chip_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct pm8001_hba_info*,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct pm8001_hba_info *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11 = 0;


 VAR_10 = VAR_9 = 100 * 1000;
 do {
  FUNC_3(1);
  VAR_8 = FUNC_1(VAR_7, 0, VAR_0);
 } while ((VAR_8 == 0xFFFFFFFF) && (--VAR_9));


 VAR_10 = VAR_9 = 1000 * 1000;
 do {
  FUNC_3(1);
  VAR_8 = FUNC_1(VAR_7, 0, VAR_0);
 } while (((VAR_8 & VAR_1) !=
   VAR_1) && (--VAR_9));
 if (!VAR_9)
  VAR_11 = -1;
 else {
  FUNC_0(VAR_7,
   FUNC_2(" ila ready status in %d millisec\n",
    (VAR_10 - VAR_9)));
 }


 VAR_10 = VAR_9 = 1800 * 1000;
 do {
  FUNC_3(1);
  VAR_8 = FUNC_1(VAR_7, 0, VAR_0);
 } while (((VAR_8 & VAR_4) !=
    VAR_4) && (--VAR_9));
 if (!VAR_9)
  VAR_11 = -1;
 else {
  FUNC_0(VAR_7,
   FUNC_2(" raae ready status in %d millisec\n",
     (VAR_10 - VAR_9)));
 }


 VAR_10 = VAR_9 = 600 * 1000;
 do {
  FUNC_3(1);
  VAR_8 = FUNC_1(VAR_7, 0, VAR_0);
 } while (((VAR_8 & VAR_2) != VAR_2) &&
   (--VAR_9));
 if (!VAR_9)
  VAR_11 = -1;
 else {
  FUNC_0(VAR_7,
   FUNC_2(" iop0 ready status in %d millisec\n",
    (VAR_10 - VAR_9)));
 }


 if ((VAR_7->chip_id != VAR_5) &&
   (VAR_7->chip_id != VAR_6)) {

  VAR_10 = VAR_9 = 200 * 1000;
  do {
   FUNC_3(1);
   VAR_8 = FUNC_1(VAR_7, 0, VAR_0);
  } while (((VAR_8 & VAR_3) !=
    VAR_3) && (--VAR_9));
  if (!VAR_9)
   VAR_11 = -1;
  else {
   FUNC_0(VAR_7, FUNC_2(
    "iop1 ready status in %d millisec\n",
    (VAR_10 - VAR_9)));
  }
 }

 return VAR_11;
}
