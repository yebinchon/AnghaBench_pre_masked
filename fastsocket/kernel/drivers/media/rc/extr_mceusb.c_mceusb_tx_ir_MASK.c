
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct rc_dev {struct mceusb_dev* priv; } ;
struct mceusb_dev {unsigned char tx_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mceusb_dev*,unsigned char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (long) ;

__attribute__((used)) static int FUNC_7(struct rc_dev *VAR_15, int *VAR_16, u32 VAR_17)
{
 struct mceusb_dev *VAR_18 = VAR_15->priv;
 int VAR_19, VAR_20 = 0;
 int VAR_21, VAR_22 = 0;
 unsigned char *VAR_23;
 long VAR_24 = 0;
 struct timeval VAR_25, VAR_26;

 FUNC_0(&VAR_25);

 VAR_21 = VAR_17 / sizeof(int);

 VAR_23 = FUNC_2(sizeof(int) * VAR_3, VAR_2);
 if (!VAR_23)
  return -VAR_1;


 VAR_23[VAR_22++] = VAR_6;
 VAR_23[VAR_22++] = VAR_4;
 VAR_23[VAR_22++] = VAR_18->tx_mask;


 for (VAR_19 = 0; (VAR_19 < VAR_21) && (VAR_22 < VAR_3); VAR_19++) {
  VAR_24 += VAR_16[VAR_19];
  VAR_16[VAR_19] = VAR_16[VAR_19] / VAR_12;

  do {


   if ((VAR_22 < VAR_3) &&
       (VAR_22 - VAR_13) %
        VAR_5 == 0)
    VAR_23[VAR_22++] = VAR_8;


   if (VAR_22 < VAR_3)
    VAR_23[VAR_22++] =
     (VAR_16[VAR_19] < VAR_11 ?
      VAR_16[VAR_19] : VAR_10) |
      (VAR_19 & 1 ? 0x00 : VAR_11);
   else {
    VAR_20 = -VAR_0;
    goto out;
   }

  } while ((VAR_16[VAR_19] > VAR_10) &&
    (VAR_16[VAR_19] -= VAR_10));
 }


 VAR_23[VAR_22 - (VAR_22 - VAR_13) % VAR_5] =
  VAR_7 + (VAR_22 - VAR_13) %
  VAR_5 - 1;


 if (VAR_22 >= VAR_3) {
  VAR_20 = -VAR_0;
  goto out;
 }


 VAR_23[VAR_22++] = VAR_9;


 FUNC_3(VAR_18, VAR_23, VAR_22);






 FUNC_0(&VAR_26);
 VAR_24 -= (VAR_26.tv_usec - VAR_25.tv_usec) +
      (VAR_26.tv_sec - VAR_25.tv_sec) * 1000000;


 FUNC_5(VAR_14);
 FUNC_4(FUNC_6(VAR_24));

out:
 FUNC_1(VAR_23);
 return VAR_20 ? VAR_20 : VAR_17;
}
