
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_inode {int i_diskflags; int i_inode; } ;
struct gfs2_ea_request {int er_type; char const* er_name; size_t er_data_len; int er_name_len; void* er_data; } ;
struct gfs2_ea_location {int dummy; } ;
struct ea_set {struct gfs2_ea_location* es_el; struct gfs2_ea_request* es_er; } ;
struct TYPE_2__ {scalar_t__ sd_jbsize; } ;


 scalar_t__ FUNC_0 (size_t,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct gfs2_ea_request*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (struct gfs2_inode*,struct gfs2_ea_request*,unsigned int,int ,struct gfs2_ea_location*) ;
 int FUNC_4 (struct gfs2_inode*,int ,struct ea_set*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct ea_set*,int ,int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(struct gfs2_inode *VAR_3, int VAR_4, const char *VAR_5,
      const void *VAR_6, size_t VAR_7, struct gfs2_ea_location *VAR_8)
{
 struct gfs2_ea_request VAR_9;
 struct ea_set VAR_10;
 unsigned int VAR_11 = 2;
 int VAR_12;

 VAR_9.er_type = VAR_4;
 VAR_9.er_name = VAR_5;
 VAR_9.er_data = (void *)VAR_6;
 VAR_9.er_name_len = FUNC_6(VAR_5);
 VAR_9.er_data_len = VAR_7;

 FUNC_5(&VAR_10, 0, sizeof(struct ea_set));
 VAR_10.es_er = &VAR_9;
 VAR_10.es_el = VAR_8;

 VAR_12 = FUNC_4(VAR_3, VAR_2, &VAR_10);
 if (VAR_12 > 0)
  return 0;
 if (VAR_12)
  return VAR_12;

 if (!(VAR_3->i_diskflags & VAR_0))
  VAR_11++;
 if (FUNC_1(&VAR_9) > FUNC_2(&VAR_3->i_inode)->sd_jbsize)
  VAR_11 += FUNC_0(VAR_9.er_data_len, FUNC_2(&VAR_3->i_inode)->sd_jbsize);

 return FUNC_3(VAR_3, &VAR_9, VAR_11, VAR_1, VAR_8);
}
