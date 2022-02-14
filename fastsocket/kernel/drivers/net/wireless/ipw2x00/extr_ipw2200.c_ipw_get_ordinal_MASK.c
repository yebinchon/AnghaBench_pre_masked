
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ipw_priv {int table0_addr; int table1_addr; int table2_addr; int table0_len; int table1_len; int table2_len; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipw_priv*,int) ;
 int FUNC_2 (struct ipw_priv*,int,void*,int) ;
 int FUNC_3 (struct ipw_priv*,int) ;

__attribute__((used)) static int FUNC_4(struct ipw_priv *VAR_3, u32 VAR_4, void *VAR_5, u32 * VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_0("ordinal = %i\n", VAR_4);

 if (!VAR_3 || !VAR_5 || !VAR_6) {
  FUNC_0("Invalid argument\n");
  return -VAR_0;
 }


 if (!VAR_3->table0_addr || !VAR_3->table1_addr || !VAR_3->table2_addr) {
  FUNC_0("Access ordinals before initialization\n");
  return -VAR_0;
 }

 switch (VAR_1 & VAR_4) {
 case 130:
  VAR_4 &= VAR_2;


  if (VAR_4 > VAR_3->table0_len) {
   FUNC_0("ordinal value (%i) longer then "
          "max (%i)\n", VAR_4, VAR_3->table0_len);
   return -VAR_0;
  }


  if (*VAR_6 < sizeof(u32)) {
   FUNC_0("ordinal buffer length too small, "
          "need %zd\n", sizeof(u32));
   return -VAR_0;
  }

  FUNC_0("Reading TABLE0[%i] from offset 0x%08x\n",
         VAR_4, VAR_3->table0_addr + (VAR_4 << 2));

  *VAR_6 = sizeof(u32);
  VAR_4 <<= 2;
  *((u32 *) VAR_5) = FUNC_1(VAR_3, VAR_3->table0_addr + VAR_4);
  break;

 case 129:
  VAR_4 &= VAR_2;


  if (VAR_4 > VAR_3->table1_len) {
   FUNC_0("ordinal value too long\n");
   return -VAR_0;
  }


  if (*VAR_6 < sizeof(u32)) {
   FUNC_0("ordinal buffer length too small, "
          "need %zd\n", sizeof(u32));
   return -VAR_0;
  }

  *((u32 *) VAR_5) =
      FUNC_3(VAR_3, (VAR_3->table1_addr + (VAR_4 << 2)));
  *VAR_6 = sizeof(u32);
  break;

 case 128:
  VAR_4 &= VAR_2;


  if (VAR_4 > VAR_3->table2_len) {
   FUNC_0("ordinal value too long\n");
   return -VAR_0;
  }


  VAR_7 = FUNC_3(VAR_3, VAR_3->table2_addr + (VAR_4 << 3));



  VAR_8 =
      FUNC_3(VAR_3,
       VAR_3->table2_addr + (VAR_4 << 3) +
       sizeof(u32));


  VAR_9 = *((u16 *) & VAR_8);


  VAR_10 = *(((u16 *) & VAR_8) + 1);


  VAR_11 = VAR_9 * VAR_10;
  if (VAR_11 > *VAR_6) {
   *VAR_6 = VAR_11;
   return -VAR_0;
  }

  *VAR_6 = VAR_11;
  if (!VAR_11)
   return 0;

  FUNC_0("addr = 0x%08x, total_len = %i, "
         "field_info = 0x%08x\n",
         VAR_7, VAR_11, VAR_8);
  FUNC_2(VAR_3, VAR_7, VAR_5, VAR_11);
  break;

 default:
  FUNC_0("Invalid ordinal!\n");
  return -VAR_0;

 }

 return 0;
}
