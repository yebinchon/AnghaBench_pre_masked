
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned int recv_bulk_pipe; unsigned int send_bulk_pipe; unsigned char* iobuf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_1 (unsigned short) ;
 unsigned char FUNC_2 (unsigned short) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (char*,char*) ;
 int VAR_13 ;
 int FUNC_4 (struct us_data*,unsigned int,void*,unsigned short,int,int *) ;
 scalar_t__ FUNC_5 (struct us_data*,unsigned int) ;
 int FUNC_6 (struct us_data*,unsigned char*,unsigned short,int ) ;
 int FUNC_7 (struct us_data*,unsigned char*,int) ;
 int FUNC_8 (struct us_data*,int ,int ,unsigned char*) ;
 int FUNC_9 (struct us_data*,int) ;

__attribute__((used)) static int FUNC_10(struct us_data *VAR_14,
           unsigned char VAR_15,
           unsigned char *VAR_16,
           unsigned char *VAR_17,
           unsigned short VAR_18,
           unsigned char VAR_19,
           unsigned char VAR_20,
           unsigned char VAR_21,
           unsigned char VAR_22,
           int VAR_23,
           void *VAR_24,
           unsigned short VAR_25,
           int VAR_26,
           int VAR_27)
{
 int VAR_28;
 unsigned int VAR_29 = (VAR_23 == VAR_0) ?
   VAR_14->recv_bulk_pipe : VAR_14->send_bulk_pipe;

 unsigned char *VAR_30 = VAR_14->iobuf;
 int VAR_31, VAR_32;
 int VAR_33;
 unsigned char *VAR_34 = VAR_14->iobuf;
 unsigned char *VAR_35 = VAR_14->iobuf;

 FUNC_0(VAR_18 > VAR_13/2);

 for (VAR_31=0; VAR_31<20; VAR_31++) {
  if (VAR_31==0) {
   VAR_33 = 16;






   VAR_30[0] = 0x40;
   VAR_30[1] = VAR_15 | VAR_7;
   VAR_30[2] = 0x07;
   VAR_30[3] = 0x17;
   VAR_30[4] = 0xFC;
   VAR_30[5] = 0xE7;
   VAR_30[6] = FUNC_1(VAR_18*2);
   VAR_30[7] = FUNC_2(VAR_18*2);
  } else
   VAR_33 = 8;


  VAR_30[VAR_33-8] = (VAR_23==VAR_1 ? 0x40 : 0xC0);
  VAR_30[VAR_33-7] = VAR_15 |
    (VAR_23==VAR_1 ?
     VAR_6 : VAR_5);
  VAR_30[VAR_33-6] = VAR_19;
  VAR_30[VAR_33-5] = VAR_20;
  VAR_30[VAR_33-4] = VAR_21;
  VAR_30[VAR_33-3] = VAR_22;
  VAR_30[VAR_33-2] = FUNC_1(VAR_25);
  VAR_30[VAR_33-1] = FUNC_2(VAR_25);

  VAR_28 = FUNC_7(VAR_14, VAR_30, VAR_33);

  if (VAR_28 != VAR_10)
   return VAR_8;

  if (VAR_31==0) {

   for (VAR_32=0; VAR_32<VAR_18; VAR_32++) {
    VAR_34[VAR_32<<1] = VAR_16[VAR_32];
    VAR_34[1+(VAR_32<<1)] = VAR_17[VAR_32];
   }

   VAR_28 = FUNC_6(VAR_14, VAR_34, VAR_18*2, 0);
   if (VAR_28 != VAR_10)
    return VAR_8;

  }

  VAR_28 = FUNC_4(VAR_14,
   VAR_29, VAR_24, VAR_25, VAR_26, ((void*)0));
  if (VAR_28 == VAR_11 ||
    VAR_28 == VAR_12) {






   if (VAR_23==VAR_0 && VAR_31==0) {
    if (FUNC_5(VAR_14,
      VAR_14->send_bulk_pipe) < 0)
     return VAR_8;
   }





    VAR_28 = FUNC_8(VAR_14, VAR_2,
    VAR_23==VAR_1 ?
     VAR_4 : VAR_3,
    VAR_35);

   if (VAR_28!=VAR_10)
    return VAR_8;
   if (*VAR_35 & 0x01)
    return VAR_9;
   if (*VAR_35 & 0x20)
    return VAR_9;

   FUNC_3("Redoing %s\n",
     VAR_23==VAR_1 ? "write" : "read");

  } else if (VAR_28 != VAR_10)
   return VAR_8;
  else
   return FUNC_9(VAR_14, VAR_27);

 }

 FUNC_3("Bummer! %s bulk data 20 times failed.\n",
  VAR_23==VAR_1 ? "Writing" : "Reading");

 return VAR_9;
}
