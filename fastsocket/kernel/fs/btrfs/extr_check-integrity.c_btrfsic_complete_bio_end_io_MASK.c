
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int dummy; } ;
struct bio {scalar_t__ bi_private; } ;


 int FUNC_0 (struct completion*) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0, int VAR_1)
{
 FUNC_0((struct completion *)VAR_0->bi_private);
}
