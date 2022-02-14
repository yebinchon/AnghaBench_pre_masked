
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrox_fb_info {int dummy; } ;


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
 int VAR_14 ;





 unsigned char FUNC_0 (struct matrox_fb_info const*,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(const struct matrox_fb_info *VAR_15,
           unsigned int VAR_16, unsigned int VAR_17)
{
 unsigned char VAR_18 = VAR_16 >> 16;
 unsigned char VAR_19 = VAR_16 >> 8;
 unsigned char VAR_20 = VAR_16;

 switch (VAR_17) {
  case 132:
   return (FUNC_0(VAR_15, VAR_3) != VAR_18 ||
    FUNC_0(VAR_15, VAR_4) != VAR_19 ||
    FUNC_0(VAR_15, VAR_5) != VAR_20);

  case 131:
   return (FUNC_0(VAR_15, VAR_6) != VAR_18 ||
    FUNC_0(VAR_15, VAR_7) != VAR_19 ||
    FUNC_0(VAR_15, VAR_8) != VAR_20);

  case 130:
   return (FUNC_0(VAR_15, VAR_9) != VAR_18 ||
    FUNC_0(VAR_15, VAR_10) != VAR_19 ||
    FUNC_0(VAR_15, VAR_11) != VAR_20);

  case 129:
   return (FUNC_0(VAR_15, VAR_0) != VAR_18 ||
    FUNC_0(VAR_15, VAR_1) != VAR_19 ||
    FUNC_0(VAR_15, VAR_2) != VAR_20);

  case 128:
   return (FUNC_0(VAR_15, VAR_12) != VAR_18 ||
    FUNC_0(VAR_15, VAR_13) != VAR_19 ||
    FUNC_0(VAR_15, VAR_14) != VAR_20);
 }
 return 1;
}
