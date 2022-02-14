
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ number_entry; scalar_t__ size_comment; } ;
struct TYPE_4__ {scalar_t__ size_central_dir; scalar_t__ offset_central_dir; int * pfile_in_zip_read; scalar_t__ central_pos; scalar_t__ byte_before_the_zipfile; int * file; TYPE_1__ gi; } ;
typedef TYPE_2__ unz_s ;
typedef int * unzFile ;
typedef scalar_t__ uLong ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*) ;
 int FUNC_6 (int *,scalar_t__*) ;

extern unzFile FUNC_7 (const char* VAR_4)
{
 unz_s VAR_5;
 unz_s *VAR_6;
 uLong VAR_7,VAR_8;
 FILE * VAR_9 ;

 uLong VAR_10;

 uLong VAR_11;

 uLong VAR_12;



 int VAR_13=VAR_3;

    VAR_9=FUNC_2(VAR_4,"rb");
 if (VAR_9==((void*)0))
  return ((void*)0);

 VAR_7 = FUNC_4(VAR_9);
 if (VAR_7==0)
  VAR_13=VAR_2;

 if (FUNC_3(VAR_9,VAR_7,VAR_0)!=0)
  VAR_13=VAR_2;


 if (FUNC_5(VAR_9,&VAR_8)!=VAR_3)
  VAR_13=VAR_2;


 if (FUNC_6(VAR_9,&VAR_10)!=VAR_3)
  VAR_13=VAR_2;


 if (FUNC_6(VAR_9,&VAR_11)!=VAR_3)
  VAR_13=VAR_2;


 if (FUNC_6(VAR_9,&VAR_5.gi.number_entry)!=VAR_3)
  VAR_13=VAR_2;


 if (FUNC_6(VAR_9,&VAR_12)!=VAR_3)
  VAR_13=VAR_2;

 if ((VAR_12!=VAR_5.gi.number_entry) ||
  (VAR_11!=0) ||
  (VAR_10!=0))
  VAR_13=VAR_1;


 if (FUNC_5(VAR_9,&VAR_5.size_central_dir)!=VAR_3)
  VAR_13=VAR_2;



 if (FUNC_5(VAR_9,&VAR_5.offset_central_dir)!=VAR_3)
  VAR_13=VAR_2;


 if (FUNC_6(VAR_9,&VAR_5.gi.size_comment)!=VAR_3)
  VAR_13=VAR_2;

 if ((VAR_7<VAR_5.offset_central_dir+VAR_5.size_central_dir) &&
  (VAR_13==VAR_3))
  VAR_13=VAR_1;

 if (VAR_13!=VAR_3)
 {
  FUNC_1(VAR_9);
  return ((void*)0);
 }

 VAR_5.file=VAR_9;
 VAR_5.byte_before_the_zipfile = VAR_7 -
                      (VAR_5.offset_central_dir+VAR_5.size_central_dir);
 VAR_5.central_pos = VAR_7;
    VAR_5.pfile_in_zip_read = ((void*)0);


 VAR_6=(unz_s*)FUNC_0(sizeof(unz_s));
 *VAR_6=VAR_5;

 return (unzFile)VAR_6;
}
