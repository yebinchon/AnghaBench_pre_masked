
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int retry_on_resume_list; int deferred_bio_list; } ;


 int FUNC_0 (struct thin_c*,int *) ;

__attribute__((used)) static void FUNC_1(struct thin_c *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->deferred_bio_list);
 FUNC_0(VAR_0, &VAR_0->retry_on_resume_list);
}
