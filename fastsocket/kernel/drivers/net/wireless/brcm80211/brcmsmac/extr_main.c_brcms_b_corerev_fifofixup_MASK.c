
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct brcms_hardware {size_t* xmtfifo_sz; struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_1 (struct bcma_device*,int ,size_t) ;
 int FUNC_2 (struct brcms_hardware*,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_3(struct brcms_hardware *VAR_18)
{
 struct bcma_device *VAR_19 = VAR_18->d11core;
 u16 VAR_20;
 u16 VAR_21 = VAR_8, VAR_22;
 u16 VAR_23, VAR_24;
 u16 VAR_25;


 VAR_21 = VAR_8;


 for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {

  VAR_22 = VAR_21 + VAR_18->xmtfifo_sz[VAR_20];
  VAR_23 = (VAR_21 & 0xff) |
      (((VAR_22 - 1) & 0xff) << VAR_7);
  VAR_24 = ((VAR_21 >> 8) & 0x1) |
      ((((VAR_22 -
   1) >> 8) & 0x1) << VAR_7);
  VAR_25 =
      VAR_6 | (VAR_20 << VAR_5);

  FUNC_1(VAR_19, FUNC_0(VAR_15), VAR_25);
  FUNC_1(VAR_19, FUNC_0(VAR_16), VAR_23);
  FUNC_1(VAR_19, FUNC_0(VAR_17), VAR_24);

  FUNC_1(VAR_19, FUNC_0(VAR_15), VAR_25);

  VAR_21 += VAR_18->xmtfifo_sz[VAR_20];
 }




 FUNC_2(VAR_18, VAR_0,
      VAR_18->xmtfifo_sz[VAR_9]);
 FUNC_2(VAR_18, VAR_1,
      VAR_18->xmtfifo_sz[VAR_11]);
 FUNC_2(VAR_18, VAR_2,
      ((VAR_18->xmtfifo_sz[VAR_12] << 8) | VAR_18->
       xmtfifo_sz[VAR_10]));
 FUNC_2(VAR_18, VAR_3,
      ((VAR_18->xmtfifo_sz[VAR_13] << 8) | VAR_18->
       xmtfifo_sz[VAR_14]));
}
