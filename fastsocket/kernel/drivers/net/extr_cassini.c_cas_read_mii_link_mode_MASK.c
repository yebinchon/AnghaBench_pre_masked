
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cas {int cas_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cas*,int ) ;

__attribute__((used)) static void FUNC_1(struct cas *VAR_9, int *VAR_10, int *VAR_11,
       int *VAR_12)
{
 u32 VAR_13;

 *VAR_10 = 0;
 *VAR_11 = 10;
 *VAR_12 = 0;


 VAR_13 = FUNC_0(VAR_9, VAR_8);
 if (VAR_13 & VAR_4)
  *VAR_12 = 0x01;

 if (VAR_13 & VAR_3)
  *VAR_12 |= 0x10;

 if (VAR_13 & VAR_7)
  *VAR_10 = 1;
 if (VAR_13 & VAR_6)
  *VAR_11 = 100;

 if (VAR_9->cas_flags & VAR_0) {
  VAR_13 = FUNC_0(VAR_9, VAR_5);
  if (VAR_13 & (VAR_1 | VAR_2))
   *VAR_11 = 1000;
  if (VAR_13 & VAR_1)
   *VAR_10 = 1;
 }
}
