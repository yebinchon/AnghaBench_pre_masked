
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_2__ {void* mh_format; void* mh_type; void* mh_magic; } ;
struct gfs2_log_descriptor {int ld_reserved; scalar_t__ ld_data2; scalar_t__ ld_data1; scalar_t__ ld_length; void* ld_type; TYPE_1__ ld_header; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_log_descriptor* FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (int ) ;
 struct buffer_head* FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static struct buffer_head *FUNC_4(struct gfs2_sbd *VAR_3, u32 VAR_4)
{
 struct buffer_head *VAR_5 = FUNC_2(VAR_3);
 struct gfs2_log_descriptor *VAR_6 = FUNC_0(VAR_5);
 VAR_6->ld_header.mh_magic = FUNC_1(VAR_1);
 VAR_6->ld_header.mh_type = FUNC_1(VAR_2);
 VAR_6->ld_header.mh_format = FUNC_1(VAR_0);
 VAR_6->ld_type = FUNC_1(VAR_4);
 VAR_6->ld_length = 0;
 VAR_6->ld_data1 = 0;
 VAR_6->ld_data2 = 0;
 FUNC_3(VAR_6->ld_reserved, 0, sizeof(VAR_6->ld_reserved));
 return VAR_5;
}
