
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_nic {int net_dev; } ;
typedef int outbuf ;
typedef int efx_dword_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct efx_nic*,int ,int *,int,int *,int,size_t*) ;
 int VAR_14 ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_15)
{
 u8 VAR_16[VAR_11];
 u8 VAR_17[VAR_13];
 unsigned int VAR_18, VAR_19, VAR_20;
 const char *VAR_21;
 size_t VAR_22;
 int VAR_23;
 int VAR_24;






 VAR_23 = 2;
 do {
  FUNC_2(VAR_16, VAR_2, 1);
  VAR_24 = FUNC_3(VAR_15, VAR_6,
      VAR_16, VAR_11,
      VAR_17, sizeof(VAR_17), &VAR_22);
 } while ((VAR_24 == -VAR_0 || VAR_24 == -VAR_1) && VAR_23-- > 0);

 if (VAR_24)
  return VAR_24;
 if (VAR_22 < VAR_13)
  return -VAR_1;


 VAR_18 = FUNC_0(VAR_17, VAR_3);
 if (VAR_18 == VAR_7)
  return 0;

 VAR_21 = (VAR_18 == VAR_8)
  ? "system-level assertion"
  : (VAR_18 == VAR_9)
  ? "thread-level assertion"
  : (VAR_18 == VAR_10)
  ? "watchdog reset"
  : "unknown assertion";
 FUNC_4(VAR_15, VAR_14, VAR_15->net_dev,
    "MCPU %s at PC = 0x%.8x in thread 0x%.8x\n", VAR_21,
    FUNC_0(VAR_17, VAR_4),
    FUNC_0(VAR_17, VAR_5));


 VAR_20 = VAR_12;
 for (VAR_19 = 1; VAR_19 < 32; VAR_19++) {
  FUNC_4(VAR_15, VAR_14, VAR_15->net_dev, "R%.2d (?): 0x%.8x\n", VAR_19,
   FUNC_1(VAR_17, VAR_20));
  VAR_20 += sizeof(efx_dword_t);
 }

 return 0;
}
