
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long daemon_sleep; } ;
struct mddev {TYPE_1__ bitmap_info; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_1, char *VAR_2)
{
 ssize_t VAR_3;
 unsigned long VAR_4 = VAR_1->bitmap_info.daemon_sleep / VAR_0;
 unsigned long VAR_5 = VAR_1->bitmap_info.daemon_sleep % VAR_0;

 VAR_3 = FUNC_1(VAR_2, "%lu", VAR_4);
 if (VAR_5)
  VAR_3 += FUNC_1(VAR_2+VAR_3, ".%03u", FUNC_0(VAR_5));
 VAR_3 += FUNC_1(VAR_2+VAR_3, "\n");
 return VAR_3;
}
