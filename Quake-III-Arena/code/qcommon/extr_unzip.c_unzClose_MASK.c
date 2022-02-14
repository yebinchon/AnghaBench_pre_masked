
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file; int * pfile_in_zip_read; } ;
typedef TYPE_1__ unz_s ;
typedef int * unzFile ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

extern int FUNC_3 (unzFile VAR_2)
{
 unz_s* VAR_3;
 if (VAR_2==((void*)0))
  return VAR_1;
 VAR_3=(unz_s*)VAR_2;

    if (VAR_3->pfile_in_zip_read!=((void*)0))
        FUNC_2(VAR_2);

 FUNC_1(VAR_3->file);
 FUNC_0(VAR_3);
 return VAR_0;
}
