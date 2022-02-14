
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct em28xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct em28xx*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_5, u8 VAR_6, u8 VAR_7,
       u16 VAR_8, u16 VAR_9)
{
 u8 VAR_10 = VAR_8;
 u8 VAR_11 = VAR_9;
 u8 VAR_12 = (VAR_9 >> 7 & 0x02) | (VAR_8 >> 8 & 0x01);

 FUNC_0("em28xx Area Set: (%d,%d)\n",
   (VAR_8 | (VAR_12 & 2) << 7),
   (VAR_9 | (VAR_12 & 1) << 8));

 FUNC_1(VAR_5, VAR_1, &VAR_6, 1);
 FUNC_1(VAR_5, VAR_2, &VAR_7, 1);
 FUNC_1(VAR_5, VAR_3, &VAR_10, 1);
 FUNC_1(VAR_5, VAR_4, &VAR_11, 1);
 return FUNC_1(VAR_5, VAR_0, &VAR_12, 1);
}
