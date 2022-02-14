
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ethtool_eeprom {unsigned int len; unsigned int offset; } ;
struct efx_nic {int dummy; } ;
typedef int outbuf ;
typedef int inbuf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_3 (struct efx_nic*,int ,int *,int,int *,int,size_t*) ;
 int FUNC_4 (int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_10,
       struct ethtool_eeprom *VAR_11, u8 *VAR_12)
{
 u8 VAR_13[VAR_7];
 u8 VAR_14[VAR_5];
 size_t VAR_15;
 int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18 = VAR_11->len;
 unsigned int VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 u8 *VAR_22 = VAR_12;

 FUNC_0(VAR_9 * VAR_8 != VAR_1);

 VAR_20 = VAR_11->offset % VAR_9;
 VAR_19 = VAR_11->offset / VAR_9;

 while (VAR_18 && (VAR_19 < VAR_8)) {
  FUNC_2(VAR_14, VAR_2, VAR_19);

  VAR_16 = FUNC_3(VAR_10, VAR_4,
      VAR_14, sizeof(VAR_14),
      VAR_13, sizeof(VAR_13),
      &VAR_15);
  if (VAR_16)
   return VAR_16;

  if (VAR_15 < (VAR_6 +
         VAR_9))
   return -VAR_0;

  VAR_17 = FUNC_1(VAR_13,
      VAR_3);
  if (VAR_17 != VAR_9)
   return -VAR_0;


  VAR_17 -= VAR_20;
  VAR_21 = (VAR_18 < VAR_17) ?
   VAR_18 : VAR_17;

  FUNC_4(VAR_22,
         VAR_13 + VAR_20 +
         VAR_6,
         VAR_21);

  VAR_18 -= VAR_21;
  VAR_22 += VAR_21;
  VAR_20 = 0;
  VAR_19++;
 }

 return 0;
}
