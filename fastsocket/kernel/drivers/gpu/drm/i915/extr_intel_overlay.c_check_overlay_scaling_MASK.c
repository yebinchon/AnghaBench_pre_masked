
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct put_image_params {int src_scan_h; int dst_h; int src_scan_w; int dst_w; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct put_image_params *VAR_1)
{
 u32 VAR_2;


 VAR_2 = ((VAR_1->src_scan_h << 16) / VAR_1->dst_h) >> 16;
 if (VAR_2 > 7)
  return -VAR_0;
 VAR_2 = ((VAR_1->src_scan_w << 16) / VAR_1->dst_w) >> 16;
 if (VAR_2 > 7)
  return -VAR_0;

 return 0;
}
