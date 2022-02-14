
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int dummy; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 struct bio* FUNC_0 (struct bio_list*) ;
 int FUNC_1 (struct mirror_set*,struct bio*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct bio_list *VAR_2)
{
 struct mirror_set *VAR_3 = VAR_1;
 struct bio *VAR_4;

 while ((VAR_4 = FUNC_0(VAR_2)))
  FUNC_1(VAR_3, VAR_4, VAR_0);
}
