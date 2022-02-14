
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {unsigned int sd_jbsize; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct gfs2_sbd*,unsigned int,size_t,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct gfs2_sbd *VAR_2, unsigned int VAR_3, size_t VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4 > VAR_1)
  return -VAR_0;

 FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_5);


 if (VAR_5 > VAR_2->sd_jbsize)
  return -VAR_0;

 return 0;
}
