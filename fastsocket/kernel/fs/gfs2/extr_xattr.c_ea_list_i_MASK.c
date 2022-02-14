
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int dummy; } ;
struct gfs2_ea_request {scalar_t__ er_data_len; scalar_t__ er_data; } ;
struct gfs2_ea_header {int ea_type; int ea_name_len; } ;
struct ea_list {scalar_t__ ei_size; struct gfs2_ea_request* ei_er; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (struct gfs2_ea_header*) ;


 int VAR_1 ;

 unsigned int FUNC_2 (struct gfs2_ea_header*) ;
 int FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static int FUNC_4(struct gfs2_inode *VAR_2, struct buffer_head *VAR_3,
       struct gfs2_ea_header *VAR_4, struct gfs2_ea_header *VAR_5,
       void *VAR_6)
{
 struct ea_list *VAR_7 = VAR_6;
 struct gfs2_ea_request *VAR_8 = VAR_7->ei_er;
 unsigned int VAR_9 = FUNC_2(VAR_4);

 if (VAR_4->ea_type == VAR_1)
  return 0;

 if (VAR_8->er_data_len) {
  char *VAR_10 = ((void*)0);
  unsigned int VAR_11 = 0;
  char VAR_12 = 0;

  if (VAR_7->ei_size + VAR_9 > VAR_8->er_data_len)
   return -VAR_0;

  switch (VAR_4->ea_type) {
  case 128:
   VAR_10 = "user.";
   VAR_11 = 5;
   break;
  case 129:
   VAR_10 = "system.";
   VAR_11 = 7;
   break;
  case 130:
   VAR_10 = "security.";
   VAR_11 = 9;
   break;
  }

  FUNC_0(VAR_11 == 0);

  FUNC_3(VAR_8->er_data + VAR_7->ei_size, VAR_10, VAR_11);
  FUNC_3(VAR_8->er_data + VAR_7->ei_size + VAR_11, FUNC_1(VAR_4),
         VAR_4->ea_name_len);
  FUNC_3(VAR_8->er_data + VAR_7->ei_size + VAR_9 - 1, &VAR_12, 1);
 }

 VAR_7->ei_size += VAR_9;

 return 0;
}
