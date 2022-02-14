
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
struct hifn_device {int dummy; } ;
struct hifn_base_command {void* session_num; void* total_dest_count; void* total_source_count; void* masks; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hifn_device *VAR_5, u8 *VAR_6,
  unsigned VAR_7, unsigned VAR_8, u16 VAR_9, u8 VAR_10)
{
 struct hifn_base_command *VAR_11;
 u8 *VAR_12 = VAR_6;

 VAR_11 = (struct hifn_base_command *)VAR_12;
 VAR_11->masks = FUNC_0(VAR_9);
 VAR_11->total_source_count =
  FUNC_0(VAR_8 & VAR_2);
 VAR_11->total_dest_count =
  FUNC_0(VAR_7 & VAR_2);

 VAR_7 >>= 16;
 VAR_8 >>= 16;
 VAR_11->session_num = FUNC_0(VAR_10 |
     ((VAR_8 << VAR_4) & VAR_3) |
     ((VAR_7 << VAR_1) & VAR_0));

 return sizeof(struct hifn_base_command);
}
