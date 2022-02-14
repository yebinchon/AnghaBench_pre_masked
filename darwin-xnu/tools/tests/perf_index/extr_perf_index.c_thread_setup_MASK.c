
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {long long length; long long num_threads; int test_argv; int test_argc; } ;
struct TYPE_3__ {int (* execute ) (int,int,long long,int ,int ) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,int,long long,int ,int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void* FUNC_5(void *VAR_6) {
  int VAR_7 = (int)VAR_6;
  long long VAR_8 = VAR_0.length / VAR_0.num_threads;
  int VAR_9 = VAR_0.length % VAR_0.num_threads;

  if(VAR_9 > VAR_7) {
    VAR_8++;
  }

  FUNC_2(&VAR_2);
  VAR_1++;
  if(VAR_1 == VAR_0.num_threads)
    FUNC_0(&VAR_5);
  FUNC_1(&VAR_3, &VAR_2);
  FUNC_3(&VAR_2);
  VAR_4.execute(VAR_7, VAR_0.num_threads, VAR_8, VAR_0.test_argc, VAR_0.test_argv);
  return ((void*)0);
}
