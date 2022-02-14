
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct mmc_test_card {int* scratch; int* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct mmc_test_card*,int*,unsigned int,int,int ) ;
 int FUNC_4 (struct mmc_test_card*,int) ;
 int FUNC_5 (struct mmc_test_card*,struct scatterlist*,unsigned int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_6 (struct scatterlist*,unsigned int,int*,int) ;
 int FUNC_7 (struct scatterlist*,unsigned int,int*,int) ;

__attribute__((used)) static int FUNC_8(struct mmc_test_card *VAR_3,
 struct scatterlist *VAR_4, unsigned VAR_5, unsigned VAR_6,
 unsigned VAR_7, unsigned VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 unsigned long VAR_12;

 if (VAR_9) {
  for (VAR_11 = 0;VAR_11 < VAR_7 * VAR_8;VAR_11++)
   VAR_3->scratch[VAR_11] = VAR_11;
 } else {
  FUNC_2(VAR_3->scratch, 0, VAR_0);
 }
 FUNC_1(VAR_12);
 FUNC_6(VAR_4, VAR_5, VAR_3->scratch, VAR_0);
 FUNC_0(VAR_12);

 VAR_10 = FUNC_4(VAR_3, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6,
  VAR_7, VAR_8, VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9) {
  int VAR_13;

  VAR_10 = FUNC_4(VAR_3, 512);
  if (VAR_10)
   return VAR_10;

  VAR_13 = (VAR_7 * VAR_8 + 511) / 512;
  if ((VAR_13 * 512) == (VAR_7 * VAR_8))
   VAR_13++;

  if ((VAR_13 * 512) > VAR_0)
   return -VAR_1;

  FUNC_2(VAR_3->buffer, 0, VAR_13 * 512);

  for (VAR_11 = 0;VAR_11 < VAR_13;VAR_11++) {
   VAR_10 = FUNC_3(VAR_3,
    VAR_3->buffer + VAR_11 * 512,
    VAR_6 + VAR_11 * 512, 512, 0);
   if (VAR_10)
    return VAR_10;
  }

  for (VAR_11 = 0;VAR_11 < VAR_7 * VAR_8;VAR_11++) {
   if (VAR_3->buffer[VAR_11] != (u8)VAR_11)
    return VAR_2;
  }

  for (;VAR_11 < VAR_13 * 512;VAR_11++) {
   if (VAR_3->buffer[VAR_11] != 0xDF)
    return VAR_2;
  }
 } else {
  FUNC_1(VAR_12);
  FUNC_7(VAR_4, VAR_5, VAR_3->scratch, VAR_0);
  FUNC_0(VAR_12);
  for (VAR_11 = 0;VAR_11 < VAR_7 * VAR_8;VAR_11++) {
   if (VAR_3->scratch[VAR_11] != (u8)VAR_11)
    return VAR_2;
  }
 }

 return 0;
}
