
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvt_dev {int pkts; int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (struct nvt_dev*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,int,int) ;

__attribute__((used)) static u32 FUNC_4(struct nvt_dev *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11 = 0;
 int VAR_12;

 VAR_9 = FUNC_1(VAR_8, VAR_3) |
  FUNC_1(VAR_8, VAR_2) << 8;

 for (VAR_12 = 0; VAR_12 < VAR_8->pkts; VAR_12++) {
  if (VAR_8->buf[VAR_12] & VAR_1)
   VAR_11 += VAR_8->buf[VAR_12] & VAR_0;
 }

 VAR_11 *= VAR_7;

 if (!VAR_9 || !VAR_11) {
  FUNC_3(VAR_4, "Unable to determine carrier! (c:%u, d:%u)",
         VAR_9, VAR_11);
  return 0;
 }

 VAR_10 = FUNC_0(VAR_9) / VAR_11;

 if ((VAR_10 > VAR_5) || (VAR_10 < VAR_6))
  FUNC_2("WTF? Carrier frequency out of range!");

 FUNC_2("Carrier frequency: %u (count %u, duration %u)",
  VAR_10, VAR_9, VAR_11);

 return VAR_10;
}
