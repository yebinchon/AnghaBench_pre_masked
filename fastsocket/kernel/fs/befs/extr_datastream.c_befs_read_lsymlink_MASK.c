
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef scalar_t__ befs_off_t ;
typedef int befs_data_stream ;
struct TYPE_2__ {scalar_t__ block_size; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*,...) ;
 int FUNC_2 (struct super_block*,char*,scalar_t__) ;
 struct buffer_head* FUNC_3 (struct super_block*,int *,scalar_t__,int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (void*,int ,scalar_t__) ;

size_t
FUNC_6(struct super_block * VAR_0, befs_data_stream * VAR_1, void *VAR_2,
     befs_off_t VAR_3)
{
 befs_off_t VAR_4 = 0;
 u16 VAR_5;
 struct buffer_head *VAR_6 = ((void*)0);
 FUNC_1(VAR_0, "---> befs_read_lsymlink() length: %Lu", VAR_3);

 while (VAR_4 < VAR_3) {
  VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_4, ((void*)0));
  if (!VAR_6) {
   FUNC_2(VAR_0, "BeFS: Error reading datastream block "
       "starting from %Lu", VAR_4);
   FUNC_1(VAR_0, "<--- befs_read_lsymlink() ERROR");
   return VAR_4;

  }
  VAR_5 = ((VAR_4 + FUNC_0(VAR_0)->block_size) < VAR_3) ?
      FUNC_0(VAR_0)->block_size : VAR_3 - VAR_4;
  FUNC_5(VAR_2 + VAR_4, VAR_6->b_data, VAR_5);
  FUNC_4(VAR_6);
  VAR_4 += VAR_5;
 }

 FUNC_1(VAR_0, "<--- befs_read_lsymlink() read %u bytes", VAR_4);
 return VAR_4;
}
