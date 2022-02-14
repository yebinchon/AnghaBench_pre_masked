
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_streaming {int last_fid; } ;
struct uvc_buffer {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct uvc_streaming *VAR_3,
  struct uvc_buffer *VAR_4, __u8 *VAR_5, int VAR_6)
{
 VAR_5[0] = 2;
 VAR_5[1] = VAR_1 | VAR_0
  | (VAR_3->last_fid & VAR_2);
 return 2;
}
