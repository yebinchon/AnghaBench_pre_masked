
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int card; int driver; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;

int FUNC_1(struct file *VAR_6, void *VAR_7,
  struct v4l2_capability *VAR_8)
{
 FUNC_0(VAR_8->driver, VAR_2, sizeof(VAR_8->driver));
 FUNC_0(VAR_8->card, VAR_0, sizeof(VAR_8->card));
 VAR_8->version = VAR_1;
 VAR_8->capabilities = VAR_3 |
  VAR_5 | VAR_4;

 return 0;
}
