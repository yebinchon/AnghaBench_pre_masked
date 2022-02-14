
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio {int read_lock; int read_wait; int write_lock; int write_wait; } ;


 int FUNC_0 (struct audio*) ;
 int FUNC_1 (struct audio*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct audio *VAR_0)
{




 FUNC_4(&VAR_0->write_wait);
 FUNC_2(&VAR_0->write_lock);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_0->write_lock);
 FUNC_4(&VAR_0->read_wait);
 FUNC_2(&VAR_0->read_lock);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_0->read_lock);
}
