
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {char* name; TYPE_2__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_6__ {TYPE_1__* udev; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
     struct v4l2_capability *VAR_7)
{
 struct go7007 *VAR_8 = ((struct go7007_file *) VAR_6)->go;

 FUNC_2(VAR_7->driver, "go7007", sizeof(VAR_7->driver));
 FUNC_2(VAR_7->card, VAR_8->name, sizeof(VAR_7->card));




 VAR_7->version = FUNC_0(0, 9, 8);

 VAR_7->capabilities = VAR_3 |
       VAR_1;

 if (VAR_8->board_info->flags & VAR_0)
  VAR_7->capabilities |= VAR_2;

 return 0;
}
