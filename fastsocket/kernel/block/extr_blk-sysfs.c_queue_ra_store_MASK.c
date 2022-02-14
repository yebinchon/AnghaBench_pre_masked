
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ra_pages; } ;
struct request_queue {TYPE_1__ backing_dev_info; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,char const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct request_queue *VAR_1, const char *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4;
 ssize_t VAR_5 = FUNC_0(&VAR_4, VAR_2, VAR_3);

 VAR_1->backing_dev_info.ra_pages = VAR_4 >> (VAR_0 - 10);

 return VAR_5;
}
