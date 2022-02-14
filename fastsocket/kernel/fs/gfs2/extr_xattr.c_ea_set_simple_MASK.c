
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gfs2_inode {int i_inode; } ;
struct gfs2_ea_header {scalar_t__ ea_type; } ;
struct ea_set {int ea_split; TYPE_2__* es_er; struct gfs2_ea_header* es_ea; struct buffer_head* es_bh; } ;
struct buffer_head {int dummy; } ;
struct TYPE_5__ {int er_data_len; int er_name_len; } ;
struct TYPE_4__ {int sd_jbsize; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct gfs2_ea_header*) ;
 unsigned int FUNC_2 (struct gfs2_ea_header*) ;
 unsigned int FUNC_3 (struct gfs2_ea_header*) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (struct gfs2_inode*,TYPE_2__*,unsigned int,int ,struct ea_set*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,unsigned int*) ;
 int FUNC_7 (struct gfs2_inode*,struct buffer_head*,struct gfs2_ea_header*,struct gfs2_ea_header*,int) ;
 int VAR_1 ;
 int FUNC_8 (struct gfs2_inode*,struct buffer_head*,struct gfs2_ea_header*,struct ea_set*) ;

__attribute__((used)) static int FUNC_9(struct gfs2_inode *VAR_2, struct buffer_head *VAR_3,
    struct gfs2_ea_header *VAR_4, struct gfs2_ea_header *VAR_5,
    void *VAR_6)
{
 struct ea_set *VAR_7 = VAR_6;
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(FUNC_4(&VAR_2->i_inode), VAR_7->es_er->er_name_len,
          VAR_7->es_er->er_data_len, &VAR_8);

 if (VAR_4->ea_type == VAR_0) {
  if (FUNC_2(VAR_4) < VAR_8)
   return 0;
  if (!FUNC_1(VAR_4)) {
   VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, 1);
   if (VAR_10)
    return VAR_10;
  }
  VAR_7->ea_split = 0;
 } else if (FUNC_2(VAR_4) - FUNC_3(VAR_4) >= VAR_8)
  VAR_7->ea_split = 1;
 else
  return 0;

 if (VAR_9) {
  VAR_10 = FUNC_8(VAR_2, VAR_3, VAR_4, VAR_7);
  if (VAR_10)
   return VAR_10;
 } else {
  unsigned int VAR_11;

  VAR_7->es_bh = VAR_3;
  VAR_7->es_ea = VAR_4;
  VAR_11 = 2 + FUNC_0(VAR_7->es_er->er_data_len,
     FUNC_4(&VAR_2->i_inode)->sd_jbsize);

  VAR_10 = FUNC_5(VAR_2, VAR_7->es_er, VAR_11,
       VAR_1, VAR_7);
  if (VAR_10)
   return VAR_10;
 }

 return 1;
}
