
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_reserve_entry {int dummy; } ;
struct fdt_header {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void const*,int,int) ;
 int FUNC_3 (void const*,char*,int,int) ;
 int FUNC_4 (void const*) ;
 int FUNC_5 (void const*,void*,int) ;
 scalar_t__ FUNC_6 (void const*,int,int*) ;
 int FUNC_7 (void const*) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (void*,int) ;
 int FUNC_12 (void*,int) ;
 int FUNC_13 (void*,int) ;
 int FUNC_14 (void const*) ;
 int FUNC_15 (void const*) ;
 int FUNC_16 (void const*) ;
 int FUNC_17 (void const*) ;
 int FUNC_18 (void*,char*,int) ;

int FUNC_19(const void *VAR_3, void *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 const char *VAR_10 = VAR_3;
 const char *VAR_11 = VAR_10 + FUNC_16(VAR_3);
 char *VAR_12;

 FUNC_1(VAR_3);

 VAR_7 = (FUNC_7(VAR_3)+1)
  * sizeof(struct fdt_reserve_entry);

 if (FUNC_17(VAR_3) >= 17) {
  VAR_8 = FUNC_15(VAR_3);
 } else {
  VAR_8 = 0;
  while (FUNC_6(VAR_3, VAR_8, &VAR_8) != VAR_0)
   ;
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (!FUNC_2(VAR_3, VAR_7, VAR_8)) {

  VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;
  FUNC_13(VAR_4, 17);
  FUNC_11(VAR_4, VAR_8);
  FUNC_12(VAR_4, VAR_5);
  return 0;
 }


 VAR_9 = FUNC_0(sizeof(struct fdt_header), 8) + VAR_7
  + VAR_8 + FUNC_14(VAR_3);

 if (VAR_5 < VAR_9)
  return -VAR_1;


 VAR_12 = VAR_4;

 if (((VAR_12 + VAR_9) > VAR_10) && (VAR_12 < VAR_11)) {

  VAR_12 = (char *)(uintptr_t)VAR_11;
  if ((VAR_12 + VAR_9) > ((char *)VAR_4 + VAR_5))
   return -VAR_1;
 }

 FUNC_3(VAR_3, VAR_12, VAR_7, VAR_8);
 FUNC_18(VAR_4, VAR_12, VAR_9);

 FUNC_10(VAR_4, VAR_2);
 FUNC_12(VAR_4, VAR_5);
 FUNC_13(VAR_4, 17);
 FUNC_9(VAR_4, 16);
 FUNC_8(VAR_4, FUNC_4(VAR_3));

 return 0;
}
