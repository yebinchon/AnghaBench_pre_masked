
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edd_info {int dummy; } ;
struct edd_device {struct edd_info* info; } ;



__attribute__((used)) static inline struct edd_info *
FUNC_0(struct edd_device *VAR_0)
{
 return VAR_0->info;
}
