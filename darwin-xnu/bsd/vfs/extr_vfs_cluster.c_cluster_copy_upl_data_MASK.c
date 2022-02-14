
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upl_t ;
typedef int upl_page_info_t ;
struct uio {int uio_segflg; scalar_t__ uio_rw; scalar_t__ uio_offset; } ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int,int,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;







 scalar_t__ VAR_12 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int,int,struct uio*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int) ;

int
FUNC_10(struct uio *VAR_13, upl_t VAR_14, int VAR_15, int *VAR_16)
{
        int VAR_17;
 int VAR_18;
        int VAR_19;
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22;
 upl_page_info_t *VAR_23;
 int VAR_24;

 VAR_22 = *VAR_16;

 FUNC_1((FUNC_0(VAR_0, 34)) | VAR_2,
       (int)VAR_13->uio_offset, VAR_15, VAR_22, 0, 0);

 VAR_20 = VAR_13->uio_segflg;

 switch(VAR_20) {

   case 129:
   case 132:
  VAR_13->uio_segflg = VAR_10;
  break;

   case 130:
   case 133:
  VAR_13->uio_segflg = VAR_9;
  break;

   case 128:
   case 131:
  VAR_13->uio_segflg = VAR_11;
  break;

   case 134:
  VAR_13->uio_segflg = VAR_8;
  break;

 }
 VAR_23 = FUNC_5(VAR_14);

 VAR_18 = VAR_15 / VAR_6;
 VAR_17 = VAR_15 & VAR_4;
 VAR_19 = FUNC_3(VAR_6 - VAR_17, VAR_22);

 VAR_24 = 0;
 while (VAR_22 && VAR_21 == 0) {
         addr64_t VAR_25;

  VAR_25 = ((addr64_t)FUNC_9(VAR_23, VAR_18) << VAR_5) + VAR_17;
  if ((VAR_13->uio_rw == VAR_12) && (FUNC_7(VAR_23, VAR_18) == VAR_3))
   VAR_24++;

  VAR_21 = FUNC_6(VAR_25, VAR_19, VAR_13);

  VAR_18 += 1;
  VAR_17 = 0;
  VAR_22 -= VAR_19;
  VAR_19 = FUNC_3(VAR_6, VAR_22);
 }
 *VAR_16 = VAR_22;

 VAR_13->uio_segflg = VAR_20;

 FUNC_4(FUNC_2(), (VAR_24 * VAR_6), VAR_7, FUNC_8(VAR_14));
 FUNC_1((FUNC_0(VAR_0, 34)) | VAR_1,
       (int)VAR_13->uio_offset, VAR_22, VAR_21, VAR_20, 0);

 return (VAR_21);
}
