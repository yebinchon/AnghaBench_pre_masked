
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int osd_cdb_offset ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

osd_cdb_offset FUNC_4(
 u64 VAR_1, unsigned *VAR_2, int VAR_3, int VAR_4)
{
 u64 VAR_5 = -1, VAR_6, VAR_7;
 osd_cdb_offset VAR_8;
 int VAR_9;

 *VAR_2 = 0;
 if (!VAR_1)
  return 0;

 for (VAR_9 = VAR_3; VAR_9 < VAR_4; ++VAR_9) {
  VAR_5 = VAR_1 >> VAR_9;
  if (VAR_5 < (1 << VAR_0))
   break;
 }

 FUNC_0(VAR_9 == VAR_4);

 VAR_7 = 1 << VAR_9;
 VAR_6 = VAR_1 & (VAR_7 - 1);
 if (VAR_6) {
  *VAR_2 = VAR_7 - VAR_6;
  VAR_5 += 1;
 }

 VAR_5 |= ((VAR_9 - 8) & 0xf) << 28;
 VAR_8 = FUNC_3((u32)VAR_5);

 FUNC_1("offset=%llu mantissa=%llu exp=%d encoded=%x pad=%d\n",
   FUNC_2(VAR_1), FUNC_2(VAR_5 & 0x0FFFFFFF), VAR_9,
   VAR_8, *VAR_2);
 return VAR_8;
}
