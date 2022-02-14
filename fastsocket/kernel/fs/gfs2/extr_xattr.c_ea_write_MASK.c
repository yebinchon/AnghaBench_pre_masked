
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_sbd {scalar_t__ sd_jbsize; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_inode; int i_gl; } ;
struct gfs2_ea_request {unsigned int er_data_len; unsigned int er_name_len; char const* er_name; char const* er_data; int er_type; } ;
struct gfs2_ea_header {unsigned int ea_name_len; unsigned int ea_num_ptrs; scalar_t__ __pad; int ea_type; int ea_data_len; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_data; } ;
typedef int __be64 ;


 unsigned int FUNC_0 (unsigned int,scalar_t__) ;
 scalar_t__ FUNC_1 (struct gfs2_ea_header*) ;
 int * FUNC_2 (struct gfs2_ea_header*) ;
 scalar_t__ FUNC_3 (struct gfs2_ea_header*) ;
 scalar_t__ FUNC_4 (struct gfs2_ea_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_5 (int *) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct gfs2_inode*,int *,unsigned int*,int ,int *) ;
 int FUNC_11 (struct gfs2_sbd*,int) ;
 struct buffer_head* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct buffer_head*,int ,int ) ;
 int FUNC_14 (int ,struct buffer_head*) ;
 int FUNC_15 (struct gfs2_sbd*,int ,int) ;
 int FUNC_16 (scalar_t__,char const*,unsigned int) ;
 int FUNC_17 (scalar_t__,int ,unsigned int) ;

__attribute__((used)) static int FUNC_18(struct gfs2_inode *VAR_2, struct gfs2_ea_header *VAR_3,
      struct gfs2_ea_request *VAR_4)
{
 struct gfs2_sbd *VAR_5 = FUNC_5(&VAR_2->i_inode);
 int VAR_6;

 VAR_3->ea_data_len = FUNC_7(VAR_4->er_data_len);
 VAR_3->ea_name_len = VAR_4->er_name_len;
 VAR_3->ea_type = VAR_4->er_type;
 VAR_3->__pad = 0;

 FUNC_16(FUNC_3(VAR_3), VAR_4->er_name, VAR_4->er_name_len);

 if (FUNC_4(VAR_4) <= VAR_5->sd_jbsize) {
  VAR_3->ea_num_ptrs = 0;
  FUNC_16(FUNC_1(VAR_3), VAR_4->er_data, VAR_4->er_data_len);
 } else {
  __be64 *VAR_7 = FUNC_2(VAR_3);
  const char *VAR_8 = VAR_4->er_data;
  unsigned int VAR_9 = VAR_4->er_data_len;
  unsigned int VAR_10;
  unsigned int VAR_11;

  VAR_3->ea_num_ptrs = FUNC_0(VAR_4->er_data_len, VAR_5->sd_jbsize);
  for (VAR_11 = 0; VAR_11 < VAR_3->ea_num_ptrs; VAR_11++) {
   struct buffer_head *VAR_12;
   u64 VAR_13;
   int VAR_14 = sizeof(struct gfs2_meta_header);
   unsigned int VAR_15 = 1;

   VAR_6 = FUNC_10(VAR_2, &VAR_13, &VAR_15, 0, ((void*)0));
   if (VAR_6)
    return VAR_6;
   FUNC_15(VAR_5, VAR_13, 1);
   VAR_12 = FUNC_12(VAR_2->i_gl, VAR_13);
   FUNC_14(VAR_2->i_gl, VAR_12);
   FUNC_13(VAR_12, VAR_1, VAR_0);

   FUNC_9(&VAR_2->i_inode, 1);

   VAR_10 = VAR_9 > VAR_5->sd_jbsize ? VAR_5->sd_jbsize :
          VAR_9;
   FUNC_16(VAR_12->b_data + VAR_14, VAR_8, VAR_10);
   if (VAR_10 < VAR_5->sd_jbsize)
    FUNC_17(VAR_12->b_data + VAR_14 + VAR_10, 0,
           VAR_5->sd_jbsize - VAR_10);

   *VAR_7++ = FUNC_8(VAR_12->b_blocknr);
   VAR_8 += VAR_10;
   VAR_9 -= VAR_10;

   FUNC_6(VAR_12);
  }

  FUNC_11(VAR_5, !VAR_9);
 }

 return 0;
}
