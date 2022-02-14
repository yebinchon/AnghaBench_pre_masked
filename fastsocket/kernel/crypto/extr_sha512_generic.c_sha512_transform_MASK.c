
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;


 int FUNC_0 (int,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int,scalar_t__*,int const*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__*,int ,int) ;
 int VAR_0 ;
 int FUNC_8 (int ) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void
FUNC_9(u64 *VAR_2, const u8 *VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 int VAR_14;
 u64 *VAR_15 = FUNC_6(VAR_0);


        for (VAR_14 = 0; VAR_14 < 16; VAR_14++)
                FUNC_2(VAR_14, VAR_15, VAR_3);

        for (VAR_14 = 16; VAR_14 < 80; VAR_14++) {
                FUNC_0(VAR_14, VAR_15);
        }


 VAR_4=VAR_2[0]; VAR_5=VAR_2[1]; VAR_6=VAR_2[2]; VAR_7=VAR_2[3];
 VAR_8=VAR_2[4]; VAR_9=VAR_2[5]; VAR_10=VAR_2[6]; VAR_11=VAR_2[7];


 for (VAR_14=0; VAR_14<80; VAR_14+=8) {
  VAR_12 = VAR_11 + FUNC_5(VAR_8) + FUNC_1(VAR_8,VAR_9,VAR_10) + VAR_1[VAR_14 ] + VAR_15[VAR_14 ];
  VAR_13 = FUNC_4(VAR_4) + FUNC_3(VAR_4,VAR_5,VAR_6); VAR_7+=VAR_12; VAR_11=VAR_12+VAR_13;
  VAR_12 = VAR_10 + FUNC_5(VAR_7) + FUNC_1(VAR_7,VAR_8,VAR_9) + VAR_1[VAR_14+1] + VAR_15[VAR_14+1];
  VAR_13 = FUNC_4(VAR_11) + FUNC_3(VAR_11,VAR_4,VAR_5); VAR_6+=VAR_12; VAR_10=VAR_12+VAR_13;
  VAR_12 = VAR_9 + FUNC_5(VAR_6) + FUNC_1(VAR_6,VAR_7,VAR_8) + VAR_1[VAR_14+2] + VAR_15[VAR_14+2];
  VAR_13 = FUNC_4(VAR_10) + FUNC_3(VAR_10,VAR_11,VAR_4); VAR_5+=VAR_12; VAR_9=VAR_12+VAR_13;
  VAR_12 = VAR_8 + FUNC_5(VAR_5) + FUNC_1(VAR_5,VAR_6,VAR_7) + VAR_1[VAR_14+3] + VAR_15[VAR_14+3];
  VAR_13 = FUNC_4(VAR_9) + FUNC_3(VAR_9,VAR_10,VAR_11); VAR_4+=VAR_12; VAR_8=VAR_12+VAR_13;
  VAR_12 = VAR_7 + FUNC_5(VAR_4) + FUNC_1(VAR_4,VAR_5,VAR_6) + VAR_1[VAR_14+4] + VAR_15[VAR_14+4];
  VAR_13 = FUNC_4(VAR_8) + FUNC_3(VAR_8,VAR_9,VAR_10); VAR_11+=VAR_12; VAR_7=VAR_12+VAR_13;
  VAR_12 = VAR_6 + FUNC_5(VAR_11) + FUNC_1(VAR_11,VAR_4,VAR_5) + VAR_1[VAR_14+5] + VAR_15[VAR_14+5];
  VAR_13 = FUNC_4(VAR_7) + FUNC_3(VAR_7,VAR_8,VAR_9); VAR_10+=VAR_12; VAR_6=VAR_12+VAR_13;
  VAR_12 = VAR_5 + FUNC_5(VAR_10) + FUNC_1(VAR_10,VAR_11,VAR_4) + VAR_1[VAR_14+6] + VAR_15[VAR_14+6];
  VAR_13 = FUNC_4(VAR_6) + FUNC_3(VAR_6,VAR_7,VAR_8); VAR_9+=VAR_12; VAR_5=VAR_12+VAR_13;
  VAR_12 = VAR_4 + FUNC_5(VAR_9) + FUNC_1(VAR_9,VAR_10,VAR_11) + VAR_1[VAR_14+7] + VAR_15[VAR_14+7];
  VAR_13 = FUNC_4(VAR_5) + FUNC_3(VAR_5,VAR_6,VAR_7); VAR_8+=VAR_12; VAR_4=VAR_12+VAR_13;
 }

 VAR_2[0] += VAR_4; VAR_2[1] += VAR_5; VAR_2[2] += VAR_6; VAR_2[3] += VAR_7;
 VAR_2[4] += VAR_8; VAR_2[5] += VAR_9; VAR_2[6] += VAR_10; VAR_2[7] += VAR_11;


 VAR_4 = VAR_5 = VAR_6 = VAR_7 = VAR_8 = VAR_9 = VAR_10 = VAR_11 = VAR_12 = VAR_13 = 0;
 FUNC_7(VAR_15, 0, sizeof(FUNC_0(VAR_0)));
 FUNC_8(VAR_0);
}
