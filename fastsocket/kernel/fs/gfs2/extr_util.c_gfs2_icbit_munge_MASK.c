
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_sbd*,int) ;

void FUNC_1(struct gfs2_sbd *VAR_1, unsigned char **VAR_2,
        unsigned int VAR_3, int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7 = VAR_3;
 int VAR_8;

 VAR_5 = VAR_7 / (8 * VAR_0);
 VAR_7 %= 8 * VAR_0;
 VAR_6 = VAR_7 / 8;
 VAR_7 %= 8;

 VAR_8 = (VAR_2[VAR_5][VAR_6] & (1 << VAR_7));
 FUNC_0(VAR_1, !VAR_8 != !VAR_4);

 if (VAR_4)
  VAR_2[VAR_5][VAR_6] |= 1 << VAR_7;
 else
  VAR_2[VAR_5][VAR_6] &= ~(1 << VAR_7);
}
