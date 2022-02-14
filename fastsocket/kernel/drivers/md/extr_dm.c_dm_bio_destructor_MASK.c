
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_set {int dummy; } ;
struct bio {struct bio_set* bi_private; } ;


 int FUNC_0 (struct bio*,struct bio_set*) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0)
{
 struct bio_set *VAR_1 = VAR_0->bi_private;

 FUNC_0(VAR_0, VAR_1);
}
