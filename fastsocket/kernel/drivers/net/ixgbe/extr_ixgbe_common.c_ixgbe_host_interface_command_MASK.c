
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_hic_hdr {scalar_t__ buf_len; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_2 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_3 (struct ixgbe_hw*,int ,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ixgbe_hw*,char*) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static s32 FUNC_8(struct ixgbe_hw *VAR_8, u32 *VAR_9,
     u32 VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14 = sizeof(struct ixgbe_hic_hdr);
 u8 VAR_15, VAR_16;

 s32 VAR_17 = 0;

 if (VAR_10 == 0 || VAR_10 & 0x3 ||
     VAR_10 > VAR_7) {
  FUNC_5(VAR_8, "Buffer length failure.\n");
  VAR_17 = VAR_0;
  goto out;
 }


 VAR_11 = FUNC_0(VAR_8, VAR_2);
 if ((VAR_11 & VAR_4) == 0) {
  FUNC_5(VAR_8, "IXGBE_HOST_EN bit disabled.\n");
  VAR_17 = VAR_0;
  goto out;
 }


 VAR_16 = VAR_10 >> 2;





 for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++)
  FUNC_3(VAR_8, VAR_1,
          VAR_12, FUNC_4(VAR_9[VAR_12]));


 FUNC_2(VAR_8, VAR_2, VAR_11 | VAR_3);

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_11 = FUNC_0(VAR_8, VAR_2);
  if (!(VAR_11 & VAR_3))
   break;
  FUNC_7(1000, 2000);
 }


 if (VAR_12 == VAR_6 ||
     (!(FUNC_0(VAR_8, VAR_2) & VAR_5))) {
  FUNC_5(VAR_8, "Command has failed with no status valid.\n");
  VAR_17 = VAR_0;
  goto out;
 }


 VAR_16 = VAR_14 >> 2;


 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
  VAR_9[VAR_13] = FUNC_1(VAR_8, VAR_1, VAR_13);
  FUNC_6(&VAR_9[VAR_13]);
 }


 VAR_15 = ((struct ixgbe_hic_hdr *)VAR_9)->buf_len;
 if (VAR_15 == 0)
  goto out;

 if (VAR_10 < (VAR_15 + VAR_14)) {
  FUNC_5(VAR_8, "Buffer not large enough for reply message.\n");
  VAR_17 = VAR_0;
  goto out;
 }


 VAR_16 = (VAR_15 + 3) >> 2;


 for (; VAR_13 <= VAR_16; VAR_13++) {
  VAR_9[VAR_13] = FUNC_1(VAR_8, VAR_1, VAR_13);
  FUNC_6(&VAR_9[VAR_13]);
 }

out:
 return VAR_17;
}
