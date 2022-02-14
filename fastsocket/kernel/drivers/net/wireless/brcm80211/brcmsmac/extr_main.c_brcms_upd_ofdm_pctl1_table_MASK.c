
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int u8 ;
typedef int u16 ;
struct brcms_hardware {int hw_stf_ss_opmode; int band; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct brcms_hardware*,int ) ;
 int FUNC_3 (struct brcms_hardware*,int) ;
 int FUNC_4 (struct brcms_hardware*,int,int) ;

__attribute__((used)) static void FUNC_5(struct brcms_hardware *VAR_11)
{
 u8 VAR_12;
 u8 VAR_13[8] = {
  VAR_6, VAR_7, VAR_0, VAR_1,
  VAR_2, VAR_3, VAR_4, VAR_5
 };
 u16 VAR_14;
 u16 VAR_15;
 uint VAR_16;

 if (!FUNC_1(VAR_11->band))
  return;


 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_13); VAR_16++) {
  VAR_12 = VAR_13[VAR_16];

  VAR_14 = FUNC_2(VAR_11, VAR_12);


  VAR_15 =
      FUNC_3(VAR_11, VAR_14 + VAR_8);


  VAR_15 &= ~VAR_9;
  VAR_15 |= (VAR_11->hw_stf_ss_opmode << VAR_10);


  FUNC_4(VAR_11, VAR_14 + VAR_8,
       VAR_15);
 }
}
