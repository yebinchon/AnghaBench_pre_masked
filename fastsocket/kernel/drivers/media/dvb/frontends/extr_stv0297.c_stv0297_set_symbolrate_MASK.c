
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u32 ;
struct stv0297_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct stv0297_state*,int,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct stv0297_state *VAR_1, u32 VAR_2)
{
 long VAR_3;

 VAR_3 = 131072L * VAR_2;
 VAR_3 = VAR_3 / (VAR_0 / 4);
 VAR_3 = VAR_3 * 8192L;

 FUNC_0(VAR_1, 0x55, (unsigned char) (VAR_3 & 0xFF));
 FUNC_0(VAR_1, 0x56, (unsigned char) (VAR_3 >> 8));
 FUNC_0(VAR_1, 0x57, (unsigned char) (VAR_3 >> 16));
 FUNC_0(VAR_1, 0x58, (unsigned char) (VAR_3 >> 24));
}
