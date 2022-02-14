
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int bio_set; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*,int ) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0)
{
 struct mddev *VAR_1, **VAR_2;

 VAR_2 = (void*)VAR_0;
 VAR_1 = VAR_2[-1];

 FUNC_0(VAR_0, VAR_1->bio_set);
}
