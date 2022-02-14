
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_quad_t ;
typedef int u_int32_t ;
struct sockbuf {int sb_hiwat; scalar_t__ sb_lowat; int sb_mbmax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_1(struct sockbuf *VAR_4, u_int32_t VAR_5)
{
 if ((u_quad_t)VAR_5 > (u_quad_t)VAR_3 * VAR_0 / (VAR_1 + VAR_0))
  return (0);
 VAR_4->sb_hiwat = VAR_5;
 VAR_4->sb_mbmax = FUNC_0(VAR_5 * VAR_2, VAR_3);
 if (VAR_4->sb_lowat > VAR_4->sb_hiwat)
  VAR_4->sb_lowat = VAR_4->sb_hiwat;
 return (1);
}
