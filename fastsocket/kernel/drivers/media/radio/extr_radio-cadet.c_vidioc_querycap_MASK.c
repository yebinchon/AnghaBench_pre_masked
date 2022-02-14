
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
    struct v4l2_capability *VAR_7)
{
 FUNC_0(VAR_7->driver, "ADS Cadet", sizeof(VAR_7->driver));
 FUNC_0(VAR_7->card, "ADS Cadet", sizeof(VAR_7->card));
 FUNC_0(VAR_7->bus_info, "ISA", sizeof(VAR_7->bus_info));
 VAR_7->version = VAR_0;
 VAR_7->capabilities = VAR_4 | VAR_1 |
     VAR_3 | VAR_2;
 return 0;
}
