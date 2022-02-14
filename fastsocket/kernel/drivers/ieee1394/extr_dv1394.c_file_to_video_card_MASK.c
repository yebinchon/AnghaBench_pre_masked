
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_card {int dummy; } ;
struct file {scalar_t__ private_data; } ;



__attribute__((used)) static inline struct video_card* FUNC_0(struct file *VAR_0)
{
 return (struct video_card*) VAR_0->private_data;
}
