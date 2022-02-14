
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cx231xx*,int ,int,int ,int,int,int) ;

int FUNC_1(struct cx231xx *VAR_9, u32 VAR_10,
       u32 VAR_11, u32 VAR_12)
{
 int VAR_13 = 0;


 if (VAR_10 == VAR_7) {


  VAR_13 = FUNC_0(VAR_9,
    VAR_8, 32,
    VAR_0, 30, 31, 0x1);

  VAR_13 = FUNC_0(VAR_9,
    VAR_8, 32,
    VAR_0, 23, 24, VAR_11);

  VAR_13 = FUNC_0(VAR_9,
    VAR_8, 32,
    VAR_0, 15, 22, 0xFF);

  VAR_13 = FUNC_0(VAR_9,
    VAR_8, 32,
    VAR_0, 9, 9, 0x1);
 } else if (VAR_12 != VAR_2) {
  if (VAR_12 & VAR_3) {

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 30, 31, 0x1);

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 23, 24,
     VAR_11);

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 15, 22, 0xb);

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 9, 9, 0x1);

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_1, 0, 31, 0x00000003);
  } else if ((VAR_12 == VAR_5) |
   (VAR_12 & VAR_4) |
   (VAR_12 & VAR_6)) {


   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 30, 31, 0x1);

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 23, 24,
     VAR_11);

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 15, 22, 0xF);

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 9, 9, 0x1);
  } else {



   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 30, 31, 0x1);

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 23, 24,
     VAR_11);

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 15, 22, 0xE);

   VAR_13 = FUNC_0(VAR_9,
     VAR_8, 32,
     VAR_0, 9, 9, 0x1);
  }
 }

 return VAR_13;
}
