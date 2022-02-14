
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {int conf_mutex; } ;


 int bnad_list_mutex ;
 int mutex_destroy (int *) ;

__attribute__((used)) static void
bnad_lock_uninit(struct bnad *bnad)
{
 mutex_destroy(&bnad->conf_mutex);
 mutex_destroy(&bnad_list_mutex);
}
