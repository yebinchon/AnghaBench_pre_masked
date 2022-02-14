
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fc_lport {unsigned int mfs; int lp_mutex; } ;
struct fc_frame_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct fc_lport *VAR_3, u32 VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_1(&VAR_3->lp_mutex);

 VAR_5 = VAR_3->mfs;

 if (VAR_4 >= VAR_2) {
  VAR_4 &= ~3;
  if (VAR_4 > VAR_1)
   VAR_4 = VAR_1;
  VAR_4 -= sizeof(struct fc_frame_header);
  VAR_3->mfs = VAR_4;
  VAR_6 = 0;
 }

 if (!VAR_6 && VAR_4 < VAR_5)
  FUNC_0(VAR_3);

 FUNC_2(&VAR_3->lp_mutex);

 return VAR_6;
}
