
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xc5000_priv {int dummy; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (struct xc5000_priv*,int *) ;
 int FUNC_2 (struct xc5000_priv*,int *) ;
 int FUNC_3 (struct xc5000_priv*,int *) ;
 int FUNC_4 (struct xc5000_priv*,int *) ;
 int FUNC_5 (struct xc5000_priv*,int *) ;
 int FUNC_6 (struct xc5000_priv*,int *) ;
 int FUNC_7 (struct xc5000_priv*,int *) ;
 int FUNC_8 (struct xc5000_priv*,int *,int *,int *,int *) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct xc5000_priv *VAR_0)
{
 u16 VAR_1;
 u32 VAR_2 = 0;
 u16 VAR_3;
 u32 VAR_4 = 0;
 u16 VAR_5;
 u16 VAR_6;
 u8 VAR_7 = 0, VAR_8 = 0;
 u8 VAR_9 = 0, VAR_10 = 0;
 u16 VAR_11 = 0;





 FUNC_9(100);

 FUNC_1(VAR_0, &VAR_1);
 FUNC_0(1, "*** ADC envelope (0-1023) = %d\n", VAR_1);

 FUNC_4(VAR_0, &VAR_2);
 FUNC_0(1, "*** Frequency error = %d Hz\n", VAR_2);

 FUNC_6(VAR_0, &VAR_3);
 FUNC_0(1, "*** Lock status (0-Wait, 1-Locked, 2-No-signal) = %d\n",
  VAR_3);

 FUNC_8(VAR_0, &VAR_7, &VAR_8,
  &VAR_9, &VAR_10);
 FUNC_2(VAR_0, &VAR_11);
 FUNC_0(1, "*** HW: V%02x.%02x, FW: V%02x.%02x.%04x\n",
  VAR_7, VAR_8,
  VAR_9, VAR_10, VAR_11);

 FUNC_5(VAR_0, &VAR_4);
 FUNC_0(1, "*** Horizontal sync frequency = %d Hz\n", VAR_4);

 FUNC_3(VAR_0, &VAR_5);
 FUNC_0(1, "*** Frame lines = %d\n", VAR_5);

 FUNC_7(VAR_0, &VAR_6);
 FUNC_0(1, "*** Quality (0:<8dB, 7:>56dB) = %d\n", VAR_6);
}
