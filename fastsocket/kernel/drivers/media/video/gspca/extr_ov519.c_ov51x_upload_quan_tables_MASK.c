
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ bridge; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct sd*,int,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_4)
{
 const unsigned char VAR_5[] = {
  0, 1, 1, 2, 2, 3, 3, 4,
  1, 1, 1, 2, 2, 3, 4, 4,
  1, 1, 2, 2, 3, 4, 4, 4,
  2, 2, 2, 3, 4, 4, 4, 4,
  2, 2, 3, 4, 4, 5, 5, 5,
  3, 3, 4, 4, 5, 5, 5, 5,
  3, 4, 4, 4, 5, 5, 5, 5,
  4, 4, 4, 4, 5, 5, 5, 5
 };

 const unsigned char VAR_6[] = {
  0, 2, 2, 3, 4, 4, 4, 4,
  2, 2, 2, 4, 4, 4, 4, 4,
  2, 2, 3, 4, 4, 4, 4, 4,
  3, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4
 };


 const unsigned char VAR_7[] = {
  5, 4, 5, 6, 6, 7, 7, 7,
  5, 5, 5, 5, 6, 7, 7, 7,
  6, 6, 6, 6, 7, 7, 7, 8,
  7, 7, 6, 7, 7, 7, 8, 8
 };
 const unsigned char VAR_8[] = {
  6, 6, 6, 7, 7, 7, 7, 7,
  6, 6, 6, 7, 7, 7, 7, 7,
  6, 6, 6, 7, 7, 7, 7, 8,
  7, 7, 7, 7, 7, 7, 8, 8
 };

 const unsigned char *VAR_9, *VAR_10;
 unsigned char VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15 = VAR_3;

 FUNC_0(VAR_2, "Uploading quantization tables");

 if (VAR_4->bridge == VAR_0 || VAR_4->bridge == VAR_1) {
  VAR_9 = VAR_5;
  VAR_10 = VAR_6;
  VAR_14 = 32;
 } else {
  VAR_9 = VAR_7;
  VAR_10 = VAR_8;
  VAR_14 = 16;
 }

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_11 = *VAR_9++;
  VAR_12 = *VAR_9++;
  VAR_11 &= 0x0f;
  VAR_12 &= 0x0f;
  VAR_11 |= VAR_12 << 4;
  FUNC_1(VAR_4, VAR_15, VAR_11);

  VAR_11 = *VAR_10++;
  VAR_12 = *VAR_10++;
  VAR_11 &= 0x0f;
  VAR_12 &= 0x0f;
  VAR_11 |= VAR_12 << 4;
  FUNC_1(VAR_4, VAR_15 + VAR_14, VAR_11);

  VAR_15++;
 }
}
