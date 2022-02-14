
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_device {struct go7007* device_data; } ;
struct go7007 {scalar_t__ ref_count; struct go7007* snd_context; } ;


 int FUNC_0 (struct go7007*) ;

__attribute__((used)) static int FUNC_1(struct snd_device *VAR_0)
{
 struct go7007 *VAR_1 = VAR_0->device_data;

 FUNC_0(VAR_1->snd_context);
 VAR_1->snd_context = ((void*)0);
 if (--VAR_1->ref_count == 0)
  FUNC_0(VAR_1);
 return 0;
}
