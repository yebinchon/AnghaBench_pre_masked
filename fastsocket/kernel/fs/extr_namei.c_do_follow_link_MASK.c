
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dentry; } ;
struct nameidata {scalar_t__ depth; int path; } ;
struct TYPE_2__ {scalar_t__ link_count; int total_link_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct path*,struct nameidata*) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct path*,struct nameidata*) ;
 int FUNC_5 (int ,struct nameidata*) ;

__attribute__((used)) static inline int FUNC_6(struct path *VAR_3, struct nameidata *VAR_4)
{
 int VAR_5 = -VAR_0;
 if (VAR_2->link_count >= VAR_1)
  goto loop;
 if (VAR_2->total_link_count >= 40)
  goto loop;
 FUNC_0(VAR_4->depth >= VAR_1);
 FUNC_2();
 VAR_5 = FUNC_5(VAR_3->dentry, VAR_4);
 if (VAR_5)
  goto loop;
 VAR_2->link_count++;
 VAR_2->total_link_count++;
 VAR_4->depth++;
 VAR_5 = FUNC_1(VAR_3, VAR_4);
 VAR_2->link_count--;
 VAR_4->depth--;
 return VAR_5;
loop:
 FUNC_4(VAR_3, VAR_4);
 FUNC_3(&VAR_4->path);
 return VAR_5;
}
