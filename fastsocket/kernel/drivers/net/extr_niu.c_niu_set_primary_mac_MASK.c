
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u16 ;
struct niu {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_7, unsigned char *VAR_8)
{
 u16 VAR_9 = VAR_8[4] << 8 | VAR_8[5];
 u16 VAR_10 = VAR_8[2] << 8 | VAR_8[3];
 u16 VAR_11 = VAR_8[0] << 8 | VAR_8[1];

 if (VAR_7->flags & VAR_3) {
  FUNC_0(VAR_4, VAR_9);
  FUNC_0(VAR_5, VAR_10);
  FUNC_0(VAR_6, VAR_11);
 } else {
  FUNC_0(VAR_0, VAR_9);
  FUNC_0(VAR_1, VAR_10);
  FUNC_0(VAR_2, VAR_11);
 }
}
