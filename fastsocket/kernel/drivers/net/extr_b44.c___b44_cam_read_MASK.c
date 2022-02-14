
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
 int FUNC_0 (struct b44*,int ,int ,int,int) ;
 int FUNC_1 (struct b44*,int ) ;
 int FUNC_2 (struct b44*,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct b44 *VAR_6, unsigned char *VAR_7, int VAR_8)
{
 u32 VAR_9;

 FUNC_2(VAR_6, VAR_0, (VAR_5 |
       (VAR_8 << VAR_4)));

 FUNC_0(VAR_6, VAR_0, VAR_3, 100, 1);

 VAR_9 = FUNC_1(VAR_6, VAR_2);

 VAR_7[2] = (VAR_9 >> 24) & 0xFF;
 VAR_7[3] = (VAR_9 >> 16) & 0xFF;
 VAR_7[4] = (VAR_9 >> 8) & 0xFF;
 VAR_7[5] = (VAR_9 >> 0) & 0xFF;

 VAR_9 = FUNC_1(VAR_6, VAR_1);

 VAR_7[0] = (VAR_9 >> 8) & 0xFF;
 VAR_7[1] = (VAR_9 >> 0) & 0xFF;
}
