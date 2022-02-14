
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ctl_node_t ;
struct TYPE_3__ {int (* ctl ) (size_t*,size_t,void*,size_t*,void*,size_t) ;} ;
typedef TYPE_1__ ctl_named_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (char const*,int const**,size_t*,size_t*) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int FUNC_3 (size_t*,size_t,void*,size_t*,void*,size_t) ;

int
FUNC_4(const char *VAR_4, void *VAR_5, size_t *VAR_6, void *VAR_7,
    size_t VAR_8)
{
 int VAR_9;
 size_t VAR_10;
 ctl_node_t const *VAR_11[VAR_0];
 size_t VAR_12[VAR_0];
 const ctl_named_node_t *VAR_13;

 if (!VAR_3 && FUNC_0()) {
  VAR_9 = VAR_1;
  goto label_return;
 }

 VAR_10 = VAR_0;
 VAR_9 = FUNC_1(VAR_4, VAR_11, VAR_12, &VAR_10);
 if (VAR_9 != 0)
  goto label_return;

 VAR_13 = FUNC_2(VAR_11[VAR_10-1]);
 if (VAR_13 != ((void*)0) && VAR_13->ctl)
  VAR_9 = VAR_13->ctl(VAR_12, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8);
 else {

  VAR_9 = VAR_2;
 }

label_return:
 return(VAR_9);
}
