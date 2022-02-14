
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long pos_in_central_dir; } ;
typedef TYPE_1__ unz_s ;
typedef int * unzFile ;


 int VAR_0 ;
 int VAR_1 ;

extern int FUNC_0 (unzFile VAR_2, unsigned long *VAR_3 )
{
 unz_s* VAR_4;

 if (VAR_2==((void*)0))
  return VAR_1;
 VAR_4=(unz_s*)VAR_2;

 *VAR_3 = VAR_4->pos_in_central_dir;
 return VAR_0;
}
