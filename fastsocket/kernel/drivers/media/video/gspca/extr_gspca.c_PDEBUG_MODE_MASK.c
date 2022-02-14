
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*,int,int,int,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_2, __u32 VAR_3, int VAR_4, int VAR_5)
{
 if ((VAR_3 >> 24) >= '0' && (VAR_3 >> 24) <= 'z') {
  FUNC_0(VAR_0|VAR_1, "%s %c%c%c%c %dx%d",
   VAR_2,
   VAR_3 & 0xff,
   (VAR_3 >> 8) & 0xff,
   (VAR_3 >> 16) & 0xff,
   VAR_3 >> 24,
   VAR_4, VAR_5);
 } else {
  FUNC_0(VAR_0|VAR_1, "%s 0x%08x %dx%d",
   VAR_2,
   VAR_3,
   VAR_4, VAR_5);
 }
}
