
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b44 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct b44*,int ,int ,int,int) ;
 int FUNC_1 (struct b44*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct b44 *VAR_7, unsigned char *VAR_8, int VAR_9)
{
 u32 VAR_10;

 VAR_10 = ((u32) VAR_8[2]) << 24;
 VAR_10 |= ((u32) VAR_8[3]) << 16;
 VAR_10 |= ((u32) VAR_8[4]) << 8;
 VAR_10 |= ((u32) VAR_8[5]) << 0;
 FUNC_1(VAR_7, VAR_2, VAR_10);
 VAR_10 = (VAR_6 |
        (((u32) VAR_8[0]) << 8) |
        (((u32) VAR_8[1]) << 0));
 FUNC_1(VAR_7, VAR_1, VAR_10);
 FUNC_1(VAR_7, VAR_0, (VAR_5 |
       (VAR_9 << VAR_4)));
 FUNC_0(VAR_7, VAR_0, VAR_3, 100, 1);
}
