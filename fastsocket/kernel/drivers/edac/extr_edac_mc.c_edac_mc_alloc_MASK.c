
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int mc_idx; unsigned int nr_csrows; int csrow_idx; unsigned int nr_channels; int chan_idx; int grp_kobj_list; int op_state; struct mem_ctl_info* csrow; struct mem_ctl_info* channels; struct mem_ctl_info* mci; void* pvt_info; struct mem_ctl_info* csrows; } ;
struct csrow_info {int mc_idx; unsigned int nr_csrows; int csrow_idx; unsigned int nr_channels; int chan_idx; int grp_kobj_list; int op_state; struct csrow_info* csrow; struct csrow_info* channels; struct csrow_info* mci; void* pvt_info; struct csrow_info* csrows; } ;
struct channel_info {int mc_idx; unsigned int nr_csrows; int csrow_idx; unsigned int nr_channels; int chan_idx; int grp_kobj_list; int op_state; struct channel_info* csrow; struct channel_info* channels; struct channel_info* mci; void* pvt_info; struct channel_info* csrows; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 void* FUNC_1 (struct mem_ctl_info*,unsigned int) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 int FUNC_3 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_4 (unsigned int,int ) ;

struct mem_ctl_info *FUNC_5(unsigned VAR_2, unsigned VAR_3,
    unsigned VAR_4, int VAR_5)
{
 struct mem_ctl_info *VAR_6;
 struct csrow_info *VAR_7, *VAR_8;
 struct channel_info *VAR_9, *VAR_10, *VAR_11;
 void *VAR_12;
 unsigned VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;






 VAR_6 = (struct mem_ctl_info *)0;
 VAR_7 = FUNC_1(&VAR_6[1], sizeof(*VAR_7));
 VAR_9 = FUNC_1(&VAR_7[VAR_3], sizeof(*VAR_9));
 VAR_12 = FUNC_1(&VAR_9[VAR_4 * VAR_3], VAR_2);
 VAR_13 = ((unsigned long)VAR_12) + VAR_2;

 VAR_6 = FUNC_4(VAR_13, VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);




 VAR_7 = (struct csrow_info *)(((char *)VAR_6) + ((unsigned long)VAR_7));
 VAR_9 = (struct channel_info *)(((char *)VAR_6) + ((unsigned long)VAR_9));
 VAR_12 = VAR_2 ? (((char *)VAR_6) + ((unsigned long)VAR_12)) : ((void*)0);


 VAR_6->mc_idx = VAR_5;
 VAR_6->csrows = VAR_7;
 VAR_6->pvt_info = VAR_12;
 VAR_6->nr_csrows = VAR_3;

 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  VAR_8 = &VAR_7[VAR_14];
  VAR_8->csrow_idx = VAR_14;
  VAR_8->mci = VAR_6;
  VAR_8->nr_channels = VAR_4;
  VAR_10 = &VAR_9[VAR_14 * VAR_4];
  VAR_8->channels = VAR_10;

  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   VAR_11 = &VAR_10[VAR_15];
   VAR_11->chan_idx = VAR_15;
   VAR_11->csrow = VAR_8;
  }
 }

 VAR_6->op_state = VAR_1;
 FUNC_0(&VAR_6->grp_kobj_list);




 VAR_16 = FUNC_2(VAR_6);
 if (VAR_16) {
  FUNC_3(VAR_6);
  return ((void*)0);
 }







 return VAR_6;
}
