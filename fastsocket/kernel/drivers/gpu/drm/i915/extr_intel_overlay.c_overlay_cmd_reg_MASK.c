
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct put_image_params {int format; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static u32 FUNC_0(struct put_image_params *VAR_14)
{
 u32 VAR_15 = VAR_5 | VAR_4 | VAR_3;

 if (VAR_14->format & VAR_2) {
  switch (VAR_14->format & VAR_0) {
  case 130:
   VAR_15 |= VAR_11;
   break;
  case 131:
   VAR_15 |= VAR_9;
   break;
  case 132:
  case 133:
   VAR_15 |= VAR_7;
   break;
  }
 } else {
  switch (VAR_14->format & VAR_0) {
  case 130:
   VAR_15 |= VAR_10;
   break;
  case 132:
   VAR_15 |= VAR_8;
   break;
  }

  switch (VAR_14->format & VAR_1) {
  case 135:
   break;
  case 134:
   VAR_15 |= VAR_6;
   break;
  case 128:
   VAR_15 |= VAR_13;
   break;
  case 129:
   VAR_15 |= VAR_12;
   break;
  }
 }

 return VAR_15;
}
