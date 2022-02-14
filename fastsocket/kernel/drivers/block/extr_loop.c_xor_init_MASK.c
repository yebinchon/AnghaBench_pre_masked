
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_info64 {scalar_t__ lo_encrypt_key_size; } ;
struct loop_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct loop_device *VAR_1, const struct loop_info64 *VAR_2)
{
 if (FUNC_0(VAR_2->lo_encrypt_key_size <= 0))
  return -VAR_0;
 return 0;
}
