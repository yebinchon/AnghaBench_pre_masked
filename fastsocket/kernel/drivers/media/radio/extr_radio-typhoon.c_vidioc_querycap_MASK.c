
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
     struct v4l2_capability *VAR_5)
{
 FUNC_0(VAR_5->driver, "radio-typhoon", sizeof(VAR_5->driver));
 FUNC_0(VAR_5->card, "Typhoon Radio", sizeof(VAR_5->card));
 FUNC_0(VAR_5->bus_info, "ISA", sizeof(VAR_5->bus_info));
 VAR_5->version = VAR_0;
 VAR_5->capabilities = VAR_2 | VAR_1;
 return 0;
}
