
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct kvec {unsigned char* iov_base; size_t iov_len; } ;
struct jffs2_sb_info {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct jffs2_sb_info*,int ,size_t,size_t*,int const*) ;
 int FUNC_1 (struct jffs2_sb_info*,struct kvec*,int,int ,size_t*,int ) ;
 int FUNC_2 (struct jffs2_sb_info*) ;

int FUNC_3(struct jffs2_sb_info *VAR_0, loff_t VAR_1, size_t VAR_2,
        size_t *VAR_3, const u_char *VAR_4)
{
 struct kvec VAR_5[1];

 if (!FUNC_2(VAR_0))
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 VAR_5[0].iov_base = (unsigned char *) VAR_4;
 VAR_5[0].iov_len = VAR_2;
 return FUNC_1(VAR_0, VAR_5, 1, VAR_1, VAR_3, 0);
}
