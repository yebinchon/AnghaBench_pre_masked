
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
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
  struct v4l2_capability *VAR_6)
{
 FUNC_0(VAR_6->driver, "cafe_ccic");
 FUNC_0(VAR_6->card, "cafe_ccic");
 VAR_6->version = VAR_0;
 VAR_6->capabilities = VAR_3 |
  VAR_1 | VAR_2;
 return 0;
}
