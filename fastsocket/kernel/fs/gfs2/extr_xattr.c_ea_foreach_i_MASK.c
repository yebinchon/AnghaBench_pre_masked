
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_inode; } ;
struct gfs2_ea_header {int ea_type; } ;
struct buffer_head {char* b_data; int b_size; } ;
typedef int (* ea_call_t ) (struct gfs2_inode*,struct buffer_head*,struct gfs2_ea_header*,struct gfs2_ea_header*,void*) ;


 int VAR_0 ;
 struct gfs2_ea_header* FUNC_0 (struct gfs2_ea_header*) ;
 int FUNC_1 (int ) ;
 struct gfs2_ea_header* FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct gfs2_ea_header*) ;
 int FUNC_4 (struct gfs2_ea_header*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gfs2_inode*) ;
 scalar_t__ FUNC_7 (int ,struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_8(struct gfs2_inode *VAR_2, struct buffer_head *VAR_3,
   ea_call_t VAR_4, void *VAR_5)
{
 struct gfs2_ea_header *VAR_6, *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (FUNC_7(FUNC_5(&VAR_2->i_inode), VAR_3, VAR_1))
  return -VAR_0;

 for (VAR_6 = FUNC_2(VAR_3);; VAR_7 = VAR_6, VAR_6 = FUNC_0(VAR_6)) {
  if (!FUNC_4(VAR_6))
   goto fail;
  if (!(VAR_3->b_data <= (char *)VAR_6 && (char *)FUNC_0(VAR_6) <=
        VAR_3->b_data + VAR_3->b_size))
   goto fail;
  if (!FUNC_1(VAR_6->ea_type))
   goto fail;

  VAR_8 = VAR_4(VAR_2, VAR_3, VAR_6, VAR_7, VAR_5);
  if (VAR_8)
   return VAR_8;

  if (FUNC_3(VAR_6)) {
   if ((char *)FUNC_0(VAR_6) !=
       VAR_3->b_data + VAR_3->b_size)
    goto fail;
   break;
  }
 }

 return VAR_8;

fail:
 FUNC_6(VAR_2);
 return -VAR_0;
}
