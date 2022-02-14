
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_capability*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
  struct v4l2_capability *VAR_8)
{
 FUNC_0(VAR_8, 0, sizeof(struct v4l2_capability));

 FUNC_1(VAR_8->driver, VAR_5);
 FUNC_1(VAR_8->card, VAR_4);
 FUNC_1(VAR_8->bus_info, VAR_3);
 VAR_8->version = VAR_2;
 VAR_8->capabilities =
  VAR_1 |
  VAR_0;

 return 0;
}
