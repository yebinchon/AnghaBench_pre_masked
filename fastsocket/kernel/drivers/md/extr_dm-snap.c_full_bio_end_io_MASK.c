
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {void* bi_private; } ;


 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0, int VAR_1)
{
 void *VAR_2 = VAR_0->bi_private;

 FUNC_0(VAR_2, 0, VAR_1 ? 1 : 0);
}
