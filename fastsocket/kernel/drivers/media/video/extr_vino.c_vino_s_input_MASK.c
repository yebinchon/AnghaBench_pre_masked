
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_channel_settings {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 struct vino_channel_settings* FUNC_1 (struct file*) ;
 int FUNC_2 (struct vino_channel_settings*,unsigned int) ;
 int FUNC_3 (struct vino_channel_settings*,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
        unsigned int VAR_4)
{
 struct vino_channel_settings *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;
 FUNC_0("requested input = %d\n", VAR_4);

 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (VAR_6 == VAR_1)
  return -VAR_0;

 return FUNC_3(VAR_5, VAR_6);
}
